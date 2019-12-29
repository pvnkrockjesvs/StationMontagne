#ifndef CARTEARDUINO_H
#define CARTEARDUINO_H
#include "portserie.h"

class CarteArduino
{
public:
    CarteArduino();
    ~CarteArduino();
    QString GetEtatTelesiege1();
    QString GetEtatTelesiege2();
    QString GetTemperature();

private:
    PortSerie *portserie_;
};

#endif // CARTEARDUINO_H
