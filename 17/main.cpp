#include <iostream>
#include <windows.h>

int main() {
	SetConsoleOutputCP(65001);
    std::cout << "Będę sprawdzał czy liczba należy do przedziału <-5,6)" << std::endl;
    double x_kow;
    std::cout << "Podaj liczbę: ";
    std::cin >> x_kow;
    
    if (x_kow >= -5 && x_kow < 6) {
        std::cout << "Liczba należy do przedziału <-5,6)" << std::endl;
    } else {
        std::cout << "Liczba nie należy do przedziału <-5,6)" << std::endl;
    }
    
    return 0;
}