#include "meatwindow.h"
#include "ui_meatwindow.h"
#include "meatbudget.h"
#include "meatdiscount.h"

meatwindow::meatwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::meatwindow)
{
    ui->setupUi(this);
}

meatwindow::~meatwindow()
{
    delete ui;
}

void meatwindow::on_cheapbutton_clicked()
{
    hide();
    meatbudget m;
    m.setModal(true);
    m.exec();
}


void meatwindow::on_discountbutton_clicked()
{
    hide();
    meatdiscount m;
    m.setModal(true);
    m.exec();

}

