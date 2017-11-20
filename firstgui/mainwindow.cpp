#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->checkBox->setChecked(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
}

void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if (arg1)
    {
        QMessageBox::information(this, "title", "yes, user likes apples");
    }
    else
    {
        QMessageBox::information(this, "title", "no, user does not like apples");
    }
}
