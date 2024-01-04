#include "AboutWindow.hpp"
#include "ui_AboutWindow.h"

AboutWindow::AboutWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AboutWindow)
{
    ui->setupUi(this);
    ui->labelWeb->setText("<a href=\"https://github.com/AmigaGameKeyGenerators/UmutTarlalariKeyGenerator\">Proje Sayfası</a>");
    ui->labelWeb->setTextFormat(Qt::RichText);
    ui->labelWeb->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui->labelWeb->setOpenExternalLinks(true);

}

AboutWindow::~AboutWindow()
{
    delete ui;
}
