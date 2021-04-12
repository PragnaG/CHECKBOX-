#include "widget.h"
#include "ui_widget.h"
#include<QButtonGroup>
#include<QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QButtonGroup *buttongroup=new QButtonGroup(this);
    buttongroup->addButton(ui->WindowsCheckBox);
    buttongroup->addButton(ui->MacCheckBox);
    buttongroup->addButton(ui->LinuxCheckBox);
    buttongroup->setExclusive(true);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_WindowsCheckBox_toggled(bool checked)
{
    if(checked)
    {
        qDebug()<<"Windows CheckBox is Checked";
    }
    else
    {
        qDebug()<<"Windows CheckBox is Unchecked";
    }
}

void Widget::on_pushButton_clicked()
{//EXCLUSIVE
    if(ui->WindowsCheckBox->isChecked())
    {
        qDebug()<<"Windows CheckBox is Checked";
    }
    else
    {
        qDebug()<<"Windows CheckBox is Unchecked";
    }
    if(ui->MacCheckBox->isChecked())
    {
        qDebug()<<"Mac CheckBox is Checked";
    }
    else
    {
        qDebug()<<"Mac CheckBox is Unchecked";
    }
    if(ui->LinuxCheckBox->isChecked())
    {
        qDebug()<<"Linux CheckBox is Checked";
    }
    else
    {
        qDebug()<<"Linux CheckBox is Unchecked";
    }
}

void Widget::on_pushButton_2_clicked()
{//NON-EXCLUSIVE
    if(ui->WindowsCheckBox->isChecked())
    {
        ui->WindowsCheckBox->setChecked(false);
    }
    else
    {
        ui->WindowsCheckBox->setChecked(true);
    }
}



void Widget::on_MacCheckBox_toggled(bool checked)
{
    if(checked)
    {
        qDebug()<<"Mac CheckBox is Checked";
    }
    else
    {
        qDebug()<<"Mac CheckBox is Unchecked";
    }
}

void Widget::on_LinuxCheckBox_toggled(bool checked)
{
    if(checked)
    {
        qDebug()<<"Linux CheckBox is Checked";
    }
    else
    {
        qDebug()<<"Linux CheckBox is Unchecked";
    }
}

void Widget::on_checkBox_4_toggled(bool checked)
{
    if(checked)
    {
        qDebug()<<"A CheckBox is Checked";
    }
    else
    {
        qDebug()<<"A CheckBox is Unchecked";
    }
}

void Widget::on_checkBox_5_toggled(bool checked)
{
    if(checked)
    {
        qDebug()<<"B CheckBox is Checked";
    }
    else
    {
        qDebug()<<"B CheckBox is Unchecked";
    }
}

void Widget::on_checkBox_6_toggled(bool checked)
{
    if(checked)
    {
        qDebug()<<"C CheckBox is Checked";
    }
    else
    {
        qDebug()<<"C CheckBox is Unchecked";
    }
}
