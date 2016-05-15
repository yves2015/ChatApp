#include <string>
#include <QMessageBox> 
#include <iostream>
#include "Register.h"
#include "CommunicationStructs.h"
#include "UdpSocket.h"

#pragma comment(lib,"WS2_32.lib")

Register::Register(QWidget *parent) : QWidget(parent),
	ui(new Ui::RegisterForm) {

	ui->setupUi(this);
	QRegExp regx("[0-9]+$");
	QValidator *validator = new QRegExpValidator(regx, this);
	ui->lineEdit_userName->setValidator(validator);

	//设置密码显示方式为QLineEdit::Password
	ui->lineEdit_password->setEchoMode(QLineEdit::Password);
	ui->lineEdit_password_2->setEchoMode(QLineEdit::Password);

	connect(ui->pushButton_reg, SIGNAL(clicked()), this, SLOT(doRegister()));
}
Register::~Register() {
	delete ui;
}
void Register::doRegister() {
	using namespace commu;
	
	//判断两次输入的密码是否相同
	std::string userName, password1, password2;
	userName = ui->lineEdit_userName->text().toStdString();
	password1 = ui->lineEdit_password->text().toStdString();
	password2 = ui->lineEdit_password_2->text().toStdString();

	//处理没有输入用户名和两次密码不一样的情况
	if (userName.empty()) {
		QMessageBox::warning(NULL, "Register", "Failed! Please input username!", QMessageBox::Yes);
	}
	else if (password1.empty()) {
		QMessageBox::warning(NULL,"Register", "Failed! Please input password!", QMessageBox::Yes);
	}
	else if (password1 != password2) {

		QMessageBox::warning(NULL,"Register", "Failed! Two passwords must be the same!", QMessageBox::Yes);
	}
	else {
		char registerData[1024];
		memset(registerData, 0, 1024);

		REGISTER reg;
		memset(&reg, 0, sizeof(REGISTER));
		reg.head.type = 0;
		reg.head.userSize = userName.size();
		memcpy(reg.userName, userName.c_str(), userName.size());
		reg.head.passwordSize = password1.size();
		memcpy(reg.password, password1.c_str(), password1.size());

		memcpy(registerData, &reg, sizeof(reg));

		UdpSocket udpSocket;
		int n = udpSocket.sendData(registerData, 1024);

		char c;
		udpSocket.recvData(&c, 1);
		if (c == 0) {
			QMessageBox::information(NULL, "Register", "Register successfully!", QMessageBox::Yes);
			this->close();
		}
		else if(c == 1)
			QMessageBox::warning(NULL, "Register", "User name has been used!", QMessageBox::Yes);
	}
	
}