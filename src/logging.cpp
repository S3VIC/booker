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
    //std::string configuration = "datasource=localhost;port=3306;username=root;password=Sewik1;database=gabinet";
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("gabinet");
    db.setUserName("root");
    db.setPassword("Sewik1");
    bool ok = db.open();
    if(ok)
    {
        this->close();
        Program* program = new Program();
        program->show();
    }
}

