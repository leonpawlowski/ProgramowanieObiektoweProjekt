#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_cyfr_0_clicked();
    void on_cyfr_1_clicked();
    void on_cyfr_2_clicked();
    void on_cyfr_3_clicked();
    void on_cyfr_4_clicked();
    void on_cyfr_5_clicked();
    void on_cyfr_6_clicked();
    void on_cyfr_7_clicked();
    void on_cyfr_8_clicked();
    void on_cyfr_9_clicked();
    void on_przecinek_clicked();
    void on_backSpace_clicked();
    void on_czyszczenieWyswietlacza_clicked();
    void on_pamiecDoRownania_clicked();
    void on_czyszczeniePamieci_clicked();
    void on_pamiecDoKonwertowania_clicked();
    void on_dodajDoPamieci_clicked();

    void obslugaLogiki(QString operacja);
    void operacjaMatematycznaKliknieta(QString tekst);

    void on_dodawanie_clicked();
    void on_odejmowanie_clicked();
    void on_dzielenie_clicked();
    void on_mnozenie_clicked();
    void on_resztaZDzielenia_clicked();
    void on_rownaSie_clicked();
    void on_ujemnaLiczba_clicked();

    void liczbaWSystemieod2do9(int podstawa,const QString &arg1);
    void on_liczbaWSystemie10_textEdited(const QString &arg1);
    void on_liczbaWSystemie2_textEdited(const QString &arg1);
    void on_liczbaWSystemie3_textEdited(const QString &arg1);
    void on_liczbaWSystemie4_textEdited(const QString &arg1);
    void on_liczbaWSystemie5_textEdited(const QString &arg1);
    void on_liczbaWSystemie6_textEdited(const QString &arg1);
    void on_liczbaWSystemie7_textEdited(const QString &arg1);
    void on_liczbaWSystemie8_textEdited(const QString &arg1);
    void on_liczbaWSystemie9_textEdited(const QString &arg1);

    void on_actionO_autorze_triggered();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
