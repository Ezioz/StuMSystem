#include "logindialog.h"
#include "ui_logindialog.h"
#include"user.h"
#include <QMessageBox>
#include<craccount.h>
#include<QString>
#include<QDebug>
#include"studialog.h"
LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/new/csu.jpg"));
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_loginBtn_clicked()
{
    QByteArray ba1 = ui->pwdLineEdit->text().toUtf8();
    QByteArray ba2 = ui->usrLineEdit->text().toUtf8();
       char* ch2=ba1.data();
       char*ch3=ba2.data();
    user studlg;

    if(ui->usrLineEdit->text() == tr("csuauto") &&
   ui->pwdLineEdit->text() == tr("123456"))
   {
  accept();
   }
      else  if(studlg.read(ch3,ch2)==0){
      studialog b(ch3);
      b.exec();
    }
    else
    QMessageBox::warning(this, tr("Warning"), tr("user name or password error!"), QMessageBox::Yes);


}

void LoginDialog::on_pushButton_2_clicked()
{
    CrAccount a;
    a.exec();
}
