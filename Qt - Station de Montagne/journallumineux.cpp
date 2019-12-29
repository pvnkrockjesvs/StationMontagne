#include "journallumineux.h"
#include "portserie.h"
#include "informations.h"
#include <sstream>
#include <iostream>
#include <unistd.h>
using namespace std ;

JournalLumineux::JournalLumineux()
{
    portserie_ = new PortSerie();
    portserie_->Ouvrir();

}

JournalLumineux::~JournalLumineux()
{
    portserie_->Fermer();
}

QString JournalLumineux::CalculerCRC(QString trame)
{
    unsigned char   nCRC (0) ;
    QString         sCRC    ("") ;
    ostringstream   oConvert ;          // Flux de conversion
    //Calcul du CRC
    nCRC = 0 ;
    //POUR tous les caractères de la trame…
    for (int i = 0 ; i < trame.length() ; i++)
    {
        // …chaque caractère est intégré dans le CRC
        nCRC = nCRC ^ trame.at(i).toLatin1() ;
    }
    // Conversion en QString Hexa
    oConvert.width(2) ;                 // Deux caractères maxi
    oConvert.fill ('0') ;               // Caractère de bourage
    oConvert << hex << static_cast<int>(nCRC) ;         // Conversion en hexa
    sCRC = QString(oConvert.str().c_str()) ;            // Passage en QString
    sCRC = sCRC.toUpper() ;                   // Passage en majuscule
    return sCRC ;
}
bool JournalLumineux::EnvoyerTrame(QString trame)
{

    QString crc=CalculerCRC(trame);
    QString tramefinale= "<ID00>"+trame+crc+"<E>";
    portserie_->Envoyer(tramefinale);
    return true;
}

void JournalLumineux::Piste1(bool var)
{

    QString tramefinale1;
    if (var==0)
    {
        QString trame= "<L1><PA><FL><MA><WC><FF><CB>Piste 1";
        QString crc=CalculerCRC(trame);
        tramefinale1="<ID00>"+trame+crc+"<E>";

    }
    else
    {
        QString trame="<L1><PA><FL><MA><WC><FF><CE>Piste 1";
        QString crc=CalculerCRC(trame);
        tramefinale1="<ID00>"+trame+crc+"<E>";

    }
    portserie_->Envoyer(tramefinale1);
}
void JournalLumineux::Piste2(bool var)
{

    QString tramefinale2;
    if (var==0)
    {
        QString trame="<L1><PB><FL><MA><WC><FF><CB>Piste 2";
        QString crc=CalculerCRC(trame);
        tramefinale2="<ID00>"+trame+crc+"<E>";

    }
    else
    {
        QString trame="<L1><PB><FL><MA><WC><FF><CE>Piste 2";
        QString crc=CalculerCRC(trame);
        tramefinale2="<ID00>"+trame+crc+"<E>";

    }
    portserie_->Envoyer(tramefinale2);
}
void JournalLumineux::Piste3(bool var)
{

    QString tramefinale3;
    if (var==0)
    {
        QString trame ="<L1><PC><FL><MA><WC><FF><CB>Piste 3";
        QString crc=CalculerCRC(trame);
        tramefinale3="<ID00>"+trame+crc+"<E>";

    }
    else
    {
        QString trame="<L1><PC><FL><MA><WC><FF><CE>Piste 3";
        QString crc=CalculerCRC(trame);
        tramefinale3="<ID00>"+trame+crc+"<E>";

    }
    portserie_->Envoyer(tramefinale3);

}
void JournalLumineux::Piste4(bool var)
{

    QString tramefinale4;
    if (var==0)
    {
        QString trame="<L1><PD><FL><MA><WC><FF><CB>Piste 4";
        QString crc=CalculerCRC(trame);
        tramefinale4="<ID00>"+trame+crc+"<E>";

    }
    else
    {
        QString trame="<L1><PD><FL><MA><WC><FF><CE>Piste 4";
        QString crc=CalculerCRC(trame);
        tramefinale4="<ID00>"+trame+crc+"<E>";

    }
    portserie_->Envoyer(tramefinale4);

}
void JournalLumineux::Piste5(bool var)
{

    QString tramefinale5;
    if (var==0)
    {
        QString trame="<L1><PE><FL><MA><WC><FF><CB>Piste 5";
        QString crc=CalculerCRC(trame);
        tramefinale5="<ID00>"+trame+crc+"<E>";

    }
    else
    {
       QString trame="<L1><PE><FL><MA><WC><FF><CE>Piste 5";
       QString crc=CalculerCRC(trame);
       tramefinale5="<ID00>"+trame+crc+"<E>";

    }
    portserie_->Envoyer(tramefinale5);
}
void JournalLumineux::Piste6(bool var)
{

    QString tramefinale6;
    if (var==0)
    {
         QString trame="<L1><PF><FL><MA><WC><FF><CB>Piste 6";
         QString crc=CalculerCRC(trame);
         tramefinale6="<ID00>"+trame+crc+"<E>";
    }

    else
    {
         QString trame="<L1><PF><FL><MA><WC><FF><CE>Piste 6";
         QString crc=CalculerCRC(trame);
         tramefinale6="<ID00>"+trame+crc+"<E>";

    }
    portserie_->Envoyer(tramefinale6);
}
void JournalLumineux::Telesiege1(QString var)
{

    QString tramefinale7;
    if (var=="O")
    {
         QString trame="<L1><PG><FL><MA><WC><FF><CE>Telesiege 1";
         QString crc=CalculerCRC(trame);
         tramefinale7="<ID00>"+trame+crc+"<E>";

    }
    else
    {
         QString trame="<L1><PG><FL><MA><WC><FF><CB>Telesiege 1";
         QString crc=CalculerCRC(trame);
         tramefinale7="<ID00>"+trame+crc+"<E>";

    }

     portserie_->Envoyer(tramefinale7);
}
void JournalLumineux::Telesiege2(QString var)
{

    QString tramefinale8;
     if (var=="O")
     {
          QString trame="<L1><PH><FL><MA><WC><FF><CE>Telesiege 2";
          QString crc=CalculerCRC(trame);
          tramefinale8="<ID00>"+trame+crc+"<E>";
     }
     else
     {
         QString trame="<L1><PH><FL><MA><WC><FF><CB>Telesiege 2";
         QString crc=CalculerCRC(trame);
         tramefinale8="<ID00>"+trame+crc+"<E>";

     }
     portserie_->Envoyer(tramefinale8);

}
void JournalLumineux::Temperature(QString var)
{

    QString tramefinale9;
    QString trame="<L1><PI><FL><MA><WC><FF><CJ>temp: "+var;
    QString crc=CalculerCRC(trame);
    tramefinale9="<ID00>"+trame+crc+"<E>";
    portserie_->Envoyer(tramefinale9);

}
void JournalLumineux::Heure(QString var)
{

    QString tramefinale9;
    QString trame="<L1><PJ><FF><MA><WC><FF><CJ>   "+var;
    QString crc=CalculerCRC(trame);
    tramefinale9="<ID00>"+trame+crc+"<E>";
    portserie_->Envoyer(tramefinale9);

}

void JournalLumineux::Message1(QString var)
{
    QString tramefinale10;
    QString trame="<L1><PK><FF><MA><WC><FF><CH>"+var;
    QString crc=CalculerCRC(trame);
    tramefinale10="<ID00>"+trame+crc+"<E>";
    portserie_->Envoyer(tramefinale10);

}

void JournalLumineux::Message2(QString var)
{
    QString tramefinale10;
    QString trame="<L1><PL><FF><MA><WC><FF><CH>"+var;
    QString crc=CalculerCRC(trame);
    tramefinale10="<ID00>"+trame+crc+"<E>";
    portserie_->Envoyer(tramefinale10);

}

void JournalLumineux::Message3(QString var)
{
    QString tramefinale10;
    QString trame="<L1><PM><FF><MA><WC><FF><CH>"+var;
    QString crc=CalculerCRC(trame);
    tramefinale10="<ID00>"+trame+crc+"<E>";
    portserie_->Envoyer(tramefinale10);

}

void JournalLumineux::Message4(QString var)
{
    QString tramefinale10;
    QString trame="<L1><PN><FF><MA><WC><FF><CH>"+var;
    QString crc=CalculerCRC(trame);
    tramefinale10="<ID00>"+trame+crc+"<E>";
    portserie_->Envoyer(tramefinale10);

}

void JournalLumineux::Message5(QString var)
{
    QString tramefinale10;
    QString trame="<L1><PO><FF><MA><WC><FF><CH>"+var;
    QString crc=CalculerCRC(trame);
    tramefinale10="<ID00>"+trame+crc+"<E>";
    portserie_->Envoyer(tramefinale10);

}

void JournalLumineux::Message6(QString var)
{
    QString tramefinale10;
    QString trame="<L1><PP><FF><MA><WC><FF><CH>"+var;
    QString crc=CalculerCRC(trame);
    tramefinale10="<ID00>"+trame+crc+"<E>";
    portserie_->Envoyer(tramefinale10);

}

void JournalLumineux::Message7(QString var)
{
    QString tramefinale10;
    QString trame="<L1><PQ><FF><MA><WC><FF><CH>"+var;
    QString crc=CalculerCRC(trame);
    tramefinale10="<ID00>"+trame+crc+"<E>";
    portserie_->Envoyer(tramefinale10);

}

void JournalLumineux::Message8(QString var)
{
    QString tramefinale10;
    QString trame="<L1><PR><FF><MA><WC><FF><CH>"+var;
    QString crc=CalculerCRC(trame);
    tramefinale10="<ID00>"+trame+crc+"<E>";
    portserie_->Envoyer(tramefinale10);

}

void JournalLumineux::Message9(QString var)
{
    QString tramefinale10;
    QString trame="<L1><PS><FF><MA><WC><FF><CH>"+var;
    QString crc=CalculerCRC(trame);
    tramefinale10="<ID00>"+trame+crc+"<E>";
    portserie_->Envoyer(tramefinale10);

}

void JournalLumineux::Message10(QString var)
{
    QString tramefinale10;
    QString trame="<L1><PT><FF><MA><WC><FF><CH>"+var;
    QString crc=CalculerCRC(trame);
    tramefinale10="<ID00>"+trame+crc+"<E>";
    portserie_->Envoyer(tramefinale10);

}
