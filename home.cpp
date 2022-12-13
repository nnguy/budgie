#include "home.h"
#include "ui_home.h"
#include "meatwindow.h"
#include "vegwindow.h"
#include "grainwindow.h"

home::home(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::home)
{
    ui->setupUi(this);
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    //db.setDatabaseName("~/CSC_211_Final_Qmake/food_prices.db");
    db.setDatabaseName("food_prices.db");
    if(!db.open())
        ui->dbstatus->setText("Unable to open database");
    else
        ui->dbstatus->setText("Connected");

}

home::~home()
{
    delete ui;
}


void home::on_meatButton_clicked()
{
    //open Meat Budget Window
    hide();
    meatwindow w;
    w.setModal(true);
    w.exec();
}


void home::on_vegButton_clicked()
{
    //open a Veg Budget Window
    hide();
    vegwindow s;
    s.setModal(true);
    s.exec();
}


void home::on_grainButton_clicked()
{
    //open a Veg Budget Window
    hide();
    grainwindow s;
    s.setModal(true);
    s.exec();
}

