#include "exampleclass.h"

#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ExampleClass *olio = new ExampleClass;
    olio->startToWait();

    delete olio;
    olio=nullptr;
    return a.exec();
}
