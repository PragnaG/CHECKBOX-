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


void MainWindow::on_checkBox_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox->isChecked())
    {
        stream<<"Bold option is Checked"<<endl;
    }
    else
    {
       stream<<"Bold option is Unchecked"<<endl;
    }
    ui->label->setText("<font color='brown'>Change Me</font>");
}

void MainWindow::on_checkBox_2_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox_2->isChecked())
    {
        stream<<"Italic option is Checked"<<endl;
    }
    else
    {
       stream<<"Italic option is Unchecked"<<endl;
    }
    ui->label->setText("<font color='green'>Change Me</font>");
}

void MainWindow::on_radioButton_clicked()
{
    QTextStream stream(stdout);
    if(ui->radioButton->isChecked())
    {
        stream<<"Left option is Clicked"<<endl;
    }
    else
    {
       stream<<"Left option is Unclicked"<<endl;
    }
    ui->label->setText("<font color='black'>Change Me</font>");

}

void MainWindow::on_radioButton_2_clicked()
{
    QTextStream stream(stdout);
    if(ui->radioButton_2->isChecked())
    {
        stream<<"Center option is Clicked"<<endl;
    }
    else
    {
       stream<<"Center option is Unclicked"<<endl;
    }
    ui->label->setText("<font color='blue'>Change Me</font>");
}

void MainWindow::on_radioButton_3_clicked()
{
    QTextStream stream(stdout);
    if(ui->radioButton_3->isChecked())
    {
        stream<<"Right option is Clicked"<<endl;
    }
    else
    {
       stream<<"Right option is Unclicked"<<endl;
    }
    ui->label->setText("<font color='orange'>Change Me</font>");
}
