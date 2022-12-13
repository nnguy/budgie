#ifndef GRAINDISCOUNT_H
#define GRAINDISCOUNT_H

#include <QDialog>

namespace Ui {
class graindiscount;
}

class graindiscount : public QDialog
{
    Q_OBJECT

public:
    explicit graindiscount(QWidget *parent = nullptr);
    ~graindiscount();

private:
    Ui::graindiscount *ui;
};

#endif // GRAINDISCOUNT_H
