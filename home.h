#ifndef HOME_H
#define HOME_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>

QT_BEGIN_NAMESPACE
namespace Ui { class home; }
QT_END_NAMESPACE

class home : public QMainWindow
{
    Q_OBJECT

public:
    home(QWidget *parent = nullptr);
    ~home();

private slots:
    void on_meatButton_clicked();

    void on_vegButton_clicked();

    void on_grainButton_clicked();

private:
    Ui::home *ui;
};
#endif // HOME_H
