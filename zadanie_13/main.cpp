#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <stdio.h>
#include <dos.h>

float metry(float kilometry)
{
	return (kilometry*1000)/60;	
}

float sekundy(float kilometry)
{
	return (kilometry*1000)/3600;
}

void gotoxy(int x, int y)  
{  
   COORD coord;  
   coord.X = x;  
   coord.Y = y;  
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);  
}


int main(int argc, char** argv)
 {
	system("chcp 1250");
	system("cls");
	char marka1[20];
	char marka2[20];
	char marka3[20];
	float maxpredkosc1;
	float maxpredkosc2;
	float maxpredkosc3;
 	
	
	printf("Prêdkoœæ maks ogranicz do 280km/h\n");
	printf("Podaj markê samochodu:");
	scanf("%s",&marka1);
	printf("Podaj maksymaln¹ prêdkoœæ samochodu w km/h:");
	scanf("%f",&maxpredkosc1);
	printf("Podaj markê samochdu:");
	scanf("%s",&marka2);
	printf("Podaj maksymaln¹ prêdkoœæ samochodu w km/h:");
	scanf("%f",&maxpredkosc2);
	printf("Podaj markê samochodu:");
	scanf("%s",&marka3);
	printf("Podaj maksymaln¹ prêdkoœæ samochodu w km/h:");
	scanf("%f",&maxpredkosc3);
	
	printf("\nMaksymalna prêdkoœæ %s = %.0f m/min	lub %.0f m/s",&marka1, metry(maxpredkosc1), sekundy(maxpredkosc1));
	printf("\nMaksymalna prêdkoœæ %s = %.0f m/min	lub %.0f m/s",&marka2, metry(maxpredkosc2), sekundy(maxpredkosc2));
	printf("\nMaksymalna prêdkoœæ %s = %.0f m/min	lub %.0f m/s\n",&marka3, metry(maxpredkosc3), sekundy(maxpredkosc3));
	printf("\n");
	
	
	for( int i = 1; i <= 7; i++ )
{
	printf("*\n");    
}

	for( int i = 1; i <= 77; i++ )
{
	printf("*");    
}
printf("\n");
printf("    5    10   15   20   25   30   35   40   45   50   55   60   65   70   75");
	
	
if(maxpredkosc3<=280){	
	Sleep(1000);
	Beep(1396, 200);	
gotoxy(sekundy(maxpredkosc3)+1, 14);	
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12| 
FOREGROUND_INTENSITY);
printf("* %s",&marka3);		
}

if(maxpredkosc2<=280){
	Sleep(1000);
	Beep(1174, 1000);		
gotoxy(sekundy(maxpredkosc2)+1, 16);	
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6| 
FOREGROUND_INTENSITY);
printf("* %s",&marka2);
}

if(maxpredkosc1<280){
	Sleep(1000);
    Beep(1244, 1000);	
gotoxy(sekundy(maxpredkosc1)+1, 18);	
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10| 
FOREGROUND_INTENSITY);
printf("* %s",&marka1);
}	

  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| 
FOREGROUND_INTENSITY);

gotoxy(0,27);
     
    system("PAUSE"); 
    return EXIT_SUCCESS;
}

