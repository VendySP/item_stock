#include "studentinfo.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StudentInfo w;
    w.show();
    return a.exec();
}
