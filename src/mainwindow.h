#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_oldPassLE_textChanged(const QString &arg1);

    void on_newPassLE_textChanged(const QString &arg1);

    void on_confirmPassLE_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    void changePassBtnEnable();
};

#endif // MAINWINDOW_H
