#ifndef MEATBUDGET_H
#define MEATBUDGET_H

#include <QDialog>

namespace Ui {
class meatbudget;
}

class meatbudget : public QDialog
{
    Q_OBJECT

public:
    explicit meatbudget(QWidget *parent = nullptr);
    ~meatbudget();

private:
    Ui::meatbudget *ui;
};

#endif // MEATBUDGET_H
