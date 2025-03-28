//#pragma once
#ifndef KALKULATOR_HPP
#define KALKULATOR_HPP


class Kalkulator {
    bool czyWPamieciZnajdujeSieWartosc = false;
    bool operacjaNaPamieci = false;
    double mem;
public:
    bool czyZakonczycProgram = false;
    void wypiszMenu();
    void wyborIObslugaOpcji();
    void dodawanie(double a, double b);
    void odejmowanie(double a, double b);
    void mnozenie(double a, double b);
    void dzielenie(double a, double b);
    void resztaZDzielenia(double a, double b);
    void konwersjaSystemowLiczbowych();
    void konwersjaSystemowLiczbowychZOd1Do9Do10(int podstawa, int& liczba);
    void konwersjaSystemowLiczbowychZ10DoOd1Do9(int podstawa, int& liczba);
    void czyszczeniePamieci();
};
#endif