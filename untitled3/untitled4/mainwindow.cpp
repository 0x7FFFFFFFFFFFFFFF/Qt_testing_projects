#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QStyle>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->b1->setProperty("pagematches", true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_tabWidget_currentChanged(int index)
{
    ui->b1->setProperty("pagematches", false);
    ui->b2->setProperty("pagematches", false);
    ui->b3->setProperty("pagematches", false);

    if(index == 0)
        ui->b1->setProperty("pagematches", true);
    else if(index == 1)
        ui->b2->setProperty("pagematches", true);
    else
        ui->b3->setProperty("pagematches", true);

    ui->b1->style()->polish(ui->b1);
    ui->b2->style()->polish(ui->b2);
    ui->b3->style()->polish(ui->b3);
}
