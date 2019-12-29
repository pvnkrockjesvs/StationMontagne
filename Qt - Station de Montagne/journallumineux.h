#ifndef JOURNALLUMINEUX_H
#define JOURNALLUMINEUX_H
#include "portserie.h"

class JournalLumineux
{
public:
    JournalLumineux();
    ~JournalLumineux();

bool EnvoyerTrame(QString);
void Piste1(bool);
void Piste2(bool);
void Piste3(bool);
void Piste4(bool);
void Piste5(bool);
void Piste6(bool);
void Telesiege1(QString);
void Telesiege2(QString);
void Temperature(QString);
void Message1(QString);
void Message2(QString);
void Message3(QString);
void Message4(QString);
void Message5(QString);
void Message6(QString);
void Message7(QString);
void Message8(QString);
void Message9(QString);
void Message10(QString);
void Heure(QString);


private :

QString CalculerCRC(QString trame);
PortSerie *portserie_;

};

#endif // JOURNALLUMINEUX_H
