#include <QtTest>
#include "portserie.h"
#include <iostream>
#include <unistd.h>
using namespace std;

// add necessary includes here

class PortSerieTest : public QObject
{
    Q_OBJECT

public:
    PortSerieTest();
    ~PortSerieTest();
    PortSerie *port;
private slots:
    void test_Ouvrir();
    void test_Envoyer();
    void test_Fermer();
    void test_Lire();

};

PortSerieTest::PortSerieTest()
{
    port = new PortSerie();
}

PortSerieTest::~PortSerieTest()
{
   port->Fermer();
}

void PortSerieTest::test_Ouvrir()
{
    QCOMPARE(port->Ouvrir(), bool(true));
}

void PortSerieTest::test_Fermer()
{
    QCOMPARE(port->Fermer(),bool(true));
}

void PortSerieTest::test_Envoyer()
{
   port->Ouvrir();
   port->Envoyer("Bonjour");
   port->Fermer();
}

void PortSerieTest::test_Lire()
{
    port->Ouvrir();

    cout<<port->Lire().toStdString()<<endl;
    port->Fermer();

}

        QTEST_APPLESS_MAIN(PortSerieTest)

#include "tst_portserietest.moc"
