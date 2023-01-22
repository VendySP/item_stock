#include "itemstock.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ItemStock w;
    w.show();
    return a.exec();
}
