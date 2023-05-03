#include "logging.h"
#include "program.h"
#include "../forms/ui_logging.h"
#include "../forms/ui_program.h"

Logging::Logging(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Logging)
{
    ui->setupUi(this);
}

Logging::~Logging()
{
    delete ui;
}


void Logging::on_cancelBtn_clicked()
{
   this->close();
}


void Logging::on_okBtn_clicked()
{
    this->close();
    Program* program = new Program();
    program->show();
}

