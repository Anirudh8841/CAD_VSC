#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include<QDebug>
#include"mydialog.h"
#include"myedialog.h"
#include"myfdialog.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionVertex_triggered()
{
    MyDialog mDialog;
    mDialog.setModal(true);
    mDialog.exec();
}

void MainWindow::on_actionEdges_triggered()
{
    MyeDialog nDialog;
    nDialog.setModal(true);
    nDialog.exec();
}

void MainWindow::on_actionFaces_triggered()
{
    MyfDialog oDialog;
    oDialog.setModal(true);
    oDialog.exec();
}

void MainWindow::on_actionSave_2_triggered()
{

}

void MainWindow::on_actionLoad_triggered()
{

}

void MainWindow::on_actionQuit_triggered()
{
    close();
}

void MainWindow::on_actionOpen_File_triggered()
{
    QString filename=QFileDialog::getOpenFileName(this,tr("Open File"),"/home/anirudh://",
                                                  "All files (*.*);; Text File(*.txt);;"
                                                  "");
}
