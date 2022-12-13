#include "graindiscount.h"
#include "ui_graindiscount.h"

graindiscount::graindiscount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::graindiscount)
{
    ui->setupUi(this);
}

graindiscount::~graindiscount()
{
    delete ui;
}
