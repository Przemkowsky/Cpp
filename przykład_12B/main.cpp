#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main(int argc, char *argv[])
{
char znak; // zmienna typu char o nazwie znak
system ("chcp 1250");
system ("cls");
cout<<"Wcisnij dowolny klawisz: "<<endl; // pro�ba o wci�ni�cie klawisza
znak=getch(); // za zmienn� znak podstawiamy warto�� zwracan� przez getch()
cout<<"Zostal wcisniety klawisz "<<znak<<endl; // wypisujemy warto�� zmiennej znak
if(znak=='a')
{
 cout<<"Pelny dostep"<<endl;
}
else
{
 cout<<"Brak dostepu"<<endl;
}
getch(); 
}

