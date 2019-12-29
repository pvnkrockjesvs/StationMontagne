#include <QCoreApplication>
#include <QApplication>
#include "gestionnaire.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Gestionnaire *gestionnaire_;
    gestionnaire_= new Gestionnaire();

    gestionnaire_->montrer();




    return a.exec();
}
