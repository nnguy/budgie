#ifndef MEATWINDOW_H
#define MEATWINDOW_H

#include <QDialog>

namespace Ui {
class meatwindow;
}

class meatwindow : public QDialog
{
    Q_OBJECT

public:
    explicit meatwindow(QWidget *parent = nullptr);
    ~meatwindow();

private slots:
    void on_cheapbutton_clicked();

    void on_discountbutton_clicked();

private:
    Ui::meatwindow *ui;
};

#endif // MEATWINDOW_H
