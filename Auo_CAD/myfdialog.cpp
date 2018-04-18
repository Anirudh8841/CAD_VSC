#include "myfdialog.h"
#include "ui_myfdialog.h"

MyfDialog::MyfDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyfDialog)
{
    ui->setupUi(this);
     this->setWindowTitle("Faces");
}

MyfDialog::~MyfDialog()
{
    delete ui;
}
