#include <iostream>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y)
{
COORD coord;
coord.X=x;
coord.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int main()
{
cout<<"+----------------------------------------------------------------+\n\n";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2| FOREGROUND_INTENSITY);
cout<<"!		 Przemyslaw Galeziowski                 	 ! \n\n";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4| FOREGROUND_INTENSITY);
cout<<"+----------------------------------------------------------------+\n\n";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4| FOREGROUND_INTENSITY);


cout<<endl;
return 0;
}
