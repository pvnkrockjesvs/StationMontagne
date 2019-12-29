#ifndef PORTSERIE_H
#define PORTSERIE_H

#include     <QDebug>
#include     <QtSerialPort/QSerialPort>
#include     <QtSerialPort/QSerialPortInfo>

#define PORT            "/dev/ttyUSB0"
#define VITESSE_BAUD    (QSerialPort::Baud9600)
#define TAILLE_DONNEE   (QSerialPort::Data8)
#define PARITE          (QSerialPort::NoParity)
#define BIT_DE_STOP     (QSerialPort::OneStop)
#define CONTROL_DE_FLUX (QSerialPort::NoFlowControl)

class PortSerie
{
public:
PortSerie();

///Constructeur avec paramètres
PortSerie(QString sPort,
          int nVitesse,
          QSerialPort::DataBits nTailleDonnee,
          QSerialPort::Parity nParite,
          QSerialPort::StopBits nNbreBitStop,
          QSerialPort::FlowControl nControlDeFlux );

~PortSerie() ;

QString Lire();
bool Envoyer(QString);
bool Fermer(void);
bool Ouvrir(void); // exemple de déclaration de Ouvrir()
void setnomPort (QString nomPort) { nomPort_ = nomPort ; }
QString getnomPort () { return nomPort_ ; }


private :

int vitesse_;
QSerialPort::DataBits  tailleDonnees_;
QSerialPort::Parity parite_;
QSerialPort::StopBits stopBits_;
QSerialPort::FlowControl controleFlux_;
QString nomPort_;
QSerialPort qtSerie_;

};

#endif // PORTSERIE_H
