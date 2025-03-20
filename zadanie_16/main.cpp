#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int NWD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(int argc, char** argv) {
    system("chcp 1250");
    
    int pierwsza;
    int druga;
    
    cout << "Podaj pierwsz� liczb� n=";
    cin >> pierwsza;
    cout << "Podaj drug� liczb� mniejsz� lub r�wn� pierwszej m=";
    cin >> druga;

    if (pierwsza >= druga && druga > 0) {
        int wynik = NWD(pierwsza, druga);
        cout << "NWD(" << pierwsza << ", " << druga << ")=" << wynik << endl;
    }
    
    return 0;
}

