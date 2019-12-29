#include "connexion.h"
#include "ui_connexion.h"
#include <QMessageBox>
#include <iostream>



Connexion::Connexion(QWidget *parent) : QMainWindow(parent), ui(new Ui::Connexion)
{
    ui->setupUi(this);

}
Connexion::~Connexion()
{
    delete ui;
}


void Connexion::on_loginBtn_clicked()
{
    QString user = ui->loginEdit->text();
    QString pass = ui->passEdit->text();

    if (user == "login" && pass == "mdp")
    {
        hide();
        page = new MainView(this);
        page->show();
    }
    else {
        QMessageBox::warning(this, "Login", "Identifiants incorrects");
    }
}
void Connexion::on_passEdit_textEdited() {
    ui->passEdit->setEchoMode(QLineEdit::Password);
}
