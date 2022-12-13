#include "grainbudget.h"
#include "ui_grainbudget.h"

grainbudget::grainbudget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::grainbudget)
{
    ui->setupUi(this);
}

grainbudget::~grainbudget()
{
    delete ui;
}
