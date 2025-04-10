#ifndef KALKULATOR_H
#define KALKULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class kalkulator;
}
QT_END_NAMESPACE

class kalkulator
{
public:
    double mem;
    double a, b;
    QString liczba;
    QString obecnaOperacja="";
    void dodawanie();
    void odejmowanie();
    void dzielenie();
    void mnozenie();
    void resztaZDzielenia();
    void konwersjaSystemowLiczbowychZOd2Do9Do10(int podstawa, QString &liczba);
    QString konwersjaSystemowLiczbowychZ10Do2Do9(int podstawa, QString liczba);
};

#endif // KALKULATOR_H
