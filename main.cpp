#include <QtGui/QApplication>
#include <QtPlugin>
#include "mainwindow.h"
#include "figures/AbstractFigure.h"

qreal AbstractFigure::maxZOrder = 0.1;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
