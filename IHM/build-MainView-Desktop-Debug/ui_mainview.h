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
    QRadioButton *teles1ouvert;
    QRadioButton *teles2ouvert;
    QRadioButton *piste2ferme;
    QLabel *piste3txt;
    QRadioButton *piste1ouvert;
    QLabel *piste1txt;
    QRadioButton *piste5ouvert;
    QLabel *piste4txt;
    QRadioButton *piste3ferme;
    QRadioButton *piste4ferme;
    QRadioButton *piste6ferme;
    QRadioButton *teles1ferme;
    QRadioButton *piste5ferme;
    QRadioButton *teles2ferme;
    QRadioButton *piste6ouvert;
    QLabel *teles1txt;
    QRadioButton *piste2ouvert;
    QLabel *heureTxt;
    QRadioButton *piste3ouvert;
    QLabel *piste5txt;
    QLabel *piste2txt;
    QLabel *teles2txt;
    QLabel *piste6txt;
    QRadioButton *piste1ferme;
    QRadioButton *piste4ouvert;
    QWidget *Message;
    QLineEdit *message8Edit;
    QPushButton *Confirmer;
    QLineEdit *message6Edit;
    QLineEdit *message4Edit;
    QPushButton *Annuler;
    QLineEdit *message1Edit;
    QLineEdit *message7Edit;
    QLineEdit *message5Edit;
    QLineEdit *message10Edit;
    QLabel *messagetxt;
    QLineEdit *message2Edit;
    QLineEdit *message3Edit;
    QLineEdit *message9Edit;
    QLabel *titretxt;
    QLabel *tempTxt;
    QTimeEdit *heureEdit;
    QLCDNumber *tempLCD;
    QLabel *aideTxt;
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
        teles1ouvert = new QRadioButton(Etats);
        teles1ouvert->setObjectName(QString::fromUtf8("teles1ouvert"));
        teles1ouvert->setGeometry(QRect(340, 422, 91, 34));
        QFont font1;
        font1.setPointSize(12);
        font1.setItalic(false);
        teles1ouvert->setFont(font1);
        teles1ouvert->setCheckable(false);
        teles1ouvert->setAutoExclusive(false);
        teles2ouvert = new QRadioButton(Etats);
        teles2ouvert->setObjectName(QString::fromUtf8("teles2ouvert"));
        teles2ouvert->setGeometry(QRect(620, 422, 91, 34));
        teles2ouvert->setFont(font1);
        teles2ouvert->setCheckable(false);
        teles2ouvert->setAutoExclusive(false);
        piste2ferme = new QRadioButton(Etats);
        piste2ferme->setObjectName(QString::fromUtf8("piste2ferme"));
        piste2ferme->setGeometry(QRect(455, 228, 91, 34));
        piste2ferme->setFont(font1);
        piste2ferme->setAutoExclusive(false);
        piste3txt = new QLabel(Etats);
        piste3txt->setObjectName(QString::fromUtf8("piste3txt"));
        piste3txt->setGeometry(QRect(635, 198, 75, 34));
        QFont font2;
        font2.setPointSize(15);
        font2.setItalic(false);
        piste3txt->setFont(font2);
        piste1ouvert = new QRadioButton(Etats);
        piste1ouvert->setObjectName(QString::fromUtf8("piste1ouvert"));
        piste1ouvert->setGeometry(QRect(195, 200, 91, 34));
        piste1ouvert->setFont(font1);
        piste1ouvert->setAutoExclusive(false);
        piste1txt = new QLabel(Etats);
        piste1txt->setObjectName(QString::fromUtf8("piste1txt"));
        piste1txt->setGeometry(QRect(120, 198, 75, 34));
        piste1txt->setFont(font2);
        piste5ouvert = new QRadioButton(Etats);
        piste5ouvert->setObjectName(QString::fromUtf8("piste5ouvert"));
        piste5ouvert->setGeometry(QRect(455, 280, 91, 34));
        piste5ouvert->setFont(font1);
        piste5ouvert->setAutoExclusive(false);
        piste4txt = new QLabel(Etats);
        piste4txt->setObjectName(QString::fromUtf8("piste4txt"));
        piste4txt->setGeometry(QRect(120, 278, 75, 34));
        piste4txt->setFont(font2);
        piste3ferme = new QRadioButton(Etats);
        piste3ferme->setObjectName(QString::fromUtf8("piste3ferme"));
        piste3ferme->setGeometry(QRect(710, 228, 91, 34));
        piste3ferme->setFont(font1);
        piste3ferme->setAutoExclusive(false);
        piste4ferme = new QRadioButton(Etats);
        piste4ferme->setObjectName(QString::fromUtf8("piste4ferme"));
        piste4ferme->setGeometry(QRect(195, 308, 91, 34));
        piste4ferme->setFont(font1);
        piste4ferme->setAutoExclusive(false);
        piste6ferme = new QRadioButton(Etats);
        piste6ferme->setObjectName(QString::fromUtf8("piste6ferme"));
        piste6ferme->setGeometry(QRect(710, 308, 91, 34));
        piste6ferme->setFont(font1);
        piste6ferme->setAutoExclusive(false);
        teles1ferme = new QRadioButton(Etats);
        teles1ferme->setObjectName(QString::fromUtf8("teles1ferme"));
        teles1ferme->setGeometry(QRect(340, 450, 91, 34));
        teles1ferme->setFont(font1);
        teles1ferme->setCheckable(false);
        teles1ferme->setAutoExclusive(false);
        piste5ferme = new QRadioButton(Etats);
        piste5ferme->setObjectName(QString::fromUtf8("piste5ferme"));
        piste5ferme->setGeometry(QRect(455, 308, 91, 34));
        piste5ferme->setFont(font1);
        piste5ferme->setAutoExclusive(false);
        teles2ferme = new QRadioButton(Etats);
        teles2ferme->setObjectName(QString::fromUtf8("teles2ferme"));
        teles2ferme->setGeometry(QRect(620, 450, 91, 34));
        teles2ferme->setFont(font1);
        teles2ferme->setCheckable(false);
        teles2ferme->setAutoExclusive(false);
        piste6ouvert = new QRadioButton(Etats);
        piste6ouvert->setObjectName(QString::fromUtf8("piste6ouvert"));
        piste6ouvert->setGeometry(QRect(710, 280, 91, 34));
        piste6ouvert->setFont(font1);
        piste6ouvert->setAutoExclusive(false);
        teles1txt = new QLabel(Etats);
        teles1txt->setObjectName(QString::fromUtf8("teles1txt"));
        teles1txt->setGeometry(QRect(223, 420, 131, 34));
        teles1txt->setFont(font2);
        piste2ouvert = new QRadioButton(Etats);
        piste2ouvert->setObjectName(QString::fromUtf8("piste2ouvert"));
        piste2ouvert->setGeometry(QRect(455, 200, 91, 34));
        piste2ouvert->setFont(font1);
        piste2ouvert->setAutoExclusive(false);
        heureTxt = new QLabel(Etats);
        heureTxt->setObjectName(QString::fromUtf8("heureTxt"));
        heureTxt->setGeometry(QRect(900, 120, 121, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Carlito"));
        font3.setPointSize(18);
        font3.setItalic(false);
        heureTxt->setFont(font3);
        piste3ouvert = new QRadioButton(Etats);
        piste3ouvert->setObjectName(QString::fromUtf8("piste3ouvert"));
        piste3ouvert->setGeometry(QRect(710, 200, 91, 34));
        piste3ouvert->setFont(font1);
        piste3ouvert->setAutoExclusive(false);
        piste5txt = new QLabel(Etats);
        piste5txt->setObjectName(QString::fromUtf8("piste5txt"));
        piste5txt->setGeometry(QRect(380, 278, 75, 34));
        piste5txt->setFont(font2);
        piste2txt = new QLabel(Etats);
        piste2txt->setObjectName(QString::fromUtf8("piste2txt"));
        piste2txt->setGeometry(QRect(380, 198, 75, 34));
        piste2txt->setFont(font2);
        teles2txt = new QLabel(Etats);
        teles2txt->setObjectName(QString::fromUtf8("teles2txt"));
        teles2txt->setGeometry(QRect(503, 420, 121, 34));
        teles2txt->setFont(font2);
        piste6txt = new QLabel(Etats);
        piste6txt->setObjectName(QString::fromUtf8("piste6txt"));
        piste6txt->setGeometry(QRect(635, 278, 75, 34));
        piste6txt->setFont(font2);
        piste1ferme = new QRadioButton(Etats);
        piste1ferme->setObjectName(QString::fromUtf8("piste1ferme"));
        piste1ferme->setGeometry(QRect(195, 228, 91, 34));
        piste1ferme->setFont(font1);
        piste1ferme->setAutoExclusive(false);
        piste4ouvert = new QRadioButton(Etats);
        piste4ouvert->setObjectName(QString::fromUtf8("piste4ouvert"));
        piste4ouvert->setGeometry(QRect(195, 280, 91, 34));
        piste4ouvert->setFont(font1);
        piste4ouvert->setAutoExclusive(false);
        tabWidget->addTab(Etats, QString());
        Message = new QWidget();
        Message->setObjectName(QString::fromUtf8("Message"));
        message8Edit = new QLineEdit(Message);
        message8Edit->setObjectName(QString::fromUtf8("message8Edit"));
        message8Edit->setGeometry(QRect(340, 435, 400, 25));
        Confirmer = new QPushButton(Message);
        Confirmer->setObjectName(QString::fromUtf8("Confirmer"));
        Confirmer->setGeometry(QRect(640, 545, 100, 30));
        message6Edit = new QLineEdit(Message);
        message6Edit->setObjectName(QString::fromUtf8("message6Edit"));
        message6Edit->setGeometry(QRect(340, 365, 400, 25));
        message4Edit = new QLineEdit(Message);
        message4Edit->setObjectName(QString::fromUtf8("message4Edit"));
        message4Edit->setGeometry(QRect(340, 295, 400, 25));
        Annuler = new QPushButton(Message);
        Annuler->setObjectName(QString::fromUtf8("Annuler"));
        Annuler->setGeometry(QRect(520, 545, 100, 30));
        message1Edit = new QLineEdit(Message);
        message1Edit->setObjectName(QString::fromUtf8("message1Edit"));
        message1Edit->setGeometry(QRect(340, 190, 400, 25));
        message7Edit = new QLineEdit(Message);
        message7Edit->setObjectName(QString::fromUtf8("message7Edit"));
        message7Edit->setGeometry(QRect(340, 400, 400, 25));
        message5Edit = new QLineEdit(Message);
        message5Edit->setObjectName(QString::fromUtf8("message5Edit"));
        message5Edit->setGeometry(QRect(340, 330, 400, 25));
        message10Edit = new QLineEdit(Message);
        message10Edit->setObjectName(QString::fromUtf8("message10Edit"));
        message10Edit->setGeometry(QRect(340, 505, 400, 25));
        messagetxt = new QLabel(Message);
        messagetxt->setObjectName(QString::fromUtf8("messagetxt"));
        messagetxt->setGeometry(QRect(170, 185, 161, 31));
        QFont font4;
        font4.setPointSize(15);
        messagetxt->setFont(font4);
        message2Edit = new QLineEdit(Message);
        message2Edit->setObjectName(QString::fromUtf8("message2Edit"));
        message2Edit->setGeometry(QRect(340, 225, 400, 25));
        message3Edit = new QLineEdit(Message);
        message3Edit->setObjectName(QString::fromUtf8("message3Edit"));
        message3Edit->setGeometry(QRect(340, 260, 400, 25));
        message9Edit = new QLineEdit(Message);
        message9Edit->setObjectName(QString::fromUtf8("message9Edit"));
        message9Edit->setGeometry(QRect(340, 470, 400, 25));
        tabWidget->addTab(Message, QString());
        titretxt = new QLabel(centralWidget);
        titretxt->setObjectName(QString::fromUtf8("titretxt"));
        titretxt->setGeometry(QRect(270, 80, 551, 61));
        QFont font5;
        font5.setPointSize(36);
        font5.setItalic(false);
        titretxt->setFont(font5);
        tempTxt = new QLabel(centralWidget);
        tempTxt->setObjectName(QString::fromUtf8("tempTxt"));
        tempTxt->setGeometry(QRect(910, 140, 61, 31));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Digital dream"));
        font6.setPointSize(18);
        font6.setBold(false);
        font6.setWeight(50);
        tempTxt->setFont(font6);
        heureEdit = new QTimeEdit(centralWidget);
        heureEdit->setObjectName(QString::fromUtf8("heureEdit"));
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
        tempLCD->setObjectName(QString::fromUtf8("tempLCD"));
        tempLCD->setGeometry(QRect(820, 140, 71, 31));
        tempLCD->setFrameShape(QFrame::NoFrame);
        tempLCD->setFrameShadow(QFrame::Sunken);
        tempLCD->setSegmentStyle(QLCDNumber::Flat);
        aideTxt = new QLabel(centralWidget);
        aideTxt->setObjectName(QString::fromUtf8("aideTxt"));
        aideTxt->setGeometry(QRect(910, 600, 51, 31));
        QFont font8;
        font8.setPointSize(11);
        font8.setBold(true);
        font8.setWeight(75);
        aideTxt->setFont(font8);
        aideTxt->setTextFormat(Qt::AutoText);
        MainView->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainView);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainView->setStatusBar(statusBar);

        retranslateUi(MainView);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainView);
    } // setupUi

    void retranslateUi(QMainWindow *MainView)
    {
        MainView->setWindowTitle(QCoreApplication::translate("MainView", "MainView", nullptr));
        teles1ouvert->setText(QCoreApplication::translate("MainView", "Ouvert", nullptr));
        teles2ouvert->setText(QCoreApplication::translate("MainView", "Ouvert", nullptr));
        piste2ferme->setText(QCoreApplication::translate("MainView", "Ferm\303\251e", nullptr));
        piste3txt->setText(QCoreApplication::translate("MainView", "Piste 3 :", nullptr));
        piste1ouvert->setText(QCoreApplication::translate("MainView", "Ouverte", nullptr));
        piste1txt->setText(QCoreApplication::translate("MainView", "Piste 1 :", nullptr));
        piste5ouvert->setText(QCoreApplication::translate("MainView", "Ouverte", nullptr));
        piste4txt->setText(QCoreApplication::translate("MainView", "Piste 4 :", nullptr));
        piste3ferme->setText(QCoreApplication::translate("MainView", "Ferm\303\251e", nullptr));
        piste4ferme->setText(QCoreApplication::translate("MainView", "Ferm\303\251e", nullptr));
        piste6ferme->setText(QCoreApplication::translate("MainView", "Ferm\303\251e", nullptr));
        teles1ferme->setText(QCoreApplication::translate("MainView", "Ferm\303\251", nullptr));
        piste5ferme->setText(QCoreApplication::translate("MainView", "Ferm\303\251e", nullptr));
        teles2ferme->setText(QCoreApplication::translate("MainView", "Ferm\303\251", nullptr));
        piste6ouvert->setText(QCoreApplication::translate("MainView", "Ouverte", nullptr));
        teles1txt->setText(QCoreApplication::translate("MainView", "T\303\251l\303\251si\303\250ge 1 :", nullptr));
        piste2ouvert->setText(QCoreApplication::translate("MainView", "Ouverte", nullptr));
        heureTxt->setText(QString());
        piste3ouvert->setText(QCoreApplication::translate("MainView", "Ouverte", nullptr));
        piste5txt->setText(QCoreApplication::translate("MainView", "Piste 5 :", nullptr));
        piste2txt->setText(QCoreApplication::translate("MainView", "Piste 2 :", nullptr));
        teles2txt->setText(QCoreApplication::translate("MainView", "T\303\251l\303\251si\303\250ge 2 :", nullptr));
        piste6txt->setText(QCoreApplication::translate("MainView", "Piste 6 :", nullptr));
        piste1ferme->setText(QCoreApplication::translate("MainView", "Ferm\303\251e", nullptr));
        piste4ouvert->setText(QCoreApplication::translate("MainView", "Ouverte", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Etats), QCoreApplication::translate("MainView", "Etat station", nullptr));
        Confirmer->setText(QCoreApplication::translate("MainView", "Confirmer", nullptr));
        Annuler->setText(QCoreApplication::translate("MainView", "Annuler", nullptr));
        messagetxt->setText(QCoreApplication::translate("MainView", "Message actuel :", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Message), QCoreApplication::translate("MainView", "  Message  ", nullptr));
        titretxt->setText(QCoreApplication::translate("MainView", "Gestion de la station", nullptr));
        tempTxt->setText(QCoreApplication::translate("MainView", "\302\260 C", nullptr));
        heureEdit->setDisplayFormat(QCoreApplication::translate("MainView", "HH:mm:ss", nullptr));
        aideTxt->setText(QCoreApplication::translate("MainView", "Aide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainView: public Ui_MainView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINVIEW_H
