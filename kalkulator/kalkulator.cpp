#include "kalkulator.h"

void kalkulator::dodawanie(){
    mem=a+b;
}
void kalkulator::odejmowanie(){
    mem=a-b;
}
void kalkulator::dzielenie(){
    mem=a/b;
}
void kalkulator::mnozenie(){
    mem=a*b;
}
void kalkulator::resztaZDzielenia(){
    mem=a-(int)(a/b)*b;
}
void kalkulator::konwersjaSystemowLiczbowychZOd2Do9Do10(int podstawa, int &liczba){
    int licznik=1, wynik=0;
    while (liczba>0) {
        wynik+=licznik*(liczba%10);
        licznik*=podstawa;
        liczba=liczba/10;
    }
    liczba=wynik;
}
QString kalkulator::konwersjaSystemowLiczbowychZ10Do2Do9(int podstawa, int liczba){
    //int licznik=1, wynik=0;
    QString wynik="";
    while (liczba>0){
        wynik=QString::number(liczba%podstawa)+wynik;

        //wynik+=licznik*(liczba%podstawa);
        //licznik*=10;
        liczba=liczba/podstawa;
    }
    return wynik;
}
