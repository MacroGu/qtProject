#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QListWidgetItem *item = new QListWidgetItem(QIcon(":/img/img/open.jpg"), "Mark");
    ui->listWidget->addItem(item);
    QListWidgetItem *item2 = new QListWidgetItem(QIcon(":/img/img/open.jpg"), "John");
    ui->listWidget->addItem(item2);
    QListWidgetItem *item3 = new QListWidgetItem(QIcon(":/img/img/open.jpg"), "July");
    ui->listWidget->addItem(item3);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
//    QMessageBox::information(this, "title", ui->listWidget->currentItem()
//                             ->text());
    ui->listWidget->currentItem()->setBackgroundColor(Qt::red);
    ui->listWidget->currentItem()->setForeground(Qt::white);
}
