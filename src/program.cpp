#include "program.h"
#include "../forms/ui_program.h"

Program::Program(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Program)
{
    ui->setupUi(this);
}

Program::~Program()
{
    delete ui;
}