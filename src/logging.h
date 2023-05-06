#ifndef LOGGING_H
#define LOGGING_H
#include<QtSql>
#include<QSqlDatabase>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Logging; }
QT_END_NAMESPACE

class Logging : public QMainWindow
{
    Q_OBJECT

public:
    Logging(QWidget *parent = nullptr);
    ~Logging();

private slots:
    void on_cancelBtn_clicked();

    void on_okBtn_clicked();

private:
    Ui::Logging *ui;
};
#endif // LOGGING_H
