#include <iostream>
#include "kalkulator.hpp"

int main() {
    Kalkulator kalkulator1;
    while (!kalkulator1.czyZakonczycProgram) {
        kalkulator1.wypiszMenu();
        kalkulator1.wyborIObslugaOpcji();
    }
    return 0;
}