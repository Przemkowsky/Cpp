#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
 float SUMA=0, n=0;
 while (SUMA<1000)
 {
 SUMA+=(++n); // SUMA = SUMA + n;
// ++n zwiêkszaj zmienn¹ a o jeden
//w formie przedrostkowej
// inny zapis ++n to n=n+1;
 }
 printf("SUMA: %.1f ostatnia liczba: %.2f", SUMA, n);
 cout<<"\n"<<endl;
 system("PAUSE");
 return EXIT_SUCCESS;
}

