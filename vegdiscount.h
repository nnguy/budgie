#ifndef VEGDISCOUNT_H
#define VEGDISCOUNT_H

#include <QDialog>

namespace Ui {
class vegdiscount;
}

class vegdiscount : public QDialog
{
    Q_OBJECT

public:
    explicit vegdiscount(QWidget *parent = nullptr);
    ~vegdiscount();

private:
    Ui::vegdiscount *ui;
};

#endif // VEGDISCOUNT_H
