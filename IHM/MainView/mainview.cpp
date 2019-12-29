#include "mainview.h"
#include "ui_mainview.h"
#include <QObject>
#include <QDesktopServices>

MainView::MainView(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainView)
{
    ui->setupUi(this);
    ui->aideTxt->setText("<a href=\"https://www.lamontagne.fr/\">Aide</a>");
    ui->aideTxt->setTextFormat(Qt::RichText);
    ui->aideTxt->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui->aideTxt->setOpenExternalLinks(true);
}

MainView::~MainView()
{
    delete ui;
}

// SI ouvert est true alors ferme est false et vice versa
void MainView::on_piste1ouvert_clicked()
{
    if (ui->piste1ouvert->isChecked())
    {
        ui->piste1ferme->setChecked(0);
        etatPiste1 = 1;

    }
}
void MainView::on_piste1ferme_clicked()
{
    if (ui->piste1ferme->isChecked())
    {
        ui->piste1ouvert->setChecked(0);
        etatPiste1 = 0;
    }
}
void MainView::on_piste2ouvert_clicked()
{
    if (ui->piste2ouvert->isChecked())
    {
        ui->piste2ferme->setChecked(0);
        etatPiste2 = 1;
    }
}
void MainView::on_piste2ferme_clicked()
{
    if (ui->piste2ferme->isChecked())
    {
        ui->piste2ouvert->setChecked(0);
        etatPiste2 = 0;

    }
}
void MainView::on_piste3ouvert_clicked()
{
    if (ui->piste3ouvert->isChecked())
    {
        ui->piste3ferme->setChecked(0);
        etatPiste3 = 1;
    }
}
void MainView::on_piste3ferme_clicked()
{
    if (ui->piste3ferme->isChecked())
    {
        ui->piste3ouvert->setChecked(0);
        etatPiste3 = 0;
    }
}
void MainView::on_piste4ouvert_clicked()
{
    if (ui->piste4ouvert->isChecked())
    {
        ui->piste4ferme->setChecked(0);
        etatPiste4 = 1;

    }
}
void MainView::on_piste4ferme_clicked()
{
    if (ui->piste4ferme->isChecked())
        {
            ui->piste4ouvert->setChecked(0);
            etatPiste4 = 0;

        }
}
void MainView::on_piste5ouvert_clicked()
{
    if (ui->piste5ouvert->isChecked())
    {
        ui->piste5ferme->setChecked(0);
        etatPiste5 = 1;

    }
}
void MainView::on_piste5ferme_clicked()
{
    if (ui->piste5ferme->isChecked())
        {
            ui->piste5ouvert->setChecked(0);
            etatPiste5 = 0;

        }
}
void MainView::on_piste6ouvert_clicked()
{
    if (ui->piste6ouvert->isChecked())
    {
        ui->piste6ferme->setChecked(0);
        etatPiste6 = 1;

    }
}
void MainView::on_piste6ferme_clicked()
{
    if (ui->piste6ferme->isChecked())
        {
            ui->piste6ouvert->setChecked(0);
            etatPiste6 = 0;
        }
}
void MainView::on_teles1ouvert_clicked()
{
    if (ui->teles1ouvert->isChecked())
    {
        ui->teles1ferme->setChecked(0);

    }
}
void MainView::on_teles1ferme_clicked()
{
    if (ui->teles1ferme->isChecked())
        {
            ui->teles1ouvert->setChecked(0);
        }
}
void MainView::on_teles2ouvert_clicked()
{
    if (ui->teles2ouvert->isChecked())
    {
        ui->teles2ferme->setChecked(0);
    }
}
void MainView::on_teles2ferme_clicked()
{
    if (ui->teles2ferme->isChecked())
        {
            ui->teles2ouvert->setChecked(0);
        }
}

// enregistrement message dans variable
void MainView::on_message1Edit_textChanged()
{
    ui->message1Edit->setMaxLength(40);
    message[0] = ui->message1Edit->text();
}

void MainView::on_message2Edit_textChanged()
{
    ui->message2Edit->setMaxLength(40);
    message[1] = ui->message2Edit->text();
}
void MainView::on_message3Edit_textChanged()
{
    ui->message3Edit->setMaxLength(40);
    message[2] = ui->message3Edit->text();
}
void MainView::on_message4Edit_textChanged()
{
    ui->message4Edit->setMaxLength(40);
    message[3] = ui->message4Edit->text();
}
void MainView::on_message5Edit_textChanged()
{
    ui->message5Edit->setMaxLength(40);
    message[4] = ui->message5Edit->text();
}
void MainView::on_message6Edit_textChanged()
{
    ui->message6Edit->setMaxLength(40);
    message[5] = ui->message1Edit->text();
}
void MainView::on_message7Edit_textChanged()
{
    ui->message7Edit->setMaxLength(40);
    message[6] = ui->message7Edit->text();
}
void MainView::on_message8Edit_textChanged()
{
    ui->message8Edit->setMaxLength(40);
    message[7] = ui->message8Edit->text();
}
void MainView::on_message9Edit_textChanged()
{
    ui->message9Edit->setMaxLength(40);
    message[8] = ui->message9Edit->text();
}
void MainView::on_message10Edit_textChanged()
{
    ui->message10Edit->setMaxLength(40);
    message[9] = ui->message10Edit->text();
}

void MainView::on_Confirmer_clicked() {
    emit sigChangement();
}

