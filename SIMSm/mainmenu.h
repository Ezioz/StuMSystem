#ifndef MAINMENU_H
#define MAINMENU_H

#include <QDialog>

namespace Ui {
class mainmenu;
}

class mainmenu : public QDialog
{
    Q_OBJECT

public:
    explicit mainmenu(QWidget *parent = 0);
    ~mainmenu();
private slots:
    void on_loginmenu_clicked();
    void on_loginmenu_pressed();

private:
    Ui::mainmenu *ui;

};

#endif // MAINMENU_H
