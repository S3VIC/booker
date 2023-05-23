#include "logging.h"
#include "mainwindow.h"


#include "../forms/ui_logging.h"
#include "../forms/ui_mainwindow.h"

logging::logging(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::logging)
{
    ui->setupUi(this);
}

logging::~logging()
{
    delete ui;
}


void logging::on_okBtn_clicked()
{
    MainWindow *mw = new MainWindow(nullptr);
    mw->show();
    this->close();
}

void logging::on_cancelBtn_clicked()
{
    this->close();
}
