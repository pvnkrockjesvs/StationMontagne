#include <QtTest>
#include "journallumineux.h"
#include <iostream>
#include <sstream>
#include <unistd.h>
using namespace std;



class JournalLumineuxTest : public QObject
{
    Q_OBJECT

public:
    JournalLumineuxTest();
    ~JournalLumineuxTest();
    JournalLumineux *journal;

private slots:

    void test_piste1();
    void test_piste2();
    void test_piste3();
    void test_piste4();
    void test_piste5();
    void test_piste6();
    void test_telesiege1();
    void test_telesiege2();
    void test_temperature();

};

JournalLumineuxTest::JournalLumineuxTest()
{
    journal= new JournalLumineux();

}

JournalLumineuxTest::~JournalLumineuxTest()
{

}




void JournalLumineuxTest::test_piste1()
{

    journal->Piste1();

}
void JournalLumineuxTest::test_piste2()
{
    journal->Piste2();

}
void JournalLumineuxTest::test_piste3()
{
    journal->Piste3();

}
void JournalLumineuxTest::test_piste4()
{
    journal->Piste4();

}
void JournalLumineuxTest::test_piste5()
{

    journal->Piste5();

}
void JournalLumineuxTest::test_piste6()
{

    journal->Piste6();

}
void JournalLumineuxTest::test_telesiege1()
{

    journal->Telesiege1();

}
void JournalLumineuxTest::test_telesiege2()
{

    journal->Telesiege2();

}
void JournalLumineuxTest::test_temperature()
{

    journal->Temperature();

}
QTEST_APPLESS_MAIN(JournalLumineuxTest)

#include "tst_journallumineuxtest.moc"
