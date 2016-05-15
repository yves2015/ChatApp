#pragma once

#include <QtWidgets/QWidget>
#include "ui_register.h"

namespace Ui {
	class RegisterForm;
}

class Register : public QWidget
{
	Q_OBJECT
public:
	explicit Register(QWidget *parent = 0);
	~Register();
public slots:
	void doRegister();
private:
	Ui::RegisterForm *ui;
};