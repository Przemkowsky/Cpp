#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
using namespace std; 
void changeColorToYellow()
{
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 
FOREGROUND_RED | FOREGROUND_GREEN  | FOREGROUND_INTENSITY);
}
void changeColorToRed()
{
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 
FOREGROUND_RED | FOREGROUND_INTENSITY); 
}
void changeColorToBlack()
{
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); 
}
void gotoxy(int x, int y) 
{ 
 COORD coord; 
 coord.X = x; 
 coord.Y = y; 
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); 
}
int main() 
{ 
system("chcp 850");

int width=100;
int height = width/2;
int border=2;


 changeColorToRed(); 
 cout << "+----------------------------------------+\n\n"; 
  gotoxy(0,2);
 cout << "!";
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 
FOREGROUND_GREEN | FOREGROUND_INTENSITY); 
cout << "        Przemyslaw Galeziowski\n\n";
 changeColorToRed();
   gotoxy(41,2);
 cout << "!\n";
 cout << "+----------------------------------------+\n\n\n\n\n\n\n\n";
 
 
 for(int z=1; z<=height; z++)
 {
 	for(int s=1; s<z; ++s){
	 		cout << " ";
		 }
	 for(int i=1; i<=width-(z*2); i++)
	 {
	 	if (z<=border/2) {
	 		changeColorToRed();
	 		cout<<(char) 219; 
		 } else {
			 	if (i<=border || i>width-border-(z*2)) {
			 	changeColorToRed();
			 	cout<<(char) 219; 
				 } else {
				 changeColorToYellow();
			     cout<<(char) 219;  
				 }
		 }
	 } 
	  
cout << "\n";
 }
 
 cout<<endl;
 
 
 
 return 0; 
}