#ifndef GRAINWINDOW_H
#define GRAINWINDOW_H

#include <QDialog>

namespace Ui {
class grainwindow;
}

class grainwindow : public QDialog
{
    Q_OBJECT

public:
    explicit grainwindow(QWidget *parent = nullptr);
    ~grainwindow();

private slots:
    void on_cheapbutton_clicked();

    void on_discountbutton_clicked();

private:
    Ui::grainwindow *ui;
};

#endif // GRAINWINDOW_H
