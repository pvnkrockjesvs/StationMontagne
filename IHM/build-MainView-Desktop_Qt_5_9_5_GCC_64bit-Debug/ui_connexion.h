/********************************************************************************
** Form generated from reading UI file 'connexion.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNEXION_H
#define UI_CONNEXION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
            Connexion->setObjectName(QStringLiteral("Connexion"));
        Connexion->resize(1010, 670);
        centralwidget = new QWidget(Connexion);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        passtxt = new QLabel(centralwidget);
        passtxt->setObjectName(QStringLiteral("passtxt"));
        passtxt->setGeometry(QRect(210, 390, 120, 34));
        QFont font;
        font.setPointSize(18);
        passtxt->setFont(font);
        titretxt = new QLabel(centralwidget);
        titretxt->setObjectName(QStringLiteral("titretxt"));
        titretxt->setGeometry(QRect(230, 10, 551, 61));
        QFont font1;
        font1.setPointSize(36);
        titretxt->setFont(font1);
        loginEdit = new QLineEdit(centralwidget);
        loginEdit->setObjectName(QStringLiteral("loginEdit"));
        loginEdit->setGeometry(QRect(410, 330, 351, 31));
        passEdit = new QLineEdit(centralwidget);
        passEdit->setObjectName(QStringLiteral("passEdit"));
        passEdit->setGeometry(QRect(410, 390, 351, 31));
        loginBtn = new QPushButton(centralwidget);
        loginBtn->setObjectName(QStringLiteral("loginBtn"));
        loginBtn->setGeometry(QRect(600, 450, 161, 41));
        loginBtn->setAutoDefault(true);
        logintxt = new QLabel(centralwidget);
        logintxt->setObjectName(QStringLiteral("logintxt"));
        logintxt->setGeometry(QRect(210, 330, 120, 34));
        logintxt->setFont(font);
        Connexion->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Connexion);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Connexion->setStatusBar(statusbar);

        retranslateUi(Connexion);

        loginBtn->setDefault(true);


        QMetaObject::connectSlotsByName(Connexion);
    } // setupUi

    void retranslateUi(QMainWindow *Connexion)
    {
        Connexion->setWindowTitle(QApplication::translate("Connexion", "MainWindow", Q_NULLPTR));
        passtxt->setText(QApplication::translate("Connexion", "Password", Q_NULLPTR));
        titretxt->setText(QApplication::translate("Connexion", "Gestion de la station", Q_NULLPTR));
        loginBtn->setText(QApplication::translate("Connexion", "Connexion", Q_NULLPTR));
        logintxt->setText(QApplication::translate("Connexion", "Login", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Connexion: public Ui_Connexion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNEXION_H
