#include "mydialog.h"
#include "ui_mydialog.h"

MyDialog::MyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Vertices");
}

MyDialog::~MyDialog()
{
    delete ui;
}

void MyDialog::on_pushButton_clicked()
{

}

void MyDialog::on_pushButton_2_clicked()
{
    close();
}
