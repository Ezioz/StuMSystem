#include "craccount.h"
#include "ui_craccount.h"
#include<QFile>
#include<QDebug>
#include <QMessageBox>
#include<QString>
#include<QTextStream>
CrAccount::CrAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CrAccount)
{
    ui->setupUi(this);
}

CrAccount::~CrAccount()
{
    delete ui;
}

void CrAccount::on_create_clicked()
{
        QFile file("./user.txt");
        if(!file.open(QIODevice::Append)){
            qDebug()<<"Failed to Open";
        }
        QTextStream  qstr_all_file(&file);
        qstr_all_file<<'\n'+ui->newuser->text()+'\n'<<ui->newpwd->text();
        file.close();
        QMessageBox::warning(this, tr("Notice"), tr("Successfully Action"), QMessageBox::Yes);
}
