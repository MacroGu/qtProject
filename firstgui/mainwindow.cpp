#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)),
               ui->progressBar, SLOT(setValue(int)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
//    void about
//    void aboutQt
//    StandardButton critical
//    StandardButton information
//    StandardButton question
//    StandardButton warning
    QMessageBox::StandardButton reply = QMessageBox::question(this,
                          "My Title","this is question? ",
                          QMessageBox::Ok|QMessageBox::No);
    if (reply == QMessageBox::Yes)
    {
        QApplication::quit();
    }
    else
    {
        qDebug("No is clicked.");
    }


}
