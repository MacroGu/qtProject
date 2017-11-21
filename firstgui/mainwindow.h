#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
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

private slots:
    void on_tabWidget_tabCloseRequested(int index);

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QString file_path_;
};

#endif // MAINWINDOW_H
