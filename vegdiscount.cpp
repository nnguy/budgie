#include "vegdiscount.h"
#include "ui_vegdiscount.h"

vegdiscount::vegdiscount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::vegdiscount)
{
    ui->setupUi(this);
}

vegdiscount::~vegdiscount()
{
    delete ui;
}
