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
void kalkulator::konwersjaSystemowLiczbowychZOd2Do9Do10(int podstawa, QString &liczba){
    if(liczba.contains('.')){
        QString liczba1="", liczba2="";
        int i=0;
        while(liczba[i]!='.'){
            liczba1=liczba1+liczba[i];
            ++i;
        }
        ++i;
        while(i<liczba.length()){
            liczba2=liczba2+liczba[i];
            ++i;
        }
        bool ok;
        int liczbaInt=liczba1.toInt(&ok);
        int licznik=1, wynik=0;
        while (liczbaInt>0) {
            wynik+=licznik*(liczbaInt%10);
            licznik*=podstawa;
            liczbaInt=liczbaInt/10;
        }
        liczba=QString::number(wynik);
        liczbaInt=liczba2.toInt(&ok);
        licznik=1;
        wynik=0;
        while (liczbaInt>0) {
            wynik+=licznik*(liczbaInt%10);
            licznik*=podstawa;
            liczbaInt=liczbaInt/10;
        }
        liczba=liczba+'.'+QString::number(wynik);
    }
    else{
        bool ok;
        int liczbaInt=liczba.toInt(&ok);
        int licznik=1, wynik=0;
        while (liczbaInt>0) {
            wynik+=licznik*(liczbaInt%10);
            licznik*=podstawa;
            liczbaInt=liczbaInt/10;
        }
        liczba=QString::number(wynik);
    }
}
QString kalkulator::konwersjaSystemowLiczbowychZ10Do2Do9(int podstawa, QString liczba){
    if(liczba.contains('.')){
        QString liczba1="", liczba2="";
        int i=0;
        while(liczba[i]!='.'){
            liczba1=liczba1+liczba[i];
            ++i;
        }
        ++i;
        while(i<liczba.length()){
            liczba2=liczba2+liczba[i];
            ++i;
        }
        bool ok;
        int liczbaInt=liczba1.toInt(&ok);
        QString wynik="";
        while (liczbaInt>0){
            wynik=QString::number(liczbaInt%podstawa)+wynik;
            liczbaInt=liczbaInt/podstawa;
        }
        liczbaInt=liczba2.toInt(&ok);
        liczba=wynik+'.';
        wynik="";
        while (liczbaInt>0){
            wynik=QString::number(liczbaInt%podstawa)+wynik;
            liczbaInt=liczbaInt/podstawa;
        }
        return liczba+wynik;
    }
    else{
        bool ok;
        int liczbaInt=liczba.toInt(&ok);
        liczba="";
        while (liczbaInt>0){
            liczba=QString::number(liczbaInt%podstawa)+liczba;
            liczbaInt=liczbaInt/podstawa;
        }
        return liczba;
    }
}
