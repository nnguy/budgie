#include "meatbudget.h"
#include "ui_meatbudget.h"

meatbudget::meatbudget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::meatbudget)
{
    ui->setupUi(this);
}

meatbudget::~meatbudget()
{
    delete ui;
}
