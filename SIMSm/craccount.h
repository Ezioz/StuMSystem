#ifndef CRACCOUNT_H
#define CRACCOUNT_H

#include <QDialog>

namespace Ui {
class CrAccount;
}

class CrAccount : public QDialog
{
    Q_OBJECT

public:
    explicit CrAccount(QWidget *parent = 0);
    ~CrAccount();

private slots:
    void on_create_clicked();

private:
    Ui::CrAccount *ui;
};

#endif // CRACCOUNT_H
