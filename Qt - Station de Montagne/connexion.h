#include <QMainWindow>

namespace Ui {
class Connexion;
}

class Connexion : public QMainWindow
{
    Q_OBJECT

public:
    explicit Connexion(QWidget *parent = nullptr);
    ~Connexion();
    Ui::Connexion *ui;

private slots:
//    void on_loginBtn_clicked();
    void on_passEdit_textEdited();

private:

    QString pass , user;
};
