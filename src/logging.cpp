#include "logging.h"
#include "mainwindow.h"


#include "../forms/ui_logging.h"
#include "../forms/ui_mainwindow.h"


#include <QtSql>
#include <QMessageBox>

logging::logging(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::logging)
{
    ui->setupUi(this);
    ui->unameLineEdit->setText("admin");
    ui->passLineEdit->setText("123");

}

logging::~logging()
{
    delete ui;
}


void logging::on_okBtn_clicked()
{
    if(ui->unameLineEdit->text() == "admin" and ui->passLineEdit->text() == "123")
    {
        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("127.0.0.1");
        db.setDatabaseName("booker");
        db.setUserName("root");
        db.setPassword("dn#jVpU!1");
        bool ok = db.open();
        if(ok)
        {
            MainWindow *mw = new MainWindow(nullptr);
            mw->show();
            this->close();
        }
    }
}

void logging::on_cancelBtn_clicked()
{
    this->close();
}
