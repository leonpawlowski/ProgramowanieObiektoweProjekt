#include <iostream>
#include "kalkulator.hpp"

void Kalkulator::wypiszMenu() {
    std::cout << "MENU" << '\n';
    if (czyWPamieciZnajdujeSieWartosc)
        std::cout << "wartosc w pamieci: " << mem << '\n';
    else
        std::cout << "wartosc w pamieci: nie ma\n";
    std::cout << "1) +" << '\n';
    std::cout << "2) -" << '\n';
    std::cout << "3) *" << '\n';
    std::cout << "4) /" << '\n';
    std::cout << "5) %" << '\n';
    std::cout << "6) konwersja systemow liczbowych dla liczb calkowitych" << '\n';
    std::cout << "7) wyczysc m" << '\n';
    std::cout << "8) operacje na pamieci" << '\n';
    std::cout << "0) wyjdz" << '\n';
};
void Kalkulator::wyborIObslugaOpcji() {
    std::cout << "wybor: ";
    int wybor;
    std::cin >> wybor;
    double a, b;
    if (wybor < 6 && wybor>0) {

        std::cout << "podaj pierwsza liczbe: ";
        std::cin >> a;
        std::cout << "podaj druga liczbe: ";
        std::cin >> b;
    }
    else if (wybor == 8) {
        if (czyWPamieciZnajdujeSieWartosc) {
            std::cout << "wybierz operacje (1-6): ";
            std::cin >> wybor;
            if (wybor < 6 && wybor>0) {
                std::cout << "liczba w pamieci: " << mem << '\n';
                a = mem;
                std::cout << "podaj druga liczbe: ";
                std::cin >> b;
            }
            else if (wybor == 6)
                operacjaNaPamieci = true;
        }
        else if (!czyWPamieciZnajdujeSieWartosc) {
            std::cout << "wybierz operacje (1-6): ";
            std::cin >> wybor;
            std::cout << "w pamieci nie ma zadnej liczby\n";
            std::cout << "podaj liczbe do pamieci: ";
            std::cin >> mem;
            if (wybor < 6 && wybor>0) {
                a = mem;
                std::cout << "podaj druga liczbe: ";
                std::cin >> b;
            }
            else if (wybor == 6)
                operacjaNaPamieci = true;
            czyWPamieciZnajdujeSieWartosc = true;
        }
    }
    switch (wybor) {
    case 0:
        czyZakonczycProgram = true;
        break;
    case 1:
        dodawanie(a, b);
        std::cout << "wynik: " << mem << '\n';
        czyWPamieciZnajdujeSieWartosc = true;
        break;
    case 2:
        odejmowanie(a, b);
        czyWPamieciZnajdujeSieWartosc = true;
        std::cout << "wynik: " << mem << '\n';
        break;
    case 3:
        mnozenie(a, b);
        std::cout << "wynik: " << mem << '\n';
        czyWPamieciZnajdujeSieWartosc = true;
        break;
    case 4:
        if (b != 0) {
            dzielenie(a, b);
            std::cout << "wynik: " << mem << '\n';
            czyWPamieciZnajdujeSieWartosc = true;
        }
        else
            std::cout << "DZIELENIE PRZEZ ZERO!!!" << '\n';
        break;
    case 5:
        if (b != 0) {
            resztaZDzielenia(a, b);
            std::cout << "wynik: " << mem << '\n';
            czyWPamieciZnajdujeSieWartosc = true;
        }
        else
            std::cout << "DZIELENIE PRZEZ ZERO!!!" << '\n';
        break;
    case 6:
        konwersjaSystemowLiczbowych();
        break;
    case 7:
        czyszczeniePamieci();
        break;
    default:
        break;
    };
}
void Kalkulator::dodawanie(double a, double b) {
    mem = a + b;
};
void Kalkulator::odejmowanie(double a, double b) {
    mem = a - b;
};
void Kalkulator::mnozenie(double a, double b) {
    mem = a * b;
};
void Kalkulator::dzielenie(double a, double b) {
    mem = a / b;
};
void Kalkulator::resztaZDzielenia(double a, double b) {
    mem = a - (int)(a / b) * b;
};
void Kalkulator::konwersjaSystemowLiczbowych() {
    if (operacjaNaPamieci) {
        int podstawa, liczba = int(mem);
        std::cout << "podaj w jakim systemie liczbowym jest liczba z pamieci:";
        std::cin >> podstawa;
        if (podstawa > 0 && podstawa < 10)
            konwersjaSystemowLiczbowychZOd1Do9Do10(podstawa, liczba);
        std::cout << "podaj podstawe systemu liczbowego, na ktory ma byc przkonwertowana liczba:";
        std::cin >> podstawa;
        if (podstawa > 0 && podstawa < 10)
            konwersjaSystemowLiczbowychZ10DoOd1Do9(podstawa, liczba);
        mem = liczba;
        std::cout << "wynik: " << mem << '\n';
        operacjaNaPamieci = false;
    }
    else {
        int podstawa, liczba;
        std::cout << "podaj liczbe:";
        std::cin >> liczba;
        std::cout << "podaj w jakim systemie liczbowym jest ta liczba:";
        std::cin >> podstawa;
        if (podstawa > 0 && podstawa < 10)
            konwersjaSystemowLiczbowychZOd1Do9Do10(podstawa, liczba);
        std::cout << "podaj podstawe systemu liczbowego, na ktory ma byc przkonwertowana liczba:";
        std::cin >> podstawa;
        if (podstawa > 0 && podstawa < 10)
            konwersjaSystemowLiczbowychZ10DoOd1Do9(podstawa, liczba);
        mem = liczba;
        std::cout << "wynik: " << mem << '\n';
        czyWPamieciZnajdujeSieWartosc = true;
    }
}
void Kalkulator::konwersjaSystemowLiczbowychZOd1Do9Do10(int podstawa, int& liczba) {
    int licznik = 1, wynik = 0;
    while (liczba > 0) {
        wynik += licznik * (liczba % 10);
        licznik *= podstawa;
        liczba = liczba / 10;
    }
    liczba = wynik;
}
void Kalkulator::konwersjaSystemowLiczbowychZ10DoOd1Do9(int podstawa, int& liczba) {
    int licznik = 1, wynik = 0;
    while (liczba > 0) {
        wynik += licznik * (liczba % podstawa);
        licznik *= 10;
        liczba = liczba / podstawa;
    }
    liczba = wynik;
}
void Kalkulator::czyszczeniePamieci() {
    czyWPamieciZnajdujeSieWartosc = false;
};