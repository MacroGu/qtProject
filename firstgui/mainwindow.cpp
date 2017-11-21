#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDir>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QDir dir;
    foreach(QFileInfo var, dir.drives())
    {
        ui->comboBox->addItem(var.absoluteFilePath());
    }

    QDir dir_2("D:/tools");
    foreach(QFileInfo var, dir_2.entryInfoList())
    {
        if(var.isDir())
        {
            ui->listWidget->addItem("Dir : " + var.absoluteFilePath());

        }
        if(var.isFile())
        {
             ui->listWidget->addItem("File : " + var.absoluteFilePath());
        }

    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QDir dir("D:/toolsDIr");
    if (dir.exists())
    {
        QMessageBox::information(this, "", "dir exists");
    }
    else
    {
        dir.mkpath("D:/toolsDIr");
    }
}
