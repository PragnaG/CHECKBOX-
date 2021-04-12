#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTextStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_checkBox_1_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox_1->isChecked())
    {
        stream<<"Option 1 is Checked"<<endl;
    }
    else
    {
        stream<<"Option 1 is Unchecked"<<endl;
    }
}

void MainWindow::on_checkBox_2_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox_2->isChecked())
    {
        stream<<"Option 2 is Checked"<<endl;
    }
    else
    {
        stream<<"Option 2 is Unchecked"<<endl;
    }

}

void MainWindow::on_checkBox_3_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox_3->isChecked())
    {
        stream<<"Option 3 is Checked"<<endl;
    }
    else
    {
        stream<<"Option 3 is Unchecked"<<endl;
    }

}
