/********************************************************************************
** Form generated from reading UI file 'mainview.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
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
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainView
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *Etats;
    QLabel *heureTxt;
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
    QGroupBox *groupBox_2;
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
    QTimeEdit *heureEdit;
    QLCDNumber *tempLCD;
    QLabel *aideTxt;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainView)
    {
        if (MainView->objectName().isEmpty())
            MainView->setObjectName(QStringLiteral("MainView"));
        MainView->resize(1010, 670);
        centralWidget = new QWidget(MainView);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(0, 0, 1010, 670));
        tabWidget->setMinimumSize(QSize(0, 0));
        tabWidget->setSizeIncrement(QSize(0, 0));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(16, 16));
        tabWidget->setDocumentMode(false);
        Etats = new QWidget();
        Etats->setObjectName(QStringLiteral("Etats"));
        Etats->setMinimumSize(QSize(0, 0));
        Etats->setBaseSize(QSize(0, 0));
        QFont font;
        font.setItalic(false);
        Etats->setFont(font);
        heureTxt = new QLabel(Etats);
        heureTxt->setObjectName(QStringLiteral("heureTxt"));
        heureTxt->setGeometry(QRect(900, 120, 121, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Carlito"));
        font1.setPointSize(18);
        font1.setItalic(false);
        heureTxt->setFont(font1);
        Pistes = new QGroupBox(Etats);
        Pistes->setObjectName(QStringLiteral("Pistes"));
        Pistes->setGeometry(QRect(120, 150, 721, 191));
        piste3ferme = new QRadioButton(Pistes);
        piste3ferme->setObjectName(QStringLiteral("piste3ferme"));
        piste3ferme->setGeometry(QRect(610, 58, 91, 34));
        QFont font2;
        font2.setPointSize(12);
        font2.setItalic(false);
        piste3ferme->setFont(font2);
        piste3ferme->setAutoExclusive(false);
        piste5ferme = new QRadioButton(Pistes);
        piste5ferme->setObjectName(QStringLiteral("piste5ferme"));
        piste5ferme->setGeometry(QRect(355, 138, 91, 34));
        piste5ferme->setFont(font2);
        piste5ferme->setAutoExclusive(false);
        piste3ouvert = new QRadioButton(Pistes);
        piste3ouvert->setObjectName(QStringLiteral("piste3ouvert"));
        piste3ouvert->setGeometry(QRect(610, 30, 91, 34));
        piste3ouvert->setFont(font2);
        piste3ouvert->setAutoExclusive(false);
        piste5txt = new QLabel(Pistes);
        piste5txt->setObjectName(QStringLiteral("piste5txt"));
        piste5txt->setGeometry(QRect(280, 108, 75, 34));
        QFont font3;
        font3.setPointSize(15);
        font3.setItalic(false);
        piste5txt->setFont(font3);
        piste4txt = new QLabel(Pistes);
        piste4txt->setObjectName(QStringLiteral("piste4txt"));
        piste4txt->setGeometry(QRect(20, 108, 75, 34));
        piste4txt->setFont(font3);
        piste3txt = new QLabel(Pistes);
        piste3txt->setObjectName(QStringLiteral("piste3txt"));
        piste3txt->setGeometry(QRect(535, 28, 75, 34));
        piste3txt->setFont(font3);
        piste1ouvert = new QRadioButton(Pistes);
        piste1ouvert->setObjectName(QStringLiteral("piste1ouvert"));
        piste1ouvert->setGeometry(QRect(95, 30, 91, 34));
        piste1ouvert->setFont(font2);
        piste1ouvert->setAutoExclusive(false);
        piste6ferme = new QRadioButton(Pistes);
        piste6ferme->setObjectName(QStringLiteral("piste6ferme"));
        piste6ferme->setGeometry(QRect(610, 138, 91, 34));
        piste6ferme->setFont(font2);
        piste6ferme->setAutoExclusive(false);
        piste2txt = new QLabel(Pistes);
        piste2txt->setObjectName(QStringLiteral("piste2txt"));
        piste2txt->setGeometry(QRect(280, 28, 75, 34));
        piste2txt->setFont(font3);
        piste5ouvert = new QRadioButton(Pistes);
        piste5ouvert->setObjectName(QStringLiteral("piste5ouvert"));
        piste5ouvert->setGeometry(QRect(355, 110, 91, 34));
        piste5ouvert->setFont(font2);
        piste5ouvert->setAutoExclusive(false);
        piste1ferme = new QRadioButton(Pistes);
        piste1ferme->setObjectName(QStringLiteral("piste1ferme"));
        piste1ferme->setGeometry(QRect(95, 58, 91, 34));
        piste1ferme->setFont(font2);
        piste1ferme->setAutoExclusive(false);
        piste2ferme = new QRadioButton(Pistes);
        piste2ferme->setObjectName(QStringLiteral("piste2ferme"));
        piste2ferme->setGeometry(QRect(355, 58, 91, 34));
        piste2ferme->setFont(font2);
        piste2ferme->setAutoExclusive(false);
        piste4ouvert = new QRadioButton(Pistes);
        piste4ouvert->setObjectName(QStringLiteral("piste4ouvert"));
        piste4ouvert->setGeometry(QRect(95, 110, 91, 34));
        piste4ouvert->setFont(font2);
        piste4ouvert->setAutoExclusive(false);
        piste6txt = new QLabel(Pistes);
        piste6txt->setObjectName(QStringLiteral("piste6txt"));
        piste6txt->setGeometry(QRect(535, 108, 75, 34));
        piste6txt->setFont(font3);
        piste1txt = new QLabel(Pistes);
        piste1txt->setObjectName(QStringLiteral("piste1txt"));
        piste1txt->setGeometry(QRect(20, 28, 75, 34));
        piste1txt->setFont(font3);
        piste2ouvert = new QRadioButton(Pistes);
        piste2ouvert->setObjectName(QStringLiteral("piste2ouvert"));
        piste2ouvert->setGeometry(QRect(355, 30, 91, 34));
        piste2ouvert->setFont(font2);
        piste2ouvert->setAutoExclusive(false);
        piste4ferme = new QRadioButton(Pistes);
        piste4ferme->setObjectName(QStringLiteral("piste4ferme"));
        piste4ferme->setGeometry(QRect(95, 138, 91, 34));
        piste4ferme->setFont(font2);
        piste4ferme->setAutoExclusive(false);
        piste6ouvert = new QRadioButton(Pistes);
        piste6ouvert->setObjectName(QStringLiteral("piste6ouvert"));
        piste6ouvert->setGeometry(QRect(610, 110, 91, 34));
        piste6ouvert->setFont(font2);
        piste6ouvert->setAutoExclusive(false);
        groupBox_2 = new QGroupBox(Etats);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(120, 350, 721, 141));
        teles1txt = new QLabel(groupBox_2);
        teles1txt->setObjectName(QStringLiteral("teles1txt"));
        teles1txt->setGeometry(QRect(133, 50, 131, 34));
        teles1txt->setFont(font3);
        teles1ouvert = new QRadioButton(groupBox_2);
        teles1ouvert->setObjectName(QStringLiteral("teles1ouvert"));
        teles1ouvert->setGeometry(QRect(250, 52, 91, 34));
        teles1ouvert->setFont(font2);
        teles1ouvert->setCheckable(false);
        teles1ouvert->setAutoExclusive(false);
        teles2ferme = new QRadioButton(groupBox_2);
        teles2ferme->setObjectName(QStringLiteral("teles2ferme"));
        teles2ferme->setGeometry(QRect(530, 80, 91, 34));
        teles2ferme->setFont(font2);
        teles2ferme->setCheckable(false);
        teles2ferme->setAutoExclusive(false);
        teles2txt = new QLabel(groupBox_2);
        teles2txt->setObjectName(QStringLiteral("teles2txt"));
        teles2txt->setGeometry(QRect(413, 50, 121, 34));
        teles2txt->setFont(font3);
        teles2ouvert = new QRadioButton(groupBox_2);
        teles2ouvert->setObjectName(QStringLiteral("teles2ouvert"));
        teles2ouvert->setGeometry(QRect(530, 52, 91, 34));
        teles2ouvert->setFont(font2);
        teles2ouvert->setCheckable(false);
        teles2ouvert->setAutoExclusive(false);
        teles1ferme = new QRadioButton(groupBox_2);
        teles1ferme->setObjectName(QStringLiteral("teles1ferme"));
        teles1ferme->setGeometry(QRect(250, 80, 91, 34));
        teles1ferme->setFont(font2);
        teles1ferme->setCheckable(false);
        teles1ferme->setAutoExclusive(false);
        AnnulerP = new QPushButton(Etats);
        AnnulerP->setObjectName(QStringLiteral("AnnulerP"));
        AnnulerP->setGeometry(QRect(620, 510, 100, 30));
        ConfirmerP = new QPushButton(Etats);
        ConfirmerP->setObjectName(QStringLiteral("ConfirmerP"));
        ConfirmerP->setGeometry(QRect(740, 510, 100, 30));
        tabWidget->addTab(Etats, QString());
        Pistes->raise();
        heureTxt->raise();
        groupBox_2->raise();
        AnnulerP->raise();
        ConfirmerP->raise();
        Message = new QWidget();
        Message->setObjectName(QStringLiteral("Message"));
        Messages = new QGroupBox(Message);
        Messages->setObjectName(QStringLiteral("Messages"));
        Messages->setGeometry(QRect(170, 140, 651, 401));
        message10Edit = new QLineEdit(Messages);
        message10Edit->setObjectName(QStringLiteral("message10Edit"));
        message10Edit->setGeometry(QRect(200, 360, 400, 25));
        message9Edit = new QLineEdit(Messages);
        message9Edit->setObjectName(QStringLiteral("message9Edit"));
        message9Edit->setGeometry(QRect(200, 325, 400, 25));
        message8Edit = new QLineEdit(Messages);
        message8Edit->setObjectName(QStringLiteral("message8Edit"));
        message8Edit->setGeometry(QRect(200, 290, 400, 25));
        message2Edit = new QLineEdit(Messages);
        message2Edit->setObjectName(QStringLiteral("message2Edit"));
        message2Edit->setGeometry(QRect(200, 80, 400, 25));
        message1Edit = new QLineEdit(Messages);
        message1Edit->setObjectName(QStringLiteral("message1Edit"));
        message1Edit->setGeometry(QRect(200, 45, 400, 25));
        message7Edit = new QLineEdit(Messages);
        message7Edit->setObjectName(QStringLiteral("message7Edit"));
        message7Edit->setGeometry(QRect(200, 255, 400, 25));
        message3Edit = new QLineEdit(Messages);
        message3Edit->setObjectName(QStringLiteral("message3Edit"));
        message3Edit->setGeometry(QRect(200, 115, 400, 25));
        message4Edit = new QLineEdit(Messages);
        message4Edit->setObjectName(QStringLiteral("message4Edit"));
        message4Edit->setGeometry(QRect(200, 150, 400, 25));
        message5Edit = new QLineEdit(Messages);
        message5Edit->setObjectName(QStringLiteral("message5Edit"));
        message5Edit->setGeometry(QRect(200, 185, 400, 25));
        messagetxt = new QLabel(Messages);
        messagetxt->setObjectName(QStringLiteral("messagetxt"));
        messagetxt->setGeometry(QRect(30, 40, 161, 31));
        QFont font4;
        font4.setPointSize(15);
        messagetxt->setFont(font4);
        message6Edit = new QLineEdit(Messages);
        message6Edit->setObjectName(QStringLiteral("message6Edit"));
        message6Edit->setGeometry(QRect(200, 220, 400, 25));
        AnnulerM = new QPushButton(Message);
        AnnulerM->setObjectName(QStringLiteral("AnnulerM"));
        AnnulerM->setGeometry(QRect(600, 560, 100, 30));
        ConfirmerM = new QPushButton(Message);
        ConfirmerM->setObjectName(QStringLiteral("ConfirmerM"));
        ConfirmerM->setGeometry(QRect(720, 560, 100, 30));
        tabWidget->addTab(Message, QString());
        titretxt = new QLabel(centralWidget);
        titretxt->setObjectName(QStringLiteral("titretxt"));
        titretxt->setGeometry(QRect(270, 80, 551, 61));
        QFont font5;
        font5.setPointSize(36);
        font5.setItalic(false);
        titretxt->setFont(font5);
        tempTxt = new QLabel(centralWidget);
        tempTxt->setObjectName(QStringLiteral("tempTxt"));
        tempTxt->setGeometry(QRect(910, 140, 61, 31));
        QFont font6;
        font6.setFamily(QStringLiteral("Digital dream"));
        font6.setPointSize(18);
        font6.setBold(false);
        font6.setWeight(50);
        tempTxt->setFont(font6);
        heureEdit = new QTimeEdit(centralWidget);
        heureEdit->setObjectName(QStringLiteral("heureEdit"));
        heureEdit->setGeometry(QRect(830, 100, 131, 31));
        QFont font7;
        font7.setPointSize(12);
        font7.setBold(true);
        font7.setWeight(75);
        heureEdit->setFont(font7);
        heureEdit->setWrapping(false);
        heureEdit->setFrame(false);
        heureEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        heureEdit->setReadOnly(false);
        heureEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);
        tempLCD = new QLCDNumber(centralWidget);
        tempLCD->setObjectName(QStringLiteral("tempLCD"));
        tempLCD->setGeometry(QRect(820, 140, 71, 31));
        tempLCD->setFrameShape(QFrame::NoFrame);
        tempLCD->setFrameShadow(QFrame::Sunken);
        tempLCD->setSegmentStyle(QLCDNumber::Flat);
        aideTxt = new QLabel(centralWidget);
        aideTxt->setObjectName(QStringLiteral("aideTxt"));
        aideTxt->setGeometry(QRect(910, 600, 51, 31));
        QFont font8;
        font8.setPointSize(11);
        font8.setBold(true);
        font8.setWeight(75);
        aideTxt->setFont(font8);
        aideTxt->setTextFormat(Qt::AutoText);
        MainView->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainView);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainView->setStatusBar(statusBar);

        retranslateUi(MainView);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainView);
    } // setupUi

    void retranslateUi(QMainWindow *MainView)
    {
        MainView->setWindowTitle(QApplication::translate("MainView", "MainView", nullptr));
        heureTxt->setText(QString());
        Pistes->setTitle(QApplication::translate("MainView", "Pistes", nullptr));
        piste3ferme->setText(QApplication::translate("MainView", "Ferm\303\251e", nullptr));
        piste5ferme->setText(QApplication::translate("MainView", "Ferm\303\251e", nullptr));
        piste3ouvert->setText(QApplication::translate("MainView", "Ouverte", nullptr));
        piste5txt->setText(QApplication::translate("MainView", "Piste 5 :", nullptr));
        piste4txt->setText(QApplication::translate("MainView", "Piste 4 :", nullptr));
        piste3txt->setText(QApplication::translate("MainView", "Piste 3 :", nullptr));
        piste1ouvert->setText(QApplication::translate("MainView", "Ouverte", nullptr));
        piste6ferme->setText(QApplication::translate("MainView", "Ferm\303\251e", nullptr));
        piste2txt->setText(QApplication::translate("MainView", "Piste 2 :", nullptr));
        piste5ouvert->setText(QApplication::translate("MainView", "Ouverte", nullptr));
        piste1ferme->setText(QApplication::translate("MainView", "Ferm\303\251e", nullptr));
        piste2ferme->setText(QApplication::translate("MainView", "Ferm\303\251e", nullptr));
        piste4ouvert->setText(QApplication::translate("MainView", "Ouverte", nullptr));
        piste6txt->setText(QApplication::translate("MainView", "Piste 6 :", nullptr));
        piste1txt->setText(QApplication::translate("MainView", "Piste 1 :", nullptr));
        piste2ouvert->setText(QApplication::translate("MainView", "Ouverte", nullptr));
        piste4ferme->setText(QApplication::translate("MainView", "Ferm\303\251e", nullptr));
        piste6ouvert->setText(QApplication::translate("MainView", "Ouverte", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainView", "T\303\251l\303\251sieges", nullptr));
        teles1txt->setText(QApplication::translate("MainView", "T\303\251l\303\251si\303\250ge 1 :", nullptr));
        teles1ouvert->setText(QApplication::translate("MainView", "Ouvert", nullptr));
        teles2ferme->setText(QApplication::translate("MainView", "Ferm\303\251", nullptr));
        teles2txt->setText(QApplication::translate("MainView", "T\303\251l\303\251si\303\250ge 2 :", nullptr));
        teles2ouvert->setText(QApplication::translate("MainView", "Ouvert", nullptr));
        teles1ferme->setText(QApplication::translate("MainView", "Ferm\303\251", nullptr));
        AnnulerP->setText(QApplication::translate("MainView", "Annuler", nullptr));
        ConfirmerP->setText(QApplication::translate("MainView", "Confirmer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Etats), QApplication::translate("MainView", "Etat station", nullptr));
        Messages->setTitle(QApplication::translate("MainView", "Messages", nullptr));
        messagetxt->setText(QApplication::translate("MainView", "Message actuel :", nullptr));
        AnnulerM->setText(QApplication::translate("MainView", "Annuler", nullptr));
        ConfirmerM->setText(QApplication::translate("MainView", "Confirmer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Message), QApplication::translate("MainView", "  Message  ", nullptr));
        titretxt->setText(QApplication::translate("MainView", "Gestion de la station", nullptr));
        tempTxt->setText(QApplication::translate("MainView", "\302\260 C", nullptr));
        heureEdit->setDisplayFormat(QApplication::translate("MainView", "HH:mm:ss", nullptr));
        aideTxt->setText(QApplication::translate("MainView", "Aide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainView: public Ui_MainView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINVIEW_H
