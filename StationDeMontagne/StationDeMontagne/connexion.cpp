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

void Connexion::on_passEdit_textEdited() {
    ui->passEdit->setEchoMode(QLineEdit::Password);
}

