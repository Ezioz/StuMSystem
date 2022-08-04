#include "mainwindow.h"
#include <QApplication>
#include "logindialog.h"
#include"studialog.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    LoginDialog dlg;
    int i=dlg.exec();
    if(i==QDialog::Accepted)
    {
    w.show();
    a.exec();
    }
    return 0;
}
