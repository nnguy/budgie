#include "meatdiscount.h"
#include "ui_meatdiscount.h"

meatdiscount::meatdiscount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::meatdiscount)
{
    ui->setupUi(this);
}

meatdiscount::~meatdiscount()
{
    delete ui;
}
