#include <QMainWindow>

namespace Ui {
class MainView;
}

class MainView : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainView(QWidget *parent = nullptr);
    ~MainView();
    bool etatPiste1;
    bool etatPiste2;
    bool etatPiste3;
    bool etatPiste4;
    bool etatPiste5;
    bool etatPiste6;

    bool etatTelesiege1;
    bool etatTelesiege2;

    QString Temp;

    QString message[10];

private slots:
    void on_piste1ouvert_clicked();
    void on_piste1ferme_clicked();
    void on_piste2ouvert_clicked();
    void on_piste2ferme_clicked();
    void on_piste3ouvert_clicked();
    void on_piste3ferme_clicked();
    void on_piste4ouvert_clicked();
    void on_piste4ferme_clicked();
    void on_piste5ouvert_clicked();
    void on_piste5ferme_clicked();
    void on_piste6ouvert_clicked();
    void on_piste6ferme_clicked();
    void on_teles1ouvert_clicked();
    void on_teles1ferme_clicked();
    void on_teles2ouvert_clicked();
    void on_teles2ferme_clicked();

    void on_message1Edit_textChanged();
    void on_message2Edit_textChanged();
    void on_message3Edit_textChanged();
    void on_message4Edit_textChanged();
    void on_message5Edit_textChanged();
    void on_message6Edit_textChanged();
    void on_message7Edit_textChanged();
    void on_message8Edit_textChanged();
    void on_message9Edit_textChanged();
    void on_message10Edit_textChanged();

    void on_Confirmer_clicked();

signals:
    void sigChangement();

private:
    // void Modification();
    Ui::MainView *ui;

};
