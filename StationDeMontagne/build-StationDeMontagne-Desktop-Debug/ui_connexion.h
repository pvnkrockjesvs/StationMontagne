/********************************************************************************
** Form generated from reading UI file 'connexion.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNEXION_H
#define UI_CONNEXION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Connexion
{
public:
    QWidget *centralwidget;
    QLabel *passtxt;
    QLabel *titretxt;
    QLineEdit *loginEdit;
    QLineEdit *passEdit;
    QPushButton *loginBtn;
    QLabel *logintxt;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Connexion)
    {
        if (Connexion->objectName().isEmpty())
            Connexion->setObjectName(QString::fromUtf8("Connexion"));
        Connexion->resize(1010, 670);
        centralwidget = new QWidget(Connexion);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        passtxt = new QLabel(centralwidget);
        passtxt->setObjectName(QString::fromUtf8("passtxt"));
        passtxt->setGeometry(QRect(230, 350, 120, 34));
        QFont font;
        font.setPointSize(18);
        passtxt->setFont(font);
        titretxt = new QLabel(centralwidget);
        titretxt->setObjectName(QString::fromUtf8("titretxt"));
        titretxt->setGeometry(QRect(300, 10, 551, 61));
        QFont font1;
        font1.setPointSize(36);
        titretxt->setFont(font1);
        loginEdit = new QLineEdit(centralwidget);
        loginEdit->setObjectName(QString::fromUtf8("loginEdit"));
        loginEdit->setGeometry(QRect(430, 280, 351, 31));
        passEdit = new QLineEdit(centralwidget);
        passEdit->setObjectName(QString::fromUtf8("passEdit"));
        passEdit->setGeometry(QRect(430, 350, 351, 31));
        loginBtn = new QPushButton(centralwidget);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));
        loginBtn->setGeometry(QRect(620, 430, 161, 41));
        loginBtn->setAutoDefault(true);
        logintxt = new QLabel(centralwidget);
        logintxt->setObjectName(QString::fromUtf8("logintxt"));
        logintxt->setGeometry(QRect(230, 280, 120, 34));
        logintxt->setFont(font);
        Connexion->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Connexion);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Connexion->setStatusBar(statusbar);

        retranslateUi(Connexion);

        loginBtn->setDefault(true);


        QMetaObject::connectSlotsByName(Connexion);
    } // setupUi

    void retranslateUi(QMainWindow *Connexion)
    {
        Connexion->setWindowTitle(QCoreApplication::translate("Connexion", "MainWindow", nullptr));
        passtxt->setText(QCoreApplication::translate("Connexion", "Password", nullptr));
        titretxt->setText(QCoreApplication::translate("Connexion", "Gestion de la station", nullptr));
        loginBtn->setText(QCoreApplication::translate("Connexion", "Connexion", nullptr));
        logintxt->setText(QCoreApplication::translate("Connexion", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Connexion: public Ui_Connexion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNEXION_H
