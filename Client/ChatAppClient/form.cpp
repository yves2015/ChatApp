#include "form.h"
#include "ui_chathall.h"

Form::Form(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::Form)
{
	ui->setupUi(this);
}

Form::~Form()
{
	delete ui;
}