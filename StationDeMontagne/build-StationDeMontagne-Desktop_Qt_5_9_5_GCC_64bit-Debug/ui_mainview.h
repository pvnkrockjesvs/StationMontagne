/********************************************************************************
** Form generated from reading UI file 'mainview.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINVIEW_H
#define UI_MAINVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainView
{
public:
    QWidget *centralWidget;
    QLabel *titretxt;
    QLabel *piste1txt;
    QLabel *piste2txt;
    QLabel *teles1txt;
    QLabel *piste3txt;
    QLabel *piste5txt;
    QLabel *piste6txt;
    QLabel *piste4txt;
    QLabel *teles2txt;
    QRadioButton *piste1ouvert;
    QRadioButton *piste2ouvert;
    QRadioButton *piste3ouvert;
    QRadioButton *teles1ouvert;
    QRadioButton *piste4ouvert;
    QRadioButton *piste5ouvert;
    QRadioButton *teles2ouvert;
    QRadioButton *piste6ouvert;
    QRadioButton *piste1ferme;
    QRadioButton *piste2ferme;
    QRadioButton *piste3ferme;
    QRadioButton *teles1ferme;
    QRadioButton *piste4ferme;
    QRadioButton *piste5ferme;
    QRadioButton *piste6ferme;
    QRadioButton *teles2ferme;
    QLabel *messagetxt;
    QLineEdit *message1Edit;
    QLineEdit *message2Edit;
    QLineEdit *message3Edit;
    QLineEdit *message4Edit;
    QLineEdit *message5Edit;
    QLineEdit *message6Edit;
    QLineEdit *message7Edit;
    QLineEdit *message8Edit;
    QLineEdit *message9Edit;
    QLineEdit *message10Edit;
    QPushButton *Confirmer;
    QPushButton *Annuler;
    QLCDNumber *tempLcd;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainView)
    {
        if (MainView->objectName().isEmpty())
            MainView->setObjectName(QStringLiteral("MainView"));
        MainView->resize(1010, 670);
        centralWidget = new QWidget(MainView);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        titretxt = new QLabel(centralWidget);
        titretxt->setObjectName(QStringLiteral("titretxt"));
        titretxt->setGeometry(QRect(230, 10, 551, 61));
        QFont font;
        font.setPointSize(36);
        titretxt->setFont(font);
        piste1txt = new QLabel(centralWidget);
        piste1txt->setObjectName(QStringLiteral("piste1txt"));
        piste1txt->setGeometry(QRect(80, 110, 75, 34));
        QFont font1;
        font1.setPointSize(15);
        piste1txt->setFont(font1);
        piste2txt = new QLabel(centralWidget);
        piste2txt->setObjectName(QStringLiteral("piste2txt"));
        piste2txt->setGeometry(QRect(270, 110, 75, 34));
        piste2txt->setFont(font1);
        teles1txt = new QLabel(centralWidget);
        teles1txt->setObjectName(QStringLiteral("teles1txt"));
        teles1txt->setGeometry(QRect(650, 110, 131, 34));
        teles1txt->setFont(font1);
        piste3txt = new QLabel(centralWidget);
        piste3txt->setObjectName(QStringLiteral("piste3txt"));
        piste3txt->setGeometry(QRect(460, 110, 75, 34));
        piste3txt->setFont(font1);
        piste5txt = new QLabel(centralWidget);
        piste5txt->setObjectName(QStringLiteral("piste5txt"));
        piste5txt->setGeometry(QRect(270, 190, 75, 34));
        piste5txt->setFont(font1);
        piste6txt = new QLabel(centralWidget);
        piste6txt->setObjectName(QStringLiteral("piste6txt"));
        piste6txt->setGeometry(QRect(460, 190, 75, 34));
        piste6txt->setFont(font1);
        piste4txt = new QLabel(centralWidget);
        piste4txt->setObjectName(QStringLiteral("piste4txt"));
        piste4txt->setGeometry(QRect(80, 190, 75, 34));
        piste4txt->setFont(font1);
        teles2txt = new QLabel(centralWidget);
        teles2txt->setObjectName(QStringLiteral("teles2txt"));
        teles2txt->setGeometry(QRect(650, 190, 121, 34));
        teles2txt->setFont(font1);
        piste1ouvert = new QRadioButton(centralWidget);
        piste1ouvert->setObjectName(QStringLiteral("piste1ouvert"));
        piste1ouvert->setGeometry(QRect(155, 112, 91, 34));
        QFont font2;
        font2.setPointSize(12);
        piste1ouvert->setFont(font2);
        piste1ouvert->setAutoExclusive(false);
        piste2ouvert = new QRadioButton(centralWidget);
        piste2ouvert->setObjectName(QStringLiteral("piste2ouvert"));
        piste2ouvert->setGeometry(QRect(345, 112, 91, 34));
        piste2ouvert->setFont(font2);
        piste2ouvert->setAutoExclusive(false);
        piste3ouvert = new QRadioButton(centralWidget);
        piste3ouvert->setObjectName(QStringLiteral("piste3ouvert"));
        piste3ouvert->setGeometry(QRect(535, 112, 91, 34));
        piste3ouvert->setFont(font2);
        piste3ouvert->setAutoExclusive(false);
        teles1ouvert = new QRadioButton(centralWidget);
        teles1ouvert->setObjectName(QStringLiteral("teles1ouvert"));
        teles1ouvert->setGeometry(QRect(767, 112, 91, 34));
        teles1ouvert->setFont(font2);
        teles1ouvert->setCheckable(false);
        teles1ouvert->setAutoExclusive(false);
        piste4ouvert = new QRadioButton(centralWidget);
        piste4ouvert->setObjectName(QStringLiteral("piste4ouvert"));
        piste4ouvert->setGeometry(QRect(155, 192, 91, 34));
        piste4ouvert->setFont(font2);
        piste4ouvert->setAutoExclusive(false);
        piste5ouvert = new QRadioButton(centralWidget);
        piste5ouvert->setObjectName(QStringLiteral("piste5ouvert"));
        piste5ouvert->setGeometry(QRect(345, 192, 91, 34));
        piste5ouvert->setFont(font2);
        piste5ouvert->setAutoExclusive(false);
        teles2ouvert = new QRadioButton(centralWidget);
        teles2ouvert->setObjectName(QStringLiteral("teles2ouvert"));
        teles2ouvert->setGeometry(QRect(767, 192, 91, 34));
        teles2ouvert->setFont(font2);
        teles2ouvert->setCheckable(false);
        teles2ouvert->setAutoExclusive(false);
        piste6ouvert = new QRadioButton(centralWidget);
        piste6ouvert->setObjectName(QStringLiteral("piste6ouvert"));
        piste6ouvert->setGeometry(QRect(535, 192, 91, 34));
        piste6ouvert->setFont(font2);
        piste6ouvert->setAutoExclusive(false);
        piste1ferme = new QRadioButton(centralWidget);
        piste1ferme->setObjectName(QStringLiteral("piste1ferme"));
        piste1ferme->setGeometry(QRect(155, 140, 91, 34));
        piste1ferme->setFont(font2);
        piste1ferme->setAutoExclusive(false);
        piste2ferme = new QRadioButton(centralWidget);
        piste2ferme->setObjectName(QStringLiteral("piste2ferme"));
        piste2ferme->setGeometry(QRect(345, 140, 91, 34));
        piste2ferme->setFont(font2);
        piste2ferme->setAutoExclusive(false);
        piste3ferme = new QRadioButton(centralWidget);
        piste3ferme->setObjectName(QStringLiteral("piste3ferme"));
        piste3ferme->setGeometry(QRect(535, 140, 91, 34));
        piste3ferme->setFont(font2);
        piste3ferme->setAutoExclusive(false);
        teles1ferme = new QRadioButton(centralWidget);
        teles1ferme->setObjectName(QStringLiteral("teles1ferme"));
        teles1ferme->setGeometry(QRect(767, 140, 91, 34));
        teles1ferme->setFont(font2);
        teles1ferme->setCheckable(false);
        teles1ferme->setAutoExclusive(false);
        piste4ferme = new QRadioButton(centralWidget);
        piste4ferme->setObjectName(QStringLiteral("piste4ferme"));
        piste4ferme->setGeometry(QRect(155, 220, 91, 34));
        piste4ferme->setFont(font2);
        piste4ferme->setAutoExclusive(false);
        piste5ferme = new QRadioButton(centralWidget);
        piste5ferme->setObjectName(QStringLiteral("piste5ferme"));
        piste5ferme->setGeometry(QRect(345, 220, 91, 34));
        piste5ferme->setFont(font2);
        piste5ferme->setAutoExclusive(false);
        piste6ferme = new QRadioButton(centralWidget);
        piste6ferme->setObjectName(QStringLiteral("piste6ferme"));
        piste6ferme->setGeometry(QRect(535, 220, 91, 34));
        piste6ferme->setFont(font2);
        piste6ferme->setAutoExclusive(false);
        teles2ferme = new QRadioButton(centralWidget);
        teles2ferme->setObjectName(QStringLiteral("teles2ferme"));
        teles2ferme->setGeometry(QRect(767, 220, 91, 34));
        teles2ferme->setFont(font2);
        teles2ferme->setCheckable(false);
        teles2ferme->setAutoExclusive(false);
        messagetxt = new QLabel(centralWidget);
        messagetxt->setObjectName(QStringLiteral("messagetxt"));
        messagetxt->setGeometry(QRect(80, 290, 161, 31));
        messagetxt->setFont(font1);
        message1Edit = new QLineEdit(centralWidget);
        message1Edit->setObjectName(QStringLiteral("message1Edit"));
        message1Edit->setGeometry(QRect(250, 295, 340, 25));
        message2Edit = new QLineEdit(centralWidget);
        message2Edit->setObjectName(QStringLiteral("message2Edit"));
        message2Edit->setGeometry(QRect(250, 325, 340, 25));
        message3Edit = new QLineEdit(centralWidget);
        message3Edit->setObjectName(QStringLiteral("message3Edit"));
        message3Edit->setGeometry(QRect(250, 415, 340, 25));
        message4Edit = new QLineEdit(centralWidget);
        message4Edit->setObjectName(QStringLiteral("message4Edit"));
        message4Edit->setGeometry(QRect(250, 505, 340, 25));
        message5Edit = new QLineEdit(centralWidget);
        message5Edit->setObjectName(QStringLiteral("message5Edit"));
        message5Edit->setGeometry(QRect(250, 535, 340, 25));
        message6Edit = new QLineEdit(centralWidget);
        message6Edit->setObjectName(QStringLiteral("message6Edit"));
        message6Edit->setGeometry(QRect(250, 475, 340, 25));
        message7Edit = new QLineEdit(centralWidget);
        message7Edit->setObjectName(QStringLiteral("message7Edit"));
        message7Edit->setGeometry(QRect(250, 445, 340, 25));
        message8Edit = new QLineEdit(centralWidget);
        message8Edit->setObjectName(QStringLiteral("message8Edit"));
        message8Edit->setGeometry(QRect(250, 355, 340, 25));
        message9Edit = new QLineEdit(centralWidget);
        message9Edit->setObjectName(QStringLiteral("message9Edit"));
        message9Edit->setGeometry(QRect(250, 385, 340, 25));
        message10Edit = new QLineEdit(centralWidget);
        message10Edit->setObjectName(QStringLiteral("message10Edit"));
        message10Edit->setGeometry(QRect(250, 565, 340, 25));
        Confirmer = new QPushButton(centralWidget);
        Confirmer->setObjectName(QStringLiteral("Confirmer"));
        Confirmer->setGeometry(QRect(490, 610, 100, 30));
        Annuler = new QPushButton(centralWidget);
        Annuler->setObjectName(QStringLiteral("Annuler"));
        Annuler->setGeometry(QRect(370, 610, 100, 30));
        tempLcd = new QLCDNumber(centralWidget);
        tempLcd->setObjectName(QStringLiteral("tempLcd"));
        tempLcd->setGeometry(QRect(730, 290, 111, 61));
        MainView->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainView);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainView->setStatusBar(statusBar);

        retranslateUi(MainView);

        QMetaObject::connectSlotsByName(MainView);
    } // setupUi

    void retranslateUi(QMainWindow *MainView)
    {
        MainView->setWindowTitle(QApplication::translate("MainView", "MainView", Q_NULLPTR));
        titretxt->setText(QApplication::translate("MainView", "Gestion de la station", Q_NULLPTR));
        piste1txt->setText(QApplication::translate("MainView", "Piste 1 :", Q_NULLPTR));
        piste2txt->setText(QApplication::translate("MainView", "Piste 2 :", Q_NULLPTR));
        teles1txt->setText(QApplication::translate("MainView", "T\303\251l\303\251si\303\250ge 1 :", Q_NULLPTR));
        piste3txt->setText(QApplication::translate("MainView", "Piste 3 :", Q_NULLPTR));
        piste5txt->setText(QApplication::translate("MainView", "Piste 5 :", Q_NULLPTR));
        piste6txt->setText(QApplication::translate("MainView", "Piste 6 :", Q_NULLPTR));
        piste4txt->setText(QApplication::translate("MainView", "Piste 4 :", Q_NULLPTR));
        teles2txt->setText(QApplication::translate("MainView", "T\303\251l\303\251si\303\250ge 2 :", Q_NULLPTR));
        piste1ouvert->setText(QApplication::translate("MainView", "Ouverte", Q_NULLPTR));
        piste2ouvert->setText(QApplication::translate("MainView", "Ouverte", Q_NULLPTR));
        piste3ouvert->setText(QApplication::translate("MainView", "Ouverte", Q_NULLPTR));
        teles1ouvert->setText(QApplication::translate("MainView", "Ouvert", Q_NULLPTR));
        piste4ouvert->setText(QApplication::translate("MainView", "Ouverte", Q_NULLPTR));
        piste5ouvert->setText(QApplication::translate("MainView", "Ouverte", Q_NULLPTR));
        teles2ouvert->setText(QApplication::translate("MainView", "Ouvert", Q_NULLPTR));
        piste6ouvert->setText(QApplication::translate("MainView", "Ouverte", Q_NULLPTR));
        piste1ferme->setText(QApplication::translate("MainView", "Ferm\303\251e", Q_NULLPTR));
        piste2ferme->setText(QApplication::translate("MainView", "Ferm\303\251e", Q_NULLPTR));
        piste3ferme->setText(QApplication::translate("MainView", "Ferm\303\251e", Q_NULLPTR));
        teles1ferme->setText(QApplication::translate("MainView", "Ferm\303\251", Q_NULLPTR));
        piste4ferme->setText(QApplication::translate("MainView", "Ferm\303\251e", Q_NULLPTR));
        piste5ferme->setText(QApplication::translate("MainView", "Ferm\303\251e", Q_NULLPTR));
        piste6ferme->setText(QApplication::translate("MainView", "Ferm\303\251e", Q_NULLPTR));
        teles2ferme->setText(QApplication::translate("MainView", "Ferm\303\251", Q_NULLPTR));
        messagetxt->setText(QApplication::translate("MainView", "Message actuel :", Q_NULLPTR));
        Confirmer->setText(QApplication::translate("MainView", "Confirmer", Q_NULLPTR));
        Annuler->setText(QApplication::translate("MainView", "Annuler", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainView: public Ui_MainView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINVIEW_H