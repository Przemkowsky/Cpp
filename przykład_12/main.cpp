#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main(int argc, char *argv[])
{
 float liczba;
 char znak;
 system ("chcp 1250");
 system ("cls");
 do
 {
 printf("Umiem powtarza� program\n");
 printf("\nje�li powt�rzy� program wcisnij t(tak)\nw przeciwnym wypadku wci�nij klawisz n(nie)\n");
 cin>>znak; 
 } 
 while (znak=='t');
 
 return EXIT_SUCCESS;
}
