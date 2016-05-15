/********************************************************************************
** Form generated from reading UI file 'Register.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterForm
{
public:
    QLineEdit *lineEdit_userName;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_reg;
    QLineEdit *lineEdit_password_2;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;

    void setupUi(QWidget *RegisterForm)
    {
        if (RegisterForm->objectName().isEmpty())
            RegisterForm->setObjectName(QStringLiteral("RegisterForm"));
        RegisterForm->resize(312, 222);
        QIcon icon;
        icon.addFile(QStringLiteral("MYCHAT.ico"), QSize(), QIcon::Normal, QIcon::Off);
        RegisterForm->setWindowIcon(icon);
        lineEdit_userName = new QLineEdit(RegisterForm);
        lineEdit_userName->setObjectName(QStringLiteral("lineEdit_userName"));
        lineEdit_userName->setGeometry(QRect(119, 31, 161, 20));
        lineEdit_userName->setCursor(QCursor(Qt::IBeamCursor));
        lineEdit_userName->setInputMethodHints(Qt::ImhDigitsOnly);
        lineEdit_password = new QLineEdit(RegisterForm);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(120, 80, 161, 20));
        pushButton_reg = new QPushButton(RegisterForm);
        pushButton_reg->setObjectName(QStringLiteral("pushButton_reg"));
        pushButton_reg->setGeometry(QRect(110, 171, 75, 23));
        lineEdit_password_2 = new QLineEdit(RegisterForm);
        lineEdit_password_2->setObjectName(QStringLiteral("lineEdit_password_2"));
        lineEdit_password_2->setGeometry(QRect(120, 130, 161, 20));
        lineEdit_5 = new QLineEdit(RegisterForm);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(30, 131, 71, 17));
        QFont font;
        font.setKerning(true);
        lineEdit_5->setFont(font);
        lineEdit_5->setMouseTracking(false);
        lineEdit_5->setAcceptDrops(true);
        lineEdit_5->setToolTipDuration(-1);
#ifndef QT_NO_WHATSTHIS
        lineEdit_5->setWhatsThis(QStringLiteral(""));
#endif // QT_NO_WHATSTHIS
        lineEdit_5->setFrame(false);
        lineEdit_5->setDragEnabled(false);
        lineEdit_5->setReadOnly(true);
        lineEdit_5->setClearButtonEnabled(false);
        lineEdit_3 = new QLineEdit(RegisterForm);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(30, 31, 71, 17));
        lineEdit_3->setFont(font);
        lineEdit_3->setMouseTracking(false);
        lineEdit_3->setAcceptDrops(true);
        lineEdit_3->setToolTipDuration(-1);
#ifndef QT_NO_WHATSTHIS
        lineEdit_3->setWhatsThis(QStringLiteral(""));
#endif // QT_NO_WHATSTHIS
        lineEdit_3->setFrame(false);
        lineEdit_3->setDragEnabled(false);
        lineEdit_3->setReadOnly(true);
        lineEdit_3->setClearButtonEnabled(false);
        lineEdit_4 = new QLineEdit(RegisterForm);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(30, 81, 71, 17));
        lineEdit_4->setFont(font);
        lineEdit_4->setMouseTracking(false);
        lineEdit_4->setAcceptDrops(true);
        lineEdit_4->setToolTipDuration(-1);
#ifndef QT_NO_WHATSTHIS
        lineEdit_4->setWhatsThis(QStringLiteral(""));
#endif // QT_NO_WHATSTHIS
        lineEdit_4->setFrame(false);
        lineEdit_4->setDragEnabled(false);
        lineEdit_4->setReadOnly(true);
        lineEdit_4->setClearButtonEnabled(false);

        retranslateUi(RegisterForm);

        QMetaObject::connectSlotsByName(RegisterForm);
    } // setupUi

    void retranslateUi(QWidget *RegisterForm)
    {
        RegisterForm->setWindowTitle(QApplication::translate("RegisterForm", "Form", 0));
        pushButton_reg->setText(QApplication::translate("RegisterForm", "\346\263\250\345\206\214", 0));
        lineEdit_password_2->setText(QString());
        lineEdit_5->setText(QApplication::translate("RegisterForm", "\351\207\215\345\244\215\345\257\206\347\240\201\357\274\232", 0));
        lineEdit_3->setText(QApplication::translate("RegisterForm", "\347\224\250 \346\210\267 \345\220\215\357\274\232", 0));
        lineEdit_4->setText(QApplication::translate("RegisterForm", "\345\257\206    \347\240\201\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class RegisterForm: public Ui_RegisterForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
