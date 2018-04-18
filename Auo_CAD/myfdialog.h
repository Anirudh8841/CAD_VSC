#ifndef MYFDIALOG_H
#define MYFDIALOG_H

#include <QDialog>

namespace Ui {
class MyfDialog;
}

class MyfDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MyfDialog(QWidget *parent = 0);
    ~MyfDialog();

private:
    Ui::MyfDialog *ui;
};

#endif // MYFDIALOG_H
