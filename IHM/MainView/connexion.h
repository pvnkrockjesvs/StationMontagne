#include <QMainWindow>
#include "mainview.h"


namespace Ui {
class Connexion;
}

class Connexion : public QMainWindow
{
    Q_OBJECT

public:
    explicit Connexion(QWidget *parent = nullptr);
    ~Connexion();


private slots:
    void on_loginBtn_clicked();
    void on_passEdit_textEdited();

private:
    Ui::Connexion *ui;
    QString pass , user;
    MainView *page;
};
