/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit_userName;
    QLineEdit *lineEdit_password;
    QCheckBox *checkBox_rem;
    QCheckBox *checkBox_auto;
    QPushButton *pushButton_reg;
    QPushButton *pushButton_login;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(277, 198);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(277, 198));
        MainWindow->setMaximumSize(QSize(277, 198));
        QIcon icon;
        icon.addFile(QStringLiteral("MYCHAT.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lineEdit_userName = new QLineEdit(centralWidget);
        lineEdit_userName->setObjectName(QStringLiteral("lineEdit_userName"));
        lineEdit_userName->setGeometry(QRect(90, 20, 161, 20));
        lineEdit_userName->setInputMethodHints(Qt::ImhDigitsOnly);
        lineEdit_password = new QLineEdit(centralWidget);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(90, 69, 161, 20));
        checkBox_rem = new QCheckBox(centralWidget);
        checkBox_rem->setObjectName(QStringLiteral("checkBox_rem"));
        checkBox_rem->setGeometry(QRect(60, 109, 71, 16));
        checkBox_auto = new QCheckBox(centralWidget);
        checkBox_auto->setObjectName(QStringLiteral("checkBox_auto"));
        checkBox_auto->setGeometry(QRect(149, 109, 71, 16));
        pushButton_reg = new QPushButton(centralWidget);
        pushButton_reg->setObjectName(QStringLiteral("pushButton_reg"));
        pushButton_reg->setGeometry(QRect(60, 139, 75, 23));
        pushButton_login = new QPushButton(centralWidget);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));
        pushButton_login->setGeometry(QRect(140, 139, 75, 23));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(3);
        sizePolicy1.setHeightForWidth(pushButton_login->sizePolicy().hasHeightForWidth());
        pushButton_login->setSizePolicy(sizePolicy1);
        pushButton_login->setMouseTracking(false);
        pushButton_login->setAutoDefault(false);
        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(20, 20, 61, 17));
        QFont font;
        font.setKerning(true);
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
        lineEdit_4 = new QLineEdit(centralWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(20, 70, 61, 17));
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
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MYCHAT", 0));
        checkBox_rem->setText(QApplication::translate("MainWindow", "\350\256\260\344\275\217\345\257\206\347\240\201", 0));
        checkBox_auto->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\347\231\273\345\275\225", 0));
        pushButton_reg->setText(QApplication::translate("MainWindow", "\346\263\250\345\206\214", 0));
        pushButton_login->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225", 0));
        lineEdit_3->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215\357\274\232", 0));
        lineEdit_4->setText(QApplication::translate("MainWindow", "\345\257\206  \347\240\201\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
