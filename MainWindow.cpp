#include "MainWindow.hpp"
#include "./ui_MainWindow.h"
#include "kodlar.hpp"
#include "AboutWindow.hpp"
#include <QFontDatabase>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    topaz50Font = new QFont("Topaz New");
    topaz150Font = new QFont("Topaz New");
    topaz50Font->setPixelSize(53);
    topaz150Font->setPixelSize(146);
    ui->key->setFont(*topaz150Font);
    ui->kod1->setFont(*topaz50Font);
    ui->kod2->setFont(*topaz50Font);
    ui->kod3->setFont(*topaz50Font);
    setFixedSize(this->geometry().width(),this->geometry().height());
}

MainWindow::~MainWindow()
{
    delete ui;
    delete topaz50Font;
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

