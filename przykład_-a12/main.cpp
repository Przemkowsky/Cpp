#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{ 
 float bok_a, wysokosc, pole;
 do
 {
 cout<<"podaj dlugosc podstawy a="; 
 cin>> bok_a;
 } 
 while (bok_a<=0); 
 do
 {
 cout<<"podaj dlugosc wysokosci="; 
 cin>> wysokosc; 
 } 
 while (wysokosc<=0);
 pole = bok_a*wysokosc/2;
 cout<<"pole="<<pole<<" m^2"; 
 cout<<"\n"<<endl; 
 system("PAUSE");
 return EXIT_SUCCESS;
}
