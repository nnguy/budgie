#ifndef GRAINBUDGET_H
#define GRAINBUDGET_H

#include <QDialog>

namespace Ui {
class grainbudget;
}

class grainbudget : public QDialog
{
    Q_OBJECT

public:
    explicit grainbudget(QWidget *parent = nullptr);
    ~grainbudget();

private:
    Ui::grainbudget *ui;
};

#endif // GRAINBUDGET_H
