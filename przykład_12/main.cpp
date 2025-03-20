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
 printf("Umiem powtarzaæ program\n");
 printf("\njeœli powtórzyæ program wcisnij t(tak)\nw przeciwnym wypadku wciœnij klawisz n(nie)\n");
 cin>>znak; 
 } 
 while (znak=='t');
 
 return EXIT_SUCCESS;
}
