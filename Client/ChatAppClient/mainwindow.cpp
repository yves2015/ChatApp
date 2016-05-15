#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "form.h"
#include <QUdpSocket> 
#include <QHostAddress> 
#include <QIntValidator> 
#include "CommunicationStructs.h"
#include "Register.h"

const int PORT = 4000;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
	ui->setupUi(this);

	//设置user_name只能输入数字
	QRegExp regx("[0-9]+$");
	QValidator *validator = new QRegExpValidator(regx, this);
	ui->lineEdit_userName->setValidator(validator);

	//设置密码显示方式为QLineEdit::Password
	ui->lineEdit_password->setEchoMode(QLineEdit::Password);

	connect(ui->pushButton_login, SIGNAL(clicked()), this, SLOT(close()));
	connect(ui->pushButton_login, SIGNAL(clicked()),this, SLOT(doLogin()));
	connect(ui->pushButton_reg, SIGNAL(clicked()), this, SLOT(doRegister()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::doLogin() {
	using namespace commu;

	QUdpSocket qUdpSock;
	bool ret = false;
	int port = PORT;
	do {
		ret = qUdpSock.bind(port);
		++port;
	} while (!ret);

	char nameAndPassword[256];
	memset(nameAndPassword, 0, 256);

	LOGIN login;
	login.head.passwordSize = 1;
	std::string userName = ui->lineEdit_userName->text().toStdString();
	login.head.userSize = userName.size();
	memcpy(login.userName, userName.c_str(), userName.size());

	std::string password = ui->lineEdit_userName->text().toStdString();
	login.head.passwordSize = password.size();
	memcpy(login.password, password.c_str(), password.size());

	memcpy(nameAndPassword, (char *)&login, sizeof(LOGIN));

	qUdpSock.writeDatagram(nameAndPassword,QHostAddress("192.168.1.105"), 15950);

	

	Form *form = new Form;
	form->show();
}

void MainWindow::doRegister() {
	Register *uiReg = new Register();
	uiReg->show();
}