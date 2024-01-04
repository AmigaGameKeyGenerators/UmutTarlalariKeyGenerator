#pragma once

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_kod1_valueChanged(int arg1);

    void on_kod2_valueChanged(int arg1);

    void on_kod3_valueChanged(int arg1);

    void generateKey();

    void on_aboutButton_clicked();

private:
    Ui::MainWindow *ui;
    QFont *topaz50Font, *topaz150Font;
};
