#include <iostream>

/*
int konwersjaSystemowLiczbowychOd1Do9(int podstawa, int liczba) {
    int licznik = 1, wynik = 0;
    while (liczba > 0) {
        wynik += licznik * (liczba % podstawa);
        licznik *= 10;
        liczba = liczba / podstawa;
    }
    return wynik;
}

std::string konwersjaSystemowLiczbowychOd11Do16(int podstawa, int liczba) {
    std::string wynik = "";
    while (liczba > 0) {
        int resztaZDzielenia = liczba % podstawa;
        if (resztaZDzielenia > 9) {
            wynik=static_cast<char>('A'+resztaZDzielenia-10)+wynik;
        }
        else {
            wynik = static_cast<char>('0' + resztaZDzielenia) + wynik;
        }
        liczba = liczba / podstawa;
    }
    return wynik;
}

void konwersjaSystemowLiczbowych() {
    int podstawa, liczba;
    std::cout << "podaj liczbe:";
    std::cin >> liczba;
    std::cout << "podaj podstawe systemu liczbowego od 1 do 16: ";
    std::cin >> podstawa;
    if (podstawa < 10 && podstawa>0)
        std::cout << "wynik: " << konwersjaSystemowLiczbowychOd1Do9(podstawa, liczba) << '\n';
    else if (podstawa <= 16 && podstawa > 10)
        std::cout << "wynik: " << konwersjaSystemowLiczbowychOd11Do16(podstawa, liczba) << '\n';
    else
        std::cout << "wynik: " << liczba << '\n';
    mem = liczba;
    czyWPamieciZnajdujeSieWartosc = true;
}
*/

class Kalkulator {
    bool czyWPamieciZnajdujeSieWartosc = false;
    double mem;
public:
    bool czyZakonczycProgram = false;
    void wypiszMenu() {
        std::cout << "Menu" << '\n';
        if (czyWPamieciZnajdujeSieWartosc)
            std::cout << "wartosc w pamieci: " << mem << '\n';
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
    void wyborIObslugaOpcji() {
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
            std::cout << "wybierz operacje (1-6): ";
            std::cin >> wybor;
            std::cout << "liczba w pamieci: " << mem<<'\n';
            a = mem;
            std::cout << "podaj druga liczbe: ";
            std::cin >> b;
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
            //konwersjaSystemowLiczbowych();
            break;
        case 7:
            czyszczeniePamieci();
            break;
        default:
            break;
        };
    }
    void dodawanie(double a, double b) {
        mem = a + b;
    };
    void odejmowanie(double a, double b) {
        mem = a - b;
    };
    void mnozenie(double a, double b) {
        mem = a * b;
    };
    void dzielenie(double a, double b) {
        mem = a / b;
    };
    void resztaZDzielenia(double a, double b) {
        mem = a - (int)(a / b) * b;
    };
    void czyszczeniePamieci() {
        czyWPamieciZnajdujeSieWartosc = false;
    };
};

int main() {
    Kalkulator kalkulator1;
    while (!kalkulator1.czyZakonczycProgram) {
        kalkulator1.wypiszMenu();
        kalkulator1.wyborIObslugaOpcji();
    }
    return 0;
}
