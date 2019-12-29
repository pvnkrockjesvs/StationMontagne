#include <QtTest>
#include <cartearduino.h>
#include <iostream>



using namespace std;

class CarteArduinoTest : public QObject
{
    Q_OBJECT

public:
    CarteArduinoTest();
    ~CarteArduinoTest();
    CarteArduino *carte;

private slots:
    void test_GetEtatTelesiege1();
    void test_GetEtatTelesiege2();
    void test_GetTemperature();


};

CarteArduinoTest::CarteArduinoTest()
{
    carte= new CarteArduino();

}

CarteArduinoTest::~CarteArduinoTest()
{

}

void CarteArduinoTest::test_GetEtatTelesiege1()
{
    QCOMPARE(carte->GetEtatTelesiege1(), "O");
}
void CarteArduinoTest::test_GetEtatTelesiege2()
{
    QCOMPARE(carte->GetEtatTelesiege2(), "O");
}
void CarteArduinoTest::test_GetTemperature()
{
   QCOMPARE(carte->GetTemperature(), "10");
}


QTEST_APPLESS_MAIN(CarteArduinoTest)

#include "tst_cartearduinotest.moc"
