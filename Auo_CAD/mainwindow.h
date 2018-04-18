#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionVertex_triggered();

    void on_actionEdges_triggered();

    void on_actionFaces_triggered();

    void on_actionSave_2_triggered();

    void on_actionLoad_triggered();

    void on_actionQuit_triggered();

    void on_actionOpen_File_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
