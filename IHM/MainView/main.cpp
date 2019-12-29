#include "connexion.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Connexion login;
    login.show();

    return a.exec();

}
