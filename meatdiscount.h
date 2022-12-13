#ifndef MEATDISCOUNT_H
#define MEATDISCOUNT_H

#include <QDialog>

namespace Ui {
class meatdiscount;
}

class meatdiscount : public QDialog
{
    Q_OBJECT

public:
    explicit meatdiscount(QWidget *parent = nullptr);
    ~meatdiscount();

private:
    Ui::meatdiscount *ui;
};

#endif // MEATDISCOUNT_H
