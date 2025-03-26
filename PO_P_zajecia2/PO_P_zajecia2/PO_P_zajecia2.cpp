#include <iostream>

void zad1a() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
        std::cout << i % 10;
}

void zad1b() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
        std::cout << i % 2;
}

void zad1c() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
        std::cout << i % 4;
}

void zad1d() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
        std::cout << "0123";
}

void zad1e() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n - 1; i++)
        std::cout << "0123456789";
    if (n > 0)
        std::cout << "0123";
}

void zad1f() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            std::cout << 3;
        else
            std::cout << 7;
    }
}

void zad2() {
    int n;
    std::cin >> n;
    for (int j = 0; j < n; j++) {
        for (int i = n; i > j; i--) {
            std::cout << i;
        }
        std::cout << "\n";
    }
    for (int j = 1; j <= n; j++) {
        for (int i = j; i <= n; i++) {
            std::cout << i;
        }
        std::cout << "\n";
    }
    for (int j = n; j > 0; j--) {
        for (int i = 1; i < j; i++)
            std::cout << " ";
        for (int k = j; k <= n; k++)
            std::cout << k;
        std::cout << "\n";
    }
    for (int i = 0; i < n; i++) {
        for (int j = n; j > i; j--)
            std::cout << j;
        std::cout << "\n";
    }
}

void zad3() {
    int n, suma = 0;
    std::cin >> n;
    for (int i = 1; i < n; i = i + 2) {
        suma += i;
    }
    std::cout << suma;
}

void zad4(int a, int b) {
    int licznik = 1;
    while (b >= a) {
        if (b % 7 == 0) {
            std::cout << licznik << ". " << b << std::endl;
            b = b - 7;
            licznik++;
        }
        else
            b--;
    }
}

bool zad5(int n) {
    int sumaDzielnikow = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            sumaDzielnikow += i;
    }
    return sumaDzielnikow == n;
}

int main() {
    //zad1a();
    //zad1b();
    //zad1c();
    //zad1d();
    //zad1e();
    //zad1f();
    //zad2();
    //zad3();
    //zad4(4,25);
    //std::cout<<zad5(6);
}