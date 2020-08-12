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
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *b1;
    QPushButton *b2;
    QPushButton *b3;
    QSpacerItem *verticalSpacer;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QWidget *tab_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: white;\n"
"    background-color: #27a9e3;\n"
"    border-width: 0px;\n"
"    border-radius: 3px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    color: white;\n"
"    background-color: #66c011;\n"
"    border-width: 0px;\n"
"    border-radius: 3px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    color: white;\n"
"    background-color: yellow;\n"
"    border-width: 0px;\n"
"    border-radius: 3px;\n"
"}\n"
"\n"
"QPushButton[pagematches=true] {\n"
"    color: white;\n"
"    background-color: red;\n"
"    border-width: 0px;\n"
"    border-radius: 3px;\n"
"}\n"
"\n"
"\n"
"QPushButton[pagematches=true]:hover {\n"
"    background-color: pink;\n"
"}\n"
"\n"
"QPushButton[pagematches=true]:pressed {\n"
"    background-color: gold;\n"
"}\n"
""));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        b1 = new QPushButton(centralwidget);
        b1->setObjectName(QString::fromUtf8("b1"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(b1->sizePolicy().hasHeightForWidth());
        b1->setSizePolicy(sizePolicy);
        b1->setMinimumSize(QSize(75, 75));

        verticalLayout->addWidget(b1);

        b2 = new QPushButton(centralwidget);
        b2->setObjectName(QString::fromUtf8("b2"));
        sizePolicy.setHeightForWidth(b2->sizePolicy().hasHeightForWidth());
        b2->setSizePolicy(sizePolicy);
        b2->setMinimumSize(QSize(75, 75));

        verticalLayout->addWidget(b2);

        b3 = new QPushButton(centralwidget);
        b3->setObjectName(QString::fromUtf8("b3"));
        sizePolicy.setHeightForWidth(b3->sizePolicy().hasHeightForWidth());
        b3->setSizePolicy(sizePolicy);
        b3->setMinimumSize(QSize(75, 75));

        verticalLayout->addWidget(b3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());

        horizontalLayout->addWidget(tabWidget);


        horizontalLayout_2->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        b1->setText(QApplication::translate("MainWindow", "Page 1", nullptr));
        b2->setText(QApplication::translate("MainWindow", "Page 2", nullptr));
        b3->setText(QApplication::translate("MainWindow", "Page 3", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Page 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Page 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Page 3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
