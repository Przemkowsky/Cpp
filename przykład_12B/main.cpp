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
cout<<"Wcisnij dowolny klawisz: "<<endl; // proœba o wciœniêcie klawisza
znak=getch(); // za zmienn¹ znak podstawiamy wartoœæ zwracan¹ przez getch()
cout<<"Zostal wcisniety klawisz "<<znak<<endl; // wypisujemy wartoœæ zmiennej znak
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

