#include <iostream>
#include <windows.h>
int main() {
	SetConsoleOutputCP(65001);
    double a, b;
    std::cout << "Program wykonujący dzielenie\n";
    std::cout << "Podaj liczbe a: ";
    std::cin >> a;
    std::cout << "Podaj liczbe b: ";
    std::cin >> b;

    if (b == 0) {
        std::cout << "Błąd! Dzielenie przez 0\n";
    } else {
        std::cout << "Wynik dzielenia to: " << a / b << "\n";
    }

    return 0;
}
