#ifndef MYEDIALOG_H
#define MYEDIALOG_H

#include <QDialog>

namespace Ui {
class MyeDialog;
}

class MyeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MyeDialog(QWidget *parent = 0);
    ~MyeDialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MyeDialog *ui;
};

#endif // MYEDIALOG_H
