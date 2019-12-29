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
        QPalette palette;
        QBrush brush(QColor(46, 47, 48, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(237, 212, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        Etats->setPalette(palette);
        QFont font;
        font.setItalic(false);
        Etats->setFont(font);
        teles1ouvert = new QRadioButton(Etats);
        teles1ouvert->setObjectName(QStringLiteral("teles1ouvert"));
        teles1ouvert->setGeometry(QRect(340, 422, 91, 34));
        QFont font1;
        font1.setPointSize(12);
        font1.setItalic(false);
        teles1ouvert->setFont(font1);
        teles1ouvert->setCheckable(false);
        teles1ouvert->setAutoExclusive(false);
        teles2ouvert = new QRadioButton(Etats);
        teles2ouvert->setObjectName(QStringLiteral("teles2ouvert"));
        teles2ouvert->setGeometry(QRect(620, 422, 91, 34));
        teles2ouvert->setFont(font1);
        teles2ouvert->setCheckable(false);
        teles2ouvert->setAutoExclusive(false);
        piste2ferme = new QRadioButton(Etats);
        piste2ferme->setObjectName(QStringLiteral("piste2ferme"));
        piste2ferme->setGeometry(QRect(455, 228, 91, 34));
        piste2ferme->setFont(font1);
        piste2ferme->setAutoExclusive(false);
        piste3txt = new QLabel(Etats);
        piste3txt->setObjectName(QStringLiteral("piste3txt"));
        piste3txt->setGeometry(QRect(635, 198, 75, 34));
        QFont font2;
        font2.setPointSize(15);
        font2.setItalic(false);
        piste3txt->setFont(font2);
        piste1ouvert = new QRadioButton(Etats);
        piste1ouvert->setObjectName(QStringLiteral("piste1ouvert"));
        piste1ouvert->setGeometry(QRect(195, 200, 91, 34));
        piste1ouvert->setFont(font1);
        piste1ouvert->setAutoExclusive(false);
        piste1txt = new QLabel(Etats);
        piste1txt->setObjectName(QStringLiteral("piste1txt"));
        piste1txt->setGeometry(QRect(120, 198, 75, 34));
        piste1txt->setFont(font2);
        piste5ouvert = new QRadioButton(Etats);
        piste5ouvert->setObjectName(QStringLiteral("piste5ouvert"));
        piste5ouvert->setGeometry(QRect(455, 280, 91, 34));
        piste5ouvert->setFont(font1);
        piste5ouvert->setAutoExclusive(false);
        piste4txt = new QLabel(Etats);
        piste4txt->setObjectName(QStringLiteral("piste4txt"));
        piste4txt->setGeometry(QRect(120, 278, 75, 34));
        piste4txt->setFont(font2);
        piste3ferme = new QRadioButton(Etats);
        piste3ferme->setObjectName(QStringLiteral("piste3ferme"));
        piste3ferme->setGeometry(QRect(710, 228, 91, 34));
        piste3ferme->setFont(font1);
        piste3ferme->setAutoExclusive(false);
        piste4ferme = new QRadioButton(Etats);
        piste4ferme->setObjectName(QStringLiteral("piste4ferme"));
        piste4ferme->setGeometry(QRect(195, 308, 91, 34));
        piste4ferme->setFont(font1);
        piste4ferme->setAutoExclusive(false);
        piste6ferme = new QRadioButton(Etats);
        piste6ferme->setObjectName(QStringLiteral("piste6ferme"));
        piste6ferme->setGeometry(QRect(710, 308, 91, 34));
        piste6ferme->setFont(font1);
        piste6ferme->setAutoExclusive(false);
        teles1ferme = new QRadioButton(Etats);
        teles1ferme->setObjectName(QStringLiteral("teles1ferme"));
        teles1ferme->setGeometry(QRect(340, 450, 91, 34));
        teles1ferme->setFont(font1);
        teles1ferme->setCheckable(false);
        teles1ferme->setAutoExclusive(false);
        piste5ferme = new QRadioButton(Etats);
        piste5ferme->setObjectName(QStringLiteral("piste5ferme"));
        piste5ferme->setGeometry(QRect(455, 308, 91, 34));
        piste5ferme->setFont(font1);
        piste5ferme->setAutoExclusive(false);
        teles2ferme = new QRadioButton(Etats);
        teles2ferme->setObjectName(QStringLiteral("teles2ferme"));
        teles2ferme->setGeometry(QRect(620, 450, 91, 34));
        teles2ferme->setFont(font1);
        teles2ferme->setCheckable(false);
        teles2ferme->setAutoExclusive(false);
        piste6ouvert = new QRadioButton(Etats);
        piste6ouvert->setObjectName(QStringLiteral("piste6ouvert"));
        piste6ouvert->setGeometry(QRect(710, 280, 91, 34));
        piste6ouvert->setFont(font1);
        piste6ouvert->setAutoExclusive(false);
        teles1txt = new QLabel(Etats);
        teles1txt->setObjectName(QStringLiteral("teles1txt"));
        teles1txt->setGeometry(QRect(223, 420, 131, 34));
        teles1txt->setFont(font2);
        piste2ouvert = new QRadioButton(Etats);
        piste2ouvert->setObjectName(QStringLiteral("piste2ouvert"));
        piste2ouvert->setGeometry(QRect(455, 200, 91, 34));
        piste2ouvert->setFont(font1);
        piste2ouvert->setAutoExclusive(false);
        heureTxt = new QLabel(Etats);
        heureTxt->setObjectName(QStringLiteral("heureTxt"));
        heureTxt->setGeometry(QRect(900, 120, 121, 41));
        QFont font3;
        font3.setFamily(QStringLiteral("Carlito"));
        font3.setPointSize(18);
        font3.setItalic(false);
        heureTxt->setFont(font3);
        piste3ouvert = new QRadioButton(Etats);
        piste3ouvert->setObjectName(QStringLiteral("piste3ouvert"));
        piste3ouvert->setGeometry(QRect(710, 200, 91, 34));
        piste3ouvert->setFont(font1);
        piste3ouvert->setAutoExclusive(false);
        piste5txt = new QLabel(Etats);
        piste5txt->setObjectName(QStringLiteral("piste5txt"));
        piste5txt->setGeometry(QRect(380, 278, 75, 34));
        piste5txt->setFont(font2);
        piste2txt = new QLabel(Etats);
        piste2txt->setObjectName(QStringLiteral("piste2txt"));
        piste2txt->setGeometry(QRect(380, 198, 75, 34));
        piste2txt->setFont(font2);
        teles2txt = new QLabel(Etats);
        teles2txt->setObjectName(QStringLiteral("teles2txt"));
        teles2txt->setGeometry(QRect(503, 420, 121, 34));
        teles2txt->setFont(font2);
        piste6txt = new QLabel(Etats);
        piste6txt->setObjectName(QStringLiteral("piste6txt"));
        piste6txt->setGeometry(QRect(635, 278, 75, 34));
        piste6txt->setFont(font2);
        piste1ferme = new QRadioButton(Etats);
        piste1ferme->setObjectName(QStringLiteral("piste1ferme"));
        piste1ferme->setGeometry(QRect(195, 228, 91, 34));
        piste1ferme->setFont(font1);
        piste1ferme->setAutoExclusive(false);
        piste4ouvert = new QRadioButton(Etats);
        piste4ouvert->setObjectName(QStringLiteral("piste4ouvert"));
        piste4ouvert->setGeometry(QRect(195, 280, 91, 34));
        piste4ouvert->setFont(font1);
        piste4ouvert->setAutoExclusive(false);
        tabWidget->addTab(Etats, QString());
        Message = new QWidget();
        Message->setObjectName(QStringLiteral("Message"));
        message8Edit = new QLineEdit(Message);
        message8Edit->setObjectName(QStringLiteral("message8Edit"));
        message8Edit->setGeometry(QRect(340, 435, 400, 25));
        Confirmer = new QPushButton(Message);
        Confirmer->setObjectName(QStringLiteral("Confirmer"));
        Confirmer->setGeometry(QRect(640, 545, 100, 30));
        message6Edit = new QLineEdit(Message);
        message6Edit->setObjectName(QStringLiteral("message6Edit"));
        message6Edit->setGeometry(QRect(340, 365, 400, 25));
        message4Edit = new QLineEdit(Message);
        message4Edit->setObjectName(QStringLiteral("message4Edit"));
        message4Edit->setGeometry(QRect(340, 295, 400, 25));
        Annuler = new QPushButton(Message);
        Annuler->setObjectName(QStringLiteral("Annuler"));
        Annuler->setGeometry(QRect(520, 545, 100, 30));
        message1Edit = new QLineEdit(Message);
        message1Edit->setObjectName(QStringLiteral("message1Edit"));
        message1Edit->setGeometry(QRect(340, 190, 400, 25));
        message7Edit = new QLineEdit(Message);
        message7Edit->setObjectName(QStringLiteral("message7Edit"));
        message7Edit->setGeometry(QRect(340, 400, 400, 25));
        message5Edit = new QLineEdit(Message);
        message5Edit->setObjectName(QStringLiteral("message5Edit"));
        message5Edit->setGeometry(QRect(340, 330, 400, 25));
        message10Edit = new QLineEdit(Message);
        message10Edit->setObjectName(QStringLiteral("message10Edit"));
        message10Edit->setGeometry(QRect(340, 505, 400, 25));
        messagetxt = new QLabel(Message);
        messagetxt->setObjectName(QStringLiteral("messagetxt"));
        messagetxt->setGeometry(QRect(170, 185, 161, 31));
        QFont font4;
        font4.setPointSize(15);
        messagetxt->setFont(font4);
        message2Edit = new QLineEdit(Message);
        message2Edit->setObjectName(QStringLiteral("message2Edit"));
        message2Edit->setGeometry(QRect(340, 225, 400, 25));
        message3Edit = new QLineEdit(Message);
        message3Edit->setObjectName(QStringLiteral("message3Edit"));
        message3Edit->setGeometry(QRect(340, 260, 400, 25));
        message9Edit = new QLineEdit(Message);
        message9Edit->setObjectName(QStringLiteral("message9Edit"));
        message9Edit->setGeometry(QRect(340, 470, 400, 25));
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
        MainView->setWindowTitle(QApplication::translate("MainView", "MainView", Q_NULLPTR));
        teles1ouvert->setText(QApplication::translate("MainView", "Ouvert", Q_NULLPTR));
        teles2ouvert->setText(QApplication::translate("MainView", "Ouvert", Q_NULLPTR));
        piste2ferme->setText(QApplication::translate("MainView", "Ferm\303\251e", Q_NULLPTR));
        piste3txt->setText(QApplication::translate("MainView", "Piste 3 :", Q_NULLPTR));
        piste1ouvert->setText(QApplication::translate("MainView", "Ouverte", Q_NULLPTR));
        piste1txt->setText(QApplication::translate("MainView", "Piste 1 :", Q_NULLPTR));
        piste5ouvert->setText(QApplication::translate("MainView", "Ouverte", Q_NULLPTR));
        piste4txt->setText(QApplication::translate("MainView", "Piste 4 :", Q_NULLPTR));
        piste3ferme->setText(QApplication::translate("MainView", "Ferm\303\251e", Q_NULLPTR));
        piste4ferme->setText(QApplication::translate("MainView", "Ferm\303\251e", Q_NULLPTR));
        piste6ferme->setText(QApplication::translate("MainView", "Ferm\303\251e", Q_NULLPTR));
        teles1ferme->setText(QApplication::translate("MainView", "Ferm\303\251", Q_NULLPTR));
        piste5ferme->setText(QApplication::translate("MainView", "Ferm\303\251e", Q_NULLPTR));
        teles2ferme->setText(QApplication::translate("MainView", "Ferm\303\251", Q_NULLPTR));
        piste6ouvert->setText(QApplication::translate("MainView", "Ouverte", Q_NULLPTR));
        teles1txt->setText(QApplication::translate("MainView", "T\303\251l\303\251si\303\250ge 1 :", Q_NULLPTR));
        piste2ouvert->setText(QApplication::translate("MainView", "Ouverte", Q_NULLPTR));
        heureTxt->setText(QString());
        piste3ouvert->setText(QApplication::translate("MainView", "Ouverte", Q_NULLPTR));
        piste5txt->setText(QApplication::translate("MainView", "Piste 5 :", Q_NULLPTR));
        piste2txt->setText(QApplication::translate("MainView", "Piste 2 :", Q_NULLPTR));
        teles2txt->setText(QApplication::translate("MainView", "T\303\251l\303\251si\303\250ge 2 :", Q_NULLPTR));
        piste6txt->setText(QApplication::translate("MainView", "Piste 6 :", Q_NULLPTR));
        piste1ferme->setText(QApplication::translate("MainView", "Ferm\303\251e", Q_NULLPTR));
        piste4ouvert->setText(QApplication::translate("MainView", "Ouverte", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Etats), QApplication::translate("MainView", "Etat station", Q_NULLPTR));
        Confirmer->setText(QApplication::translate("MainView", "Confirmer", Q_NULLPTR));
        Annuler->setText(QApplication::translate("MainView", "Annuler", Q_NULLPTR));
        messagetxt->setText(QApplication::translate("MainView", "Message actuel :", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Message), QApplication::translate("MainView", "  Message  ", Q_NULLPTR));
        titretxt->setText(QApplication::translate("MainView", "Gestion de la station", Q_NULLPTR));
        tempTxt->setText(QApplication::translate("MainView", "\302\260 C", Q_NULLPTR));
        heureEdit->setDisplayFormat(QApplication::translate("MainView", "HH:mm:ss", Q_NULLPTR));
        aideTxt->setText(QApplication::translate("MainView", "Aide", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainView: public Ui_MainView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINVIEW_H
