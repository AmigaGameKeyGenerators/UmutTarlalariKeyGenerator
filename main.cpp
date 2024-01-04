#include "MainWindow.hpp"

#include <QApplication>
#include <QFontDatabase>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFontDatabase::addApplicationFont(":/Fonts/TopazNew.ttf");
    MainWindow w;
    w.show();
    return a.exec();
}
