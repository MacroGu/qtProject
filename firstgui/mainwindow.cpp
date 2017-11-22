#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFontDialog>
#include <QFont>


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

void MainWindow::on_actionFont_triggered()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok, this);
    if (ok)
    {
        ui->actionFont->setFont(font);
    }
    else
    {
        return;
    }


}
