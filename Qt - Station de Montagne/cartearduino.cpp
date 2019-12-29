#include "cartearduino.h"
#include "portserie.h"
#include "informations.h"
#include <sstream>

#include <unistd.h>

#include <iostream>
using namespace std;


CarteArduino::CarteArduino()
{
    portserie_ = new PortSerie("ttyACM0",QSerialPort::Baud9600,QSerialPort::Data8,QSerialPort::NoParity,QSerialPort::OneStop,QSerialPort::NoFlowControl);
    portserie_->Ouvrir();


}

CarteArduino::~CarteArduino()
{
    portserie_->Fermer();
}

QString CarteArduino::GetEtatTelesiege1()
{
    portserie_->Envoyer("1");
    return portserie_->Lire();
}

QString CarteArduino::GetEtatTelesiege2()
{
    portserie_->Envoyer("2");
    return portserie_->Lire();
}

QString CarteArduino::GetTemperature()
{
    portserie_->Envoyer("T");
    return portserie_->Lire();
}
