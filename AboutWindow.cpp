#include "AboutWindow.hpp"
#include "ui_AboutWindow.h"

AboutWindow::AboutWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AboutWindow)
{
    ui->setupUi(this);
    topazFont = new QFont("Topaz New");
    topazFontBold = new QFont("Topaz New");
    topazFont->setPixelSize(14);
    topazFontBold->setPixelSize(16);
    topazFontBold->setBold(true);
    ui->projectPage->setText("<a href=\"https://github.com/AmigaGameKeyGenerators/UmutTarlalariKeyGenerator\">Proje Sayfasi</a>");
    ui->projectPage->setTextFormat(Qt::RichText);
    ui->projectPage->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui->projectPage->setOpenExternalLinks(true);
    ui->projectPage->setFont(*topazFont);
    ui->author->setFont(*topazFont);
    ui->title->setFont(*topazFontBold);
    setFixedSize(this->geometry().width(),this->geometry().height());
}

AboutWindow::~AboutWindow()
{
    delete ui;
    delete topazFont;
    delete topazFontBold;
}
