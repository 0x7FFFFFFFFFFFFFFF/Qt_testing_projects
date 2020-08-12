/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *topPanel;
    QHBoxLayout *horizontalLayout;
    QLabel *currentDateTime;
    QSpacerItem *horizontalSpacer;
    QPushButton *restartButton;
    QPushButton *shutdownButton;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *logo;
    QHBoxLayout *horizontalLayout_3;
    QWidget *loginForm;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *username;
    QLabel *label_2;
    QLineEdit *password;
    QPushButton *loginButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("#centralwidget { background: rgba(32, 80, 96, 100); \n"
"border-image: url(:/images/login_bg.png);\n"
"}\n"
"\n"
"#topPanel {\n"
"    background-color: qlineargradient(spread:reflect, x1:0.5, y1:0, x2:0, y2:0, stop:0 rgba(91, 204, 233, 100), stop:1 rgba(32, 80, 96, 100));\n"
"}\n"
"\n"
"#loginForm {\n"
" background: rgba(0, 0, 0, 80);\n"
" border-radius: 8px;\n"
"}\n"
"\n"
"QLabel { color: white; }\n"
"QLineEdit { border-radius: 3px; }\n"
"\n"
"QPushButton {\n"
"    color: white;\n"
"    background-color: #27a9e3;\n"
"    border-width: 0px;\n"
"    border-radius: 3px;\n"
"}\n"
"QPushButton:hover { background-color: #66c011; }"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        topPanel = new QWidget(centralwidget);
        topPanel->setObjectName(QString::fromUtf8("topPanel"));
        horizontalLayout = new QHBoxLayout(topPanel);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        currentDateTime = new QLabel(topPanel);
        currentDateTime->setObjectName(QString::fromUtf8("currentDateTime"));

        horizontalLayout->addWidget(currentDateTime);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        restartButton = new QPushButton(topPanel);
        restartButton->setObjectName(QString::fromUtf8("restartButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(restartButton->sizePolicy().hasHeightForWidth());
        restartButton->setSizePolicy(sizePolicy);
        restartButton->setMinimumSize(QSize(55, 55));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/restart_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        restartButton->setIcon(icon);
        restartButton->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(restartButton);

        shutdownButton = new QPushButton(topPanel);
        shutdownButton->setObjectName(QString::fromUtf8("shutdownButton"));
        sizePolicy.setHeightForWidth(shutdownButton->sizePolicy().hasHeightForWidth());
        shutdownButton->setSizePolicy(sizePolicy);
        shutdownButton->setMinimumSize(QSize(55, 55));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/shutdown_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        shutdownButton->setIcon(icon1);
        shutdownButton->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(shutdownButton);


        verticalLayout->addWidget(topPanel);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        logo = new QLabel(centralwidget);
        logo->setObjectName(QString::fromUtf8("logo"));
        sizePolicy.setHeightForWidth(logo->sizePolicy().hasHeightForWidth());
        logo->setSizePolicy(sizePolicy);
        logo->setMinimumSize(QSize(150, 150));
        logo->setStyleSheet(QString::fromUtf8(""));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/images/logo.png")));

        horizontalLayout_2->addWidget(logo);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        loginForm = new QWidget(centralwidget);
        loginForm->setObjectName(QString::fromUtf8("loginForm"));
        sizePolicy.setHeightForWidth(loginForm->sizePolicy().hasHeightForWidth());
        loginForm->setSizePolicy(sizePolicy);
        loginForm->setMinimumSize(QSize(350, 200));
        loginForm->setStyleSheet(QString::fromUtf8("#loginForm{\n"
"	border: 1px solid;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(loginForm);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(35, 35, 35, 35);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label = new QLabel(loginForm);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        username = new QLineEdit(loginForm);
        username->setObjectName(QString::fromUtf8("username"));
        username->setMinimumSize(QSize(0, 25));

        formLayout->setWidget(0, QFormLayout::FieldRole, username);

        label_2 = new QLabel(loginForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        password = new QLineEdit(loginForm);
        password->setObjectName(QString::fromUtf8("password"));
        password->setMinimumSize(QSize(0, 25));

        formLayout->setWidget(1, QFormLayout::FieldRole, password);

        loginButton = new QPushButton(loginForm);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setMinimumSize(QSize(0, 25));
        loginButton->setStyleSheet(QString::fromUtf8(""));

        formLayout->setWidget(2, QFormLayout::SpanningRole, loginButton);


        verticalLayout_2->addLayout(formLayout);


        horizontalLayout_3->addWidget(loginForm);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        currentDateTime->setText(QApplication::translate("MainWindow", "Monday, 25-10-2015 3:14 PM", nullptr));
        restartButton->setText(QString());
        shutdownButton->setText(QString());
        logo->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Username:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Password:", nullptr));
        loginButton->setText(QApplication::translate("MainWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
