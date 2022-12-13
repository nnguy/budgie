#include "grainwindow.h"
#include "ui_grainwindow.h"
#include "grainbudget.h"
#include "graindiscount.h"

grainwindow::grainwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::grainwindow)
{
    ui->setupUi(this);
}

grainwindow::~grainwindow()
{
    delete ui;
}

void grainwindow::on_cheapbutton_clicked()
{
    hide();
    grainbudget m;
    m.setModal(true);
    m.exec();
}


void grainwindow::on_discountbutton_clicked()
{
    hide();
    graindiscount m;
    m.setModal(true);
    m.exec();
}

