#include "vegbudget.h"
#include "ui_vegbudget.h"

vegbudget::vegbudget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::vegbudget)
{
    ui->setupUi(this);
}

vegbudget::~vegbudget()
{
    delete ui;
}
