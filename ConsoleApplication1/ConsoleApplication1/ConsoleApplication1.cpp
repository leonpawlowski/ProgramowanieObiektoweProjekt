#include <iostream>

bool czyWPamieciZnajdujeSieWartosc = false;
double mem;

double dodawanie(double a,double b) {
    return a + b;
}

double odejmowanie(double a, double b) {
    return a - b;
}

double mnozenie(double a, double b) {
    return a * b;
}

double dzielenie(double a, double b) {
    return a / b;
}

double resztaZDzielenia(double a, double b) {
    return a - (int)(a/b) * b;
}

void czyszczeniePamieci() {

}

void wypiszMenu() {
    std::cout << "Menu" << '\n';
    std::cout << "1) +" << '\n';
    std::cout << "2) -" << '\n';
    std::cout << "3) *" << '\n';
    std::cout << "4) /" << '\n';
    std::cout << "5) %" << '\n';
    std::cout << "6) wyczysc m" << '\n';
}

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
    switch (wybor) {
    case 1:
        mem=dodawanie(a,b);
        std::cout << "wynik: " << mem << '\n';
        break;
    case 2:
        mem=odejmowanie(a,b);
        std::cout << "wynik: " << mem << '\n';
        break;
    case 3:
        mem=mnozenie(a,b);
        std::cout << "wynik: " << mem << '\n';
        break;
    case 4:
        if (b!=0) {
            mem=dzielenie(a,b);
            std::cout << "wynik: " << mem << '\n';
        }
        else
            std::cout << "DZIELENIE PRZEZ ZERO!!!" << '\n';
        break;
    case 5:
        if (b!=0) {
            mem=resztaZDzielenia(a, b);
            std::cout << "wynik: " << mem << '\n';
        }
        else
            std::cout << "DZIELENIE PRZEZ ZERO!!!" << '\n';
        break;
    case 6:
        czyszczeniePamieci();
        break;
    default:
        break;
    }
}


int main()
{
    wypiszMenu();
    wyborIObslugaOpcji();
    return 0;
}
