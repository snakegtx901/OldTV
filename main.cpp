#include <QApplication>
#include "oldtv.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    oldtv w;
    w.show();
    
    return a.exec();
}
