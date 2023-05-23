#ifndef LOGGING_H
#define LOGGING_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class logging; }
QT_END_NAMESPACE

class logging : public QWidget
{
    Q_OBJECT

public:
    logging(QWidget *parent = nullptr);
    ~logging();

private slots:
    void on_cancelBtn_clicked();

    void on_okBtn_clicked();

private:
    Ui::logging *ui;
};
#endif // LOGGING_H
