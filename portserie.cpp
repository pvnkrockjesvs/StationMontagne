#include "portserie.h"
#include <sstream>
PortSerie::PortSerie()
{
nomPort_ = PORT;
vitesse_ = VITESSE_BAUD;
tailleDonnees_ = TAILLE_DONNEE;
parite_ = PARITE;
stopBits_ = BIT_DE_STOP;
controleFlux_ = CONTROL_DE_FLUX;

this->qtSerie_.setPortName(nomPort_) ;
this->qtSerie_.setBaudRate(vitesse_);
this->qtSerie_.setDataBits(tailleDonnees_);
this->qtSerie_.setParity(parite_);
this->qtSerie_.setStopBits(stopBits_);
this->qtSerie_.setFlowControl(controleFlux_);
}

PortSerie::PortSerie(QString sPort,
                     int nVitesse,
                     QSerialPort::DataBits nTailleDonnee,
                     QSerialPort::Parity nParite,
                     QSerialPort::StopBits nNbreBitStop,
                     QSerialPort::FlowControl nControlDeFlux)
{
nomPort_ = sPort;
vitesse_ = nVitesse;
tailleDonnees_ = nTailleDonnee;
parite_ = nParite;
stopBits_ = nNbreBitStop;
controleFlux_ = nControlDeFlux;

this->qtSerie_.setPortName(nomPort_) ;
this->qtSerie_.setBaudRate(vitesse_);
this->qtSerie_.setDataBits(tailleDonnees_);
this->qtSerie_.setParity(parite_);
this->qtSerie_.setStopBits(stopBits_);
this->qtSerie_.setFlowControl(controleFlux_);
}

bool PortSerie::Ouvrir()
{
    bool    bPortOuvert (false) ;
    this->qtSerie_.open(QIODevice::ReadWrite);
    if (this->qtSerie_.isOpen())
    {
        bPortOuvert = true ;
    }
    return bPortOuvert ;
}
bool PortSerie::Fermer()
{
    bool    bPortOuvert (false) ;

    if (this->qtSerie_.isOpen())
    {
        this->qtSerie_.close();
        bPortOuvert = true ;
    }
    return bPortOuvert ;
}

/** Destructeur qui ferme le port série s'il est toujours ouvert
 */
PortSerie::~PortSerie()
{
    this->Fermer() ;
}

/** Permet de lire tout ce qui passe sur le port USB en Hexadecimal
 */
QString PortSerie::Lire()
{
    //QString sBuffer ("") ;
    char    sOctetsLus[500+1] ;
    qint64  nTailleMaxi (500) ;
    qint64  nNbreLus    (0) ;


    if (this->qtSerie_.isOpen())
    {
        //SI le port série attend d'être pret a lire ALORS
        if (qtSerie_.waitForReadyRead())
        {
            memset(sOctetsLus, '\0', sizeof(char)*(nTailleMaxi+1)) ;
            //Le nombre lus = lecture du port serie
            nNbreLus = qtSerie_.read(sOctetsLus, nTailleMaxi) ;
            //AFFICHER : Nbre octets recus :
            qDebug() << "Nbre octets recus : " << nNbreLus <<endl;
            //AFFICHER : Trame :
            qDebug() << "Trame : "<<endl;
            //POUR Le nombre d'octect ALLANT DE 0 A nombre lu
            for (int NumOctet = 0; NumOctet < nNbreLus; ++NumOctet)
            {
                //AFFICHER l'hexadecimal de la trame
                qDebug() << "Trame dans Lire" << hex <<static_cast<int>(sOctetsLus[NumOctet])<<" " << endl;
            }
            qDebug() <<endl;
            //sleep(1);
        }
        else//SINON
        {
            //AFFICHER : rien à lire !
            qDebug() <<"rien à lire !"<<endl ;
        }

    }
    return QString(sOctetsLus) ;
}


/** Permet d'envoyer des données sur le port USB
 *
 *  @param sTrame
 */
bool PortSerie::Envoyer(QString sTrame)
{
    bool            bTrameEnvoyee   (false) ;


    if (this->qtSerie_.isOpen())
    {
        //Ecrire sur le port serie
        this->qtSerie_.write(sTrame.toStdString().c_str()) ;
        this->qtSerie_.waitForBytesWritten(1);
        //cout << "Envoi de la trame : " << sTrame.toStdString().c_str() << endl ;
        bTrameEnvoyee = true ;
    }
    else
    {
        bTrameEnvoyee = false ;
        //AFFICHER : Envoi impossible : port NON ouvert !
        //cout  << "Envoi impossible : port USB NON ouvert !" << endl ;
    }
    return(bTrameEnvoyee) ;
}
