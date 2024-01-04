#include "MainWindow.hpp"
#include "./ui_MainWindow.h"
#include "kodlar.hpp"
#include "AboutWindow.hpp"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(this->geometry().width(),this->geometry().height());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_kod1_valueChanged(int arg1)
{
    generateKey();
}


void MainWindow::on_kod2_valueChanged(int arg1)
{
    generateKey();
}


void MainWindow::on_kod3_valueChanged(int arg1)
{
    generateKey();
}

void MainWindow::generateKey()
{
    int kod1 = ui->kod1->value();
    int kod2 = ui->kod2->value();
    int kod3 = ui->kod3->value();
    int key1 = kodlar[kod1-1][kod2-1];
    int key = kodlar[kod3-1][key1-1];
    ui->key->setText(QString::number(key));
}


void MainWindow::on_aboutButton_clicked()
{
    AboutWindow aboutWindow;
    aboutWindow.exec();
}

