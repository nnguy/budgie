#ifndef VEGWINDOW_H
#define VEGWINDOW_H

#include <QDialog>

namespace Ui {
class vegwindow;
}

class vegwindow : public QDialog
{
    Q_OBJECT

public:
    explicit vegwindow(QWidget *parent = nullptr);
    ~vegwindow();

private slots:
    void on_cheapbutton_clicked();

    void on_discountbutton_clicked();

private:
    Ui::vegwindow *ui;
};

#endif // VEGWINDOW_H
