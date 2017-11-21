#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    ui->comboBox->addItem(QIcon(":/img/img/open.jpg"),"Mark");
//    ui->comboBox->addItem(QIcon(":/img/img/open.jpg"),"Jhon");
//    ui->comboBox->addItem(QIcon(":/img/img/1.jpg"),"July");

    for (int i = 0; i < 10; i++)
    {
        ui->comboBox->addItem(QIcon(":/img/img/open.jpg"), QString::number(i) + "name");
    }

    ui->comboBox->insertItem(3, QIcon(":/img/img/1.jpg"), "New Text");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this, "title", QString::number(ui->comboBox->currentIndex()));
}
