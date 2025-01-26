#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <stdio.h>
#include <dos.h>

using namespace std;

float przeliczKilometryNaMetry(float kilometry) {
	return (kilometry*1000)/60;
}

float sekundy(float kilometry) {
	return (kilometry*1000)/3600;
}

void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void zaznaczNaOsi(const string &marka, float maxpredkosc, int kolor, int linijka) {
	if(maxpredkosc<=280) {
		int dl = 1000+(std::rand() % 2000);
		gotoxy(sekundy(maxpredkosc)+1, linijka);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kolor|
		                        FOREGROUND_INTENSITY);
		printf("* %s",marka.c_str());
		Beep(dl, 700 );
	}
}

void przeliczMaxymalnaPredkosc(const string &marka, float maxpredkosc) {
	printf("\nMaksymalna prędkość %s = %.0f m/min	lub %.0f m/s",marka.c_str(), przeliczKilometryNaMetry(maxpredkosc), sekundy(maxpredkosc));
}

string podajNazweMarki() {
	char marka[20];
	string podajNazweMar;
	printf("Podaj markę samochodu:");
	scanf("%s",marka);
	podajNazweMar = marka;
	return string(marka);
}

float podajMaksymalnaPredkosc() {
	float maxpredkosc;
	printf("Podaj maksymalną prędkość samochodu w km/h:");
	scanf("%f",&maxpredkosc);
	return maxpredkosc;
}

void narysujOsie(int liczbaSamochodow) {
	for( int i = 1; i <= (liczbaSamochodow*2)+1; i++ ) {
		printf("*\n");
	}

	for( int i = 1; i <= 77; i++ ) {
		printf("*");
	}
	printf("\n");
	printf("    5    10   15   20   25   30   35   40   45   50   55   60   65   70   75");
}

int main(int argc, char** argv) {

	srand(time(nullptr));
	system("chcp 65001");
	system("cls");
	const int ILOSC_SAMOCHODOW = 6;
	string marka[ILOSC_SAMOCHODOW];
	float maxpredkosc[ILOSC_SAMOCHODOW];

	printf("Prędkość maks ogranicz do 280km/h\n");

	for(int i=0; i< ILOSC_SAMOCHODOW ; i++) {
		marka[i] = podajNazweMarki();
		maxpredkosc[i] = podajMaksymalnaPredkosc();
	}

	for(int i=0; i< ILOSC_SAMOCHODOW; i++) {
		przeliczMaxymalnaPredkosc(marka[i], maxpredkosc[i]);
	}

	printf("\n\n\n");

	narysujOsie( ILOSC_SAMOCHODOW );

	for(int i=0; i< ILOSC_SAMOCHODOW; i++) {
		zaznaczNaOsi( marka[i], maxpredkosc[i], ( std::rand() % 16 ), (5+(ILOSC_SAMOCHODOW*3)+(i*2)));
	}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15|
	                        FOREGROUND_INTENSITY);

	gotoxy(0,(10+(ILOSC_SAMOCHODOW*5)));
	Sleep(1000);
	system("PAUSE");
	return EXIT_SUCCESS;
}