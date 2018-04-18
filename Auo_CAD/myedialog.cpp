#include "myedialog.h"
#include "ui_myedialog.h"

MyeDialog::MyeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyeDialog)
{
    ui->setupUi(this);
     this->setWindowTitle("Edges");
}

MyeDialog::~MyeDialog()
{
    delete ui;
}

void MyeDialog::on_pushButton_clicked()
{

}

void MyeDialog::on_pushButton_2_clicked()
{
    close();
}
