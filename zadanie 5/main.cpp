#include <iostream>
#include <iomanip>  // Dla ustawienia precyzji wy�wietlania ilorazu

using namespace std;

int main() {
	system("chcp 1250");
    // Deklaracja zmiennych
    int a_raw, b_raw;
    
    // Wczytanie danych od u�ytkownika
    cout << "Podaj a=";
    cin >> a_raw;
    cout << "Podaj b=";
    cin >> b_raw;
    
    // Obliczenia
    int suma = a_raw + b_raw;
    int roznica = a_raw - b_raw;
    int iloczyn = a_raw * b_raw;
    float iloraz = 1.0 * a_raw / b_raw;  // Iloraz jako liczba zmiennoprzecinkowa
    int reszta = a_raw % b_raw;
    
    // Wy�wietlanie wynik�w
    cout << "suma=" << suma << endl;
    cout << "r�nica=" << roznica << endl;
    cout << "iloczyn=" << iloczyn << endl;
    cout << fixed << setprecision(2) << "iloraz=" << iloraz << endl;  // Ustawienie precyzji do dw�ch miejsc po przecinku
    cout << "reszta z dzielenia=" << reszta << endl;
    
    return 0;
}

