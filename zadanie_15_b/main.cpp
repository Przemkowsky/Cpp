#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    int imie;
    int n;
    int koniec;

    cout << "Podaj liczbe liter Twojego imienia: ";
    cin >> imie;
    cout << "n=";
    cin >> n;
    cout << "Koniec=";
    cin >> koniec;

    int iloczyn = n * koniec;

    cout << "Iloczyn wynosi: " << iloczyn << " ostatnia liczba:" << koniec+1 <<endl;

    return 0;
}

