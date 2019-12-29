#ifndef GESTIONNAIRE_H
#define GESTIONNAIRE_H
#include "cartearduino.h"
#include "informations.h"
#include "journallumineux.h"
#include "mainview.h"
#include "portserie.h"
#include "connexion.h"
#include <QTimer>


class Gestionnaire : public QObject
{
    Q_OBJECT
 public:
    Gestionnaire();
    ~Gestionnaire();
    CarteArduino *carte_;
    Informations *infos_;
    JournalLumineux *journal_;
    MainView *vue_;
    PortSerie *port_;
    QTimer *timer_;
    QTimer *timer1_;
    QTimer *timerVue_;
    void montrer();



private:
    QString pass , user;
    Connexion *co;

private slots:
    void slotChangement();
    void slotActualiser();
    void slotAcTemp();
    void on_loginBtn_clicked();
    void majTeles();
    void showTime();
};



#endif // GESTIONNAIRE_H
