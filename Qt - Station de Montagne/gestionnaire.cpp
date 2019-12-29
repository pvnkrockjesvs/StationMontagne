#include "gestionnaire.h"
#include <QMessageBox>
#include <QTimer>
#include <QDateTime>
#include <QDebug>
#include <QMainWindow>
#include "ui_connexion.h"
#include "ui_mainview.h"
#include <iostream>



Gestionnaire::Gestionnaire()
{
    carte_= new CarteArduino;
    infos_= new Informations;
    journal_= new JournalLumineux;
    vue_= new MainView;
    port_= new PortSerie;
    timer_ = new QTimer();
    timer1_= new QTimer();
    timerVue_ = new QTimer();

    connect(vue_, SIGNAL(sigChangement()), this, SLOT(slotChangement()));
    timer_->start(60000);
    connect(timer_, SIGNAL(timeout()), this, SLOT(slotActualiser()));
    timer1_->start(10000);
    connect(timer1_, SIGNAL(timeout()), this, SLOT(slotAcTemp()));
    co= new Connexion();
    connect(co->ui->loginBtn, SIGNAL(clicked()), this, SLOT(on_loginBtn_clicked()));
    connect(timerVue_, SIGNAL(timeout()),this,SLOT(showTime()));
    timerVue_->start();

}

Gestionnaire::~Gestionnaire()
{

}

void Gestionnaire::slotChangement()  //changement lors du click sur valider de l'interface graphique
{
    infos_->tab[0]=(vue_->etatPiste1);
    infos_->tab[1]=(vue_->etatPiste2);
    infos_->tab[2]=(vue_->etatPiste3);
    infos_->tab[3]=(vue_->etatPiste4);
    infos_->tab[4]=(vue_->etatPiste5);
    infos_->tab[5]=(vue_->etatPiste6);
    infos_->tabT[0]=(carte_->GetEtatTelesiege1());
    infos_->tabT[1]=(carte_->GetEtatTelesiege2());
    infos_->tabMess[0]=(vue_->message[0]);
    infos_->tabMess[1]=(vue_->message[1]);
    infos_->tabMess[2]=(vue_->message[2]);
    infos_->tabMess[3]=(vue_->message[3]);
    infos_->tabMess[4]=(vue_->message[4]);
    infos_->tabMess[5]=(vue_->message[5]);
    infos_->tabMess[6]=(vue_->message[6]);
    infos_->tabMess[7]=(vue_->message[7]);
    infos_->tabMess[8]=(vue_->message[8]);
    infos_->tabMess[9]=(vue_->message[9]);

}

void Gestionnaire::slotActualiser()  //actualisation toutes les 300 secondes
{
    infos_->tabT[0]=carte_->GetEtatTelesiege1();
    infos_->tabT[1]=carte_->GetEtatTelesiege2();
    journal_->Piste1(infos_->tab[0]);
    journal_->Piste2(infos_->tab[1]);
    journal_->Piste3(infos_->tab[2]);
    journal_->Piste4(infos_->tab[3]);
    journal_->Piste5(infos_->tab[4]);
    journal_->Piste6(infos_->tab[5]);
    journal_->Telesiege1(infos_->tabT[0]);
    journal_->Telesiege2(infos_->tabT[1]);
    journal_->Message1(infos_->tabMess[0]);
    journal_->Message2(infos_->tabMess[1]);
    journal_->Message3(infos_->tabMess[2]);
    journal_->Message4(infos_->tabMess[3]);
    journal_->Message5(infos_->tabMess[4]);
    journal_->Message6(infos_->tabMess[5]);
    journal_->Message7(infos_->tabMess[6]);
    journal_->Message8(infos_->tabMess[7]);
    journal_->Message9(infos_->tabMess[8]);
    journal_->Message10(infos_->tabMess[9]);
    vue_->ui->tempLCD->display(infos_->temp);
    majTeles();

}

void Gestionnaire::slotAcTemp()  //actualisation de la température toutes les minutes
{
   QTime time = QTime::currentTime();
   QString time_text=time.toString("hh : mm");
    infos_->temp=(carte_->GetTemperature());
    journal_->Temperature(infos_->temp);    
    journal_->Heure(time_text);
}


void Gestionnaire::on_loginBtn_clicked()
{
    QString user = co->ui->loginEdit->text();
    QString pass = co->ui->passEdit->text();

    if (user == "login" && pass == "mdp")
    {
        co->hide();
        vue_->show();
        majTeles();
    }
    else {
        QMessageBox::warning(co, "Login", "Identifiants incorrects");
    }
}

void Gestionnaire::montrer() {
    co->show();
}
void Gestionnaire::majTeles()
{
    if (infos_->tabT[0] == "F")
        vue_->ui->teles1ferme->setChecked(1);
    else
        vue_->ui->teles1ouvert->setChecked(1);

    if (infos_->tabT[1] == "F")
        vue_->ui->teles2ferme->setChecked(1);
    else
        vue_->ui->teles2ouvert->setChecked(1);
}
void Gestionnaire::showTime()
{
    QTime time = QTime::currentTime();
    QString time_text=time.toString("hh : mm : ss");
    vue_->ui->heureTxt->setText(time_text);
}
