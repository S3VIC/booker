#include "mainwindow.h"
#include "../forms/ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
void MainWindow::changePassBtnEnable()
{
    if (ui->oldPassLE->text() != "" and ui->newPassLE->text() != "" and ui->newPassLE->text() == ui->confirmPassLE->text())
        ui->changePassBtn->setEnabled(true);
    else
        ui->changePassBtn->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}
//Checking whether user filled each field with some text and checking whether new password and
//its' confirmation are equal using textChanged signal
void MainWindow::on_oldPassLE_textChanged(const QString &arg1){ changePassBtnEnable(); }

void MainWindow::on_newPassLE_textChanged(const QString &arg1){ changePassBtnEnable(); }

void MainWindow::on_confirmPassLE_textChanged(const QString &arg1){ changePassBtnEnable(); }

