#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h> // Dodano do użycia Windows API
using namespace std;

void setColor(int textColor, int bgColor) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (bgColor << 4) | textColor);
}

int main() {
    const int width = 101;
    const int height = 31;
    const int numPlayersTeam1 = 11;  // Liczba zawodników drużyny 1
    const int numPlayersTeam2 = 11;  // Liczba zawodników drużyny 2
    char field[height][width];

    srand(static_cast<unsigned int>(time(0)));

    // Wypełnij boisko pustą przestrzenią
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            field[y][x] = ' ';  // Pusta przestrzeń
        }
    }

    // Ustaw krawędzie boiska
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            if (y == 0 || y == height - 1 || x == 0 || x == width - 1) {
                field[y][x] = 'X';  // Zmiana na 'X' dla linii zewnętrznych boiska
            } else if (x == width / 2) {
                field[y][x] = '|';
            } else if ((y >= height / 2 - 1 && y <= height / 2 + 1) && (x < 4 || x > width - 5)) {
                field[y][x] = '1'; // Bramka
            } else if ((y >= height / 2 - 4 && y <= height / 2 + 4) && (x < 10 || x > width - 11)) {
                field[y][x] = '|'; // Pole karne
            } else if ((x >= width / 2 - 4 && x <= width / 2 + 4) && (y == height / 2 || y == height / 2 - 1 || y == height / 2 + 1)) {
                field[y][x] = '+'; // Środek boiska
            }
        }
    }

    // Tworzenie lepszych bramek
    for (int i = -2; i <= 2; i++) { // Ustalamy ramy bramki w pionie
        if (i == -2 || i == 2) {
            field[height / 2 + i][1] = '1'; // Lewa strona bramki
            field[height / 2 + i][width - 2] = '1'; // Prawa strona bramki
        } else {
            field[height / 2 + i][1] = '1'; // Lewa strona bramki
            field[height / 2 + i][width - 2] = '1'; // Prawa strona bramki
            field[height / 2 + i][2] = '1'; // Wejście bramki (w lewo)
            field[height / 2 + i][width - 3] = '1'; // Wejście bramki (w prawo)
        }
    }

    // Losowe rozmieszczenie zawodników drużyny 1 (czerwoni)
    for (int i = 0; i < numPlayersTeam1; i++) {
        int x, y;
        do {
            x = rand() % (width - 10) + 10;  // Losowy x
            y = rand() % (height / 2 - 2) + 4;  // Losowy y
        } while (field[y][x] != ' ');  // Sprawdzanie, czy pole jest puste
        field[y][x] = 'R';  // Zawodnik drużyny 1 (czerwony)
    }

    // Losowe rozmieszczenie zawodników drużyny 2 (niebiescy)
    for (int i = 0; i < numPlayersTeam2; i++) {
        int x, y;
        do {
            x = rand() % (width - 10) + 10;  // Losowy x
            y = rand() % (height / 2 - 2) + (height / 2 + 2);  // Losowy y
        } while (field[y][x] != ' ');  // Sprawdzanie, czy pole jest puste
        field[y][x] = 'B';  // Zawodnik drużyny 2 (niebieski)
    }

    // Dodanie piłki (jako 'o') w losowej pozycji
    int ballX, ballY;
    do {
        ballX = rand() % (width - 10) + 10;  // Losowy x
        ballY = rand() % (height - 5) + 1;   // Losowy y
    } while (field[ballY][ballX] != ' ');  // Sprawdzanie, czy pole jest puste
    field[ballY][ballX] = 'o';  // Dodanie piłki

    // Wyświetlanie boiska
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            if (field[y][x] == 'X') {
                setColor(2, 0);  // Ustaw kolor linii zewnętrznych na zielony
                cout << 'X';  // Linia zewnętrzna boiska
            } else if (field[y][x] == 'R') {
                setColor(4, 0);  // Ustaw kolor tekstu na czerwony
                cout << 'R';  // Zawodnik drużyny 1
            } else if (field[y][x] == 'B') {
                setColor(1, 0);  // Ustaw kolor tekstu na niebieski
                cout << 'B';  // Zawodnik drużyny 2
            } else if (field[y][x] == 'o') {
                setColor(7, 0);  // Domyślny kolor dla piłki
                cout << 'o';  // Piłka
            } else {
                setColor(7, 0);  // Domyślny kolor dla innych elementów
                cout << field[y][x];  // Inne znaki bez zmian
            }
        }
        cout << endl;
    }

    // Resetowanie kolorów do domyślnych
    setColor(7, 0); 

    return 0;
}
