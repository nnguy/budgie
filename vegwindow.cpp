#include "vegwindow.h"
#include "ui_vegwindow.h"
#include "vegdiscount.h"
#include "vegbudget.h"


vegwindow::vegwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::vegwindow)
{
    ui->setupUi(this);
}

vegwindow::~vegwindow()
{
    delete ui;
}

void vegwindow::on_cheapbutton_clicked()
{
    hide();
    vegbudget m;
    m.setModal(true);
    m.exec();
}


void vegwindow::on_discountbutton_clicked()
{
    hide();
    vegdiscount m;
    m.setModal(true);
    m.exec();


}

