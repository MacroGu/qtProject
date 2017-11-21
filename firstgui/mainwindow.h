#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "secdialog.h"
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void myfunction();

private:
    Ui::MainWindow *ui;
    SecDialog *secDialog;
    QTimer *timer;
};

#endif // MAINWINDOW_H
