/********************************************************************************
** Form generated from reading UI file 'mainview.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINVIEW_H
#define UI_MAINVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainView
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *Etats;
    QGroupBox *Pistes;
    QRadioButton *piste3ferme;
    QRadioButton *piste5ferme;
    QRadioButton *piste3ouvert;
    QLabel *piste5txt;
    QLabel *piste4txt;
    QLabel *piste3txt;
    QRadioButton *piste1ouvert;
    QRadioButton *piste6ferme;
    QLabel *piste2txt;
    QRadioButton *piste5ouvert;
    QRadioButton *piste1ferme;
    QRadioButton *piste2ferme;
    QRadioButton *piste4ouvert;
    QLabel *piste6txt;
    QLabel *piste1txt;
    QRadioButton *piste2ouvert;
    QRadioButton *piste4ferme;
    QRadioButton *piste6ouvert;
    QGroupBox *Telesieges;
    QLabel *teles1txt;
    QRadioButton *teles1ouvert;
    QRadioButton *teles2ferme;
    QLabel *teles2txt;
    QRadioButton *teles2ouvert;
    QRadioButton *teles1ferme;
    QPushButton *AnnulerP;
    QPushButton *ConfirmerP;
    QWidget *Message;
    QGroupBox *Messages;
    QLineEdit *message10Edit;
    QLineEdit *message9Edit;
    QLineEdit *message8Edit;
    QLineEdit *message2Edit;
    QLineEdit *message1Edit;
    QLineEdit *message7Edit;
    QLineEdit *message3Edit;
    QLineEdit *message4Edit;
    QLineEdit *message5Edit;
    QLabel *messagetxt;
    QLineEdit *message6Edit;
    QPushButton *AnnulerM;
    QPushButton *ConfirmerM;
    QLabel *titretxt;
    QLabel *tempTxt;
    QLCDNumber *tempLCD;
    QLabel *aideTxt;
    QLabel *heureTxt;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainView)
    {
        if (MainView->objectName().isEmpty())
            MainView->setObjectName(QString::fromUtf8("MainView"));
        MainView->resize(1010, 670);
        centralWidget = new QWidget(MainView);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(0, 0, 1010, 670));
        tabWidget->setMinimumSize(QSize(0, 0));
        tabWidget->setSizeIncrement(QSize(0, 0));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(16, 16));
        tabWidget->setDocumentMode(false);
        Etats = new QWidget();
        Etats->setObjectName(QString::fromUtf8("Etats"));
        Etats->setMinimumSize(QSize(0, 0));
        Etats->setBaseSize(QSize(0, 0));
        QFont font;
        font.setItalic(false);
        Etats->setFont(font);
        Pistes = new QGroupBox(Etats);
        Pistes->setObjectName(QString::fromUtf8("Pistes"));
        Pistes->setGeometry(QRect(120, 150, 721, 191));
        piste3ferme = new QRadioButton(Pistes);
        piste3ferme->setObjectName(QString::fromUtf8("piste3ferme"));
        piste3ferme->setGeometry(QRect(610, 58, 91, 34));
        QFont font1;
        font1.setPointSize(12);
        font1.setItalic(false);
        piste3ferme->setFont(font1);
        piste3ferme->setAutoExclusive(false);
        piste5ferme = new QRadioButton(Pistes);
        piste5ferme->setObjectName(QString::fromUtf8("piste5ferme"));
        piste5ferme->setGeometry(QRect(355, 138, 91, 34));
        piste5ferme->setFont(font1);
        piste5ferme->setAutoExclusive(false);
        piste3ouvert = new QRadioButton(Pistes);
        piste3ouvert->setObjectName(QString::fromUtf8("piste3ouvert"));
        piste3ouvert->setGeometry(QRect(610, 30, 91, 34));
        piste3ouvert->setFont(font1);
        piste3ouvert->setAutoExclusive(false);
        piste5txt = new QLabel(Pistes);
        piste5txt->setObjectName(QString::fromUtf8("piste5txt"));
        piste5txt->setGeometry(QRect(280, 108, 75, 34));
        QFont font2;
        font2.setPointSize(15);
        font2.setItalic(false);
        piste5txt->setFont(font2);
        piste4txt = new QLabel(Pistes);
        piste4txt->setObjectName(QString::fromUtf8("piste4txt"));
        piste4txt->setGeometry(QRect(20, 108, 75, 34));
        piste4txt->setFont(font2);
        piste3txt = new QLabel(Pistes);
        piste3txt->setObjectName(QString::fromUtf8("piste3txt"));
        piste3txt->setGeometry(QRect(535, 28, 75, 34));
        piste3txt->setFont(font2);
        piste1ouvert = new QRadioButton(Pistes);
        piste1ouvert->setObjectName(QString::fromUtf8("piste1ouvert"));
        piste1ouvert->setGeometry(QRect(95, 30, 91, 34));
        piste1ouvert->setFont(font1);
        piste1ouvert->setAutoExclusive(false);
        piste6ferme = new QRadioButton(Pistes);
        piste6ferme->setObjectName(QString::fromUtf8("piste6ferme"));
        piste6ferme->setGeometry(QRect(610, 138, 91, 34));
        piste6ferme->setFont(font1);
        piste6ferme->setAutoExclusive(false);
        piste2txt = new QLabel(Pistes);
        piste2txt->setObjectName(QString::fromUtf8("piste2txt"));
        piste2txt->setGeometry(QRect(280, 28, 75, 34));
        piste2txt->setFont(font2);
        piste5ouvert = new QRadioButton(Pistes);
        piste5ouvert->setObjectName(QString::fromUtf8("piste5ouvert"));
        piste5ouvert->setGeometry(QRect(355, 110, 91, 34));
        piste5ouvert->setFont(font1);
        piste5ouvert->setAutoExclusive(false);
        piste1ferme = new QRadioButton(Pistes);
        piste1ferme->setObjectName(QString::fromUtf8("piste1ferme"));
        piste1ferme->setGeometry(QRect(95, 58, 91, 34));
        piste1ferme->setFont(font1);
        piste1ferme->setAutoExclusive(false);
        piste2ferme = new QRadioButton(Pistes);
        piste2ferme->setObjectName(QString::fromUtf8("piste2ferme"));
        piste2ferme->setGeometry(QRect(355, 58, 91, 34));
        piste2ferme->setFont(font1);
        piste2ferme->setAutoExclusive(false);
        piste4ouvert = new QRadioButton(Pistes);
        piste4ouvert->setObjectName(QString::fromUtf8("piste4ouvert"));
        piste4ouvert->setGeometry(QRect(95, 110, 91, 34));
        piste4ouvert->setFont(font1);
        piste4ouvert->setAutoExclusive(false);
        piste6txt = new QLabel(Pistes);
        piste6txt->setObjectName(QString::fromUtf8("piste6txt"));
        piste6txt->setGeometry(QRect(535, 108, 75, 34));
        piste6txt->setFont(font2);
        piste1txt = new QLabel(Pistes);
        piste1txt->setObjectName(QString::fromUtf8("piste1txt"));
        piste1txt->setGeometry(QRect(20, 28, 75, 34));
        piste1txt->setFont(font2);
        piste2ouvert = new QRadioButton(Pistes);
        piste2ouvert->setObjectName(QString::fromUtf8("piste2ouvert"));
        piste2ouvert->setGeometry(QRect(355, 30, 91, 34));
        piste2ouvert->setFont(font1);
        piste2ouvert->setAutoExclusive(false);
        piste4ferme = new QRadioButton(Pistes);
        piste4ferme->setObjectName(QString::fromUtf8("piste4ferme"));
        piste4ferme->setGeometry(QRect(95, 138, 91, 34));
        piste4ferme->setFont(font1);
        piste4ferme->setAutoExclusive(false);
        piste6ouvert = new QRadioButton(Pistes);
        piste6ouvert->setObjectName(QString::fromUtf8("piste6ouvert"));
        piste6ouvert->setGeometry(QRect(610, 110, 91, 34));
        piste6ouvert->setFont(font1);
        piste6ouvert->setAutoExclusive(false);
        Telesieges = new QGroupBox(Etats);
        Telesieges->setObjectName(QString::fromUtf8("Telesieges"));
        Telesieges->setGeometry(QRect(120, 350, 721, 141));
        teles1txt = new QLabel(Telesieges);
        teles1txt->setObjectName(QString::fromUtf8("teles1txt"));
        teles1txt->setGeometry(QRect(133, 50, 131, 34));
        teles1txt->setFont(font2);
        teles1ouvert = new QRadioButton(Telesieges);
        teles1ouvert->setObjectName(QString::fromUtf8("teles1ouvert"));
        teles1ouvert->setEnabled(false);
        teles1ouvert->setGeometry(QRect(250, 52, 91, 34));
        teles1ouvert->setFont(font1);
        teles1ouvert->setCheckable(true);
        teles1ouvert->setAutoExclusive(false);
        teles2ferme = new QRadioButton(Telesieges);
        teles2ferme->setObjectName(QString::fromUtf8("teles2ferme"));
        teles2ferme->setEnabled(false);
        teles2ferme->setGeometry(QRect(530, 80, 91, 34));
        teles2ferme->setFont(font1);
        teles2ferme->setCheckable(true);
        teles2ferme->setAutoExclusive(false);
        teles2txt = new QLabel(Telesieges);
        teles2txt->setObjectName(QString::fromUtf8("teles2txt"));
        teles2txt->setGeometry(QRect(413, 50, 121, 34));
        teles2txt->setFont(font2);
        teles2ouvert = new QRadioButton(Telesieges);
        teles2ouvert->setObjectName(QString::fromUtf8("teles2ouvert"));
        teles2ouvert->setEnabled(false);
        teles2ouvert->setGeometry(QRect(530, 52, 91, 34));
        teles2ouvert->setFont(font1);
        teles2ouvert->setCheckable(true);
        teles2ouvert->setAutoExclusive(false);
        teles1ferme = new QRadioButton(Telesieges);
        teles1ferme->setObjectName(QString::fromUtf8("teles1ferme"));
        teles1ferme->setEnabled(false);
        teles1ferme->setGeometry(QRect(250, 80, 91, 34));
        teles1ferme->setFont(font1);
        teles1ferme->setCheckable(true);
        teles1ferme->setAutoExclusive(false);
        AnnulerP = new QPushButton(Etats);
        AnnulerP->setObjectName(QString::fromUtf8("AnnulerP"));
        AnnulerP->setGeometry(QRect(620, 510, 100, 30));
        ConfirmerP = new QPushButton(Etats);
        ConfirmerP->setObjectName(QString::fromUtf8("ConfirmerP"));
        ConfirmerP->setGeometry(QRect(740, 510, 100, 30));
        tabWidget->addTab(Etats, QString());
        Message = new QWidget();
        Message->setObjectName(QString::fromUtf8("Message"));
        Messages = new QGroupBox(Message);
        Messages->setObjectName(QString::fromUtf8("Messages"));
        Messages->setGeometry(QRect(170, 140, 651, 401));
        message10Edit = new QLineEdit(Messages);
        message10Edit->setObjectName(QString::fromUtf8("message10Edit"));
        message10Edit->setGeometry(QRect(200, 360, 400, 25));
        message9Edit = new QLineEdit(Messages);
        message9Edit->setObjectName(QString::fromUtf8("message9Edit"));
        message9Edit->setGeometry(QRect(200, 325, 400, 25));
        message8Edit = new QLineEdit(Messages);
        message8Edit->setObjectName(QString::fromUtf8("message8Edit"));
        message8Edit->setGeometry(QRect(200, 290, 400, 25));
        message2Edit = new QLineEdit(Messages);
        message2Edit->setObjectName(QString::fromUtf8("message2Edit"));
        message2Edit->setGeometry(QRect(200, 80, 400, 25));
        message1Edit = new QLineEdit(Messages);
        message1Edit->setObjectName(QString::fromUtf8("message1Edit"));
        message1Edit->setGeometry(QRect(200, 45, 400, 25));
        message7Edit = new QLineEdit(Messages);
        message7Edit->setObjectName(QString::fromUtf8("message7Edit"));
        message7Edit->setGeometry(QRect(200, 255, 400, 25));
        message3Edit = new QLineEdit(Messages);
        message3Edit->setObjectName(QString::fromUtf8("message3Edit"));
        message3Edit->setGeometry(QRect(200, 115, 400, 25));
        message4Edit = new QLineEdit(Messages);
        message4Edit->setObjectName(QString::fromUtf8("message4Edit"));
        message4Edit->setGeometry(QRect(200, 150, 400, 25));
        message5Edit = new QLineEdit(Messages);
        message5Edit->setObjectName(QString::fromUtf8("message5Edit"));
        message5Edit->setGeometry(QRect(200, 185, 400, 25));
        messagetxt = new QLabel(Messages);
        messagetxt->setObjectName(QString::fromUtf8("messagetxt"));
        messagetxt->setGeometry(QRect(30, 40, 161, 31));
        QFont font3;
        font3.setPointSize(15);
        messagetxt->setFont(font3);
        message6Edit = new QLineEdit(Messages);
        message6Edit->setObjectName(QString::fromUtf8("message6Edit"));
        message6Edit->setGeometry(QRect(200, 220, 400, 25));
        AnnulerM = new QPushButton(Message);
        AnnulerM->setObjectName(QString::fromUtf8("AnnulerM"));
        AnnulerM->setGeometry(QRect(600, 560, 100, 30));
        ConfirmerM = new QPushButton(Message);
        ConfirmerM->setObjectName(QString::fromUtf8("ConfirmerM"));
        ConfirmerM->setGeometry(QRect(720, 560, 100, 30));
        tabWidget->addTab(Message, QString());
        titretxt = new QLabel(centralWidget);
        titretxt->setObjectName(QString::fromUtf8("titretxt"));
        titretxt->setGeometry(QRect(270, 80, 551, 61));
        QFont font4;
        font4.setPointSize(36);
        font4.setItalic(false);
        titretxt->setFont(font4);
        tempTxt = new QLabel(centralWidget);
        tempTxt->setObjectName(QString::fromUtf8("tempTxt"));
        tempTxt->setGeometry(QRect(910, 140, 61, 31));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Digital dream"));
        font5.setPointSize(18);
        font5.setBold(false);
        font5.setWeight(50);
        tempTxt->setFont(font5);
        tempLCD = new QLCDNumber(centralWidget);
        tempLCD->setObjectName(QString::fromUtf8("tempLCD"));
        tempLCD->setGeometry(QRect(840, 140, 71, 31));
        tempLCD->setFrameShape(QFrame::NoFrame);
        tempLCD->setFrameShadow(QFrame::Sunken);
        tempLCD->setSegmentStyle(QLCDNumber::Flat);
        aideTxt = new QLabel(centralWidget);
        aideTxt->setObjectName(QString::fromUtf8("aideTxt"));
        aideTxt->setGeometry(QRect(910, 600, 51, 31));
        QFont font6;
        font6.setPointSize(11);
        font6.setBold(true);
        font6.setWeight(75);
        aideTxt->setFont(font6);
        aideTxt->setTextFormat(Qt::AutoText);
        heureTxt = new QLabel(centralWidget);
        heureTxt->setObjectName(QString::fromUtf8("heureTxt"));
        heureTxt->setGeometry(QRect(840, 95, 121, 41));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Cantarell"));
        font7.setPointSize(16);
        font7.setBold(true);
        font7.setWeight(75);
        heureTxt->setFont(font7);
        heureTxt->setLayoutDirection(Qt::RightToLeft);
        heureTxt->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        MainView->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainView);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainView->setStatusBar(statusBar);
        QWidget::setTabOrder(piste3ferme, piste5ferme);
        QWidget::setTabOrder(piste5ferme, piste3ouvert);
        QWidget::setTabOrder(piste3ouvert, piste1ouvert);
        QWidget::setTabOrder(piste1ouvert, piste6ferme);
        QWidget::setTabOrder(piste6ferme, piste5ouvert);
        QWidget::setTabOrder(piste5ouvert, piste1ferme);
        QWidget::setTabOrder(piste1ferme, piste2ferme);
        QWidget::setTabOrder(piste2ferme, piste4ouvert);
        QWidget::setTabOrder(piste4ouvert, piste2ouvert);
        QWidget::setTabOrder(piste2ouvert, piste4ferme);
        QWidget::setTabOrder(piste4ferme, piste6ouvert);
        QWidget::setTabOrder(piste6ouvert, teles1ouvert);
        QWidget::setTabOrder(teles1ouvert, teles2ferme);
        QWidget::setTabOrder(teles2ferme, teles2ouvert);
        QWidget::setTabOrder(teles2ouvert, teles1ferme);
        QWidget::setTabOrder(teles1ferme, AnnulerP);
        QWidget::setTabOrder(AnnulerP, ConfirmerP);
        QWidget::setTabOrder(ConfirmerP, tabWidget);
        QWidget::setTabOrder(tabWidget, message1Edit);
        QWidget::setTabOrder(message1Edit, message2Edit);
        QWidget::setTabOrder(message2Edit, message3Edit);
        QWidget::setTabOrder(message3Edit, message4Edit);
        QWidget::setTabOrder(message4Edit, message5Edit);
        QWidget::setTabOrder(message5Edit, message6Edit);
        QWidget::setTabOrder(message6Edit, message7Edit);
        QWidget::setTabOrder(message7Edit, message8Edit);
        QWidget::setTabOrder(message8Edit, message9Edit);
        QWidget::setTabOrder(message9Edit, message10Edit);
        QWidget::setTabOrder(message10Edit, AnnulerM);
        QWidget::setTabOrder(AnnulerM, ConfirmerM);

        retranslateUi(MainView);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainView);
    } // setupUi

    void retranslateUi(QMainWindow *MainView)
    {
        MainView->setWindowTitle(QCoreApplication::translate("MainView", "MainView", nullptr));
        Pistes->setTitle(QCoreApplication::translate("MainView", "Pistes", nullptr));
        piste3ferme->setText(QCoreApplication::translate("MainView", "Ferm\303\251e", nullptr));
        piste5ferme->setText(QCoreApplication::translate("MainView", "Ferm\303\251e", nullptr));
        piste3ouvert->setText(QCoreApplication::translate("MainView", "Ouverte", nullptr));
        piste5txt->setText(QCoreApplication::translate("MainView", "Piste 5 :", nullptr));
        piste4txt->setText(QCoreApplication::translate("MainView", "Piste 4 :", nullptr));
        piste3txt->setText(QCoreApplication::translate("MainView", "Piste 3 :", nullptr));
        piste1ouvert->setText(QCoreApplication::translate("MainView", "Ouverte", nullptr));
        piste6ferme->setText(QCoreApplication::translate("MainView", "Ferm\303\251e", nullptr));
        piste2txt->setText(QCoreApplication::translate("MainView", "Piste 2 :", nullptr));
        piste5ouvert->setText(QCoreApplication::translate("MainView", "Ouverte", nullptr));
        piste1ferme->setText(QCoreApplication::translate("MainView", "Ferm\303\251e", nullptr));
        piste2ferme->setText(QCoreApplication::translate("MainView", "Ferm\303\251e", nullptr));
        piste4ouvert->setText(QCoreApplication::translate("MainView", "Ouverte", nullptr));
        piste6txt->setText(QCoreApplication::translate("MainView", "Piste 6 :", nullptr));
        piste1txt->setText(QCoreApplication::translate("MainView", "Piste 1 :", nullptr));
        piste2ouvert->setText(QCoreApplication::translate("MainView", "Ouverte", nullptr));
        piste4ferme->setText(QCoreApplication::translate("MainView", "Ferm\303\251e", nullptr));
        piste6ouvert->setText(QCoreApplication::translate("MainView", "Ouverte", nullptr));
        Telesieges->setTitle(QCoreApplication::translate("MainView", "T\303\251l\303\251sieges", nullptr));
        teles1txt->setText(QCoreApplication::translate("MainView", "T\303\251l\303\251si\303\250ge 1 :", nullptr));
        teles1ouvert->setText(QCoreApplication::translate("MainView", "Ouvert", nullptr));
        teles2ferme->setText(QCoreApplication::translate("MainView", "Ferm\303\251", nullptr));
        teles2txt->setText(QCoreApplication::translate("MainView", "T\303\251l\303\251si\303\250ge 2 :", nullptr));
        teles2ouvert->setText(QCoreApplication::translate("MainView", "Ouvert", nullptr));
        teles1ferme->setText(QCoreApplication::translate("MainView", "Ferm\303\251", nullptr));
        AnnulerP->setText(QCoreApplication::translate("MainView", "Annuler", nullptr));
        ConfirmerP->setText(QCoreApplication::translate("MainView", "Confirmer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Etats), QCoreApplication::translate("MainView", "Etat station", nullptr));
        Messages->setTitle(QCoreApplication::translate("MainView", "Messages", nullptr));
        messagetxt->setText(QCoreApplication::translate("MainView", "Message actuel :", nullptr));
        AnnulerM->setText(QCoreApplication::translate("MainView", "Annuler", nullptr));
        ConfirmerM->setText(QCoreApplication::translate("MainView", "Confirmer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Message), QCoreApplication::translate("MainView", "  Message  ", nullptr));
        titretxt->setText(QCoreApplication::translate("MainView", "Gestion de la station", nullptr));
        tempTxt->setText(QCoreApplication::translate("MainView", "\302\260 C", nullptr));
        aideTxt->setText(QCoreApplication::translate("MainView", "Aide", nullptr));
        heureTxt->setText(QCoreApplication::translate("MainView", "Test", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainView: public Ui_MainView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINVIEW_H
