#ifndef VEGBUDGET_H
#define VEGBUDGET_H

#include <QDialog>

namespace Ui {
class vegbudget;
}

class vegbudget : public QDialog
{
    Q_OBJECT

public:
    explicit vegbudget(QWidget *parent = nullptr);
    ~vegbudget();

private:
    Ui::vegbudget *ui;
};

#endif // VEGBUDGET_H
