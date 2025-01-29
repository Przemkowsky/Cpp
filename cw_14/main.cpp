#include <iostream>
#include <windows.h>
#include <cstdlib>

int main() {
    system("chcp 65001 > nul");
    system("cls"); 

    char imie[50], nazwisko[50]; 
    int wiek, rok;

    printf("Jak masz na imię? ");
    scanf("%49s", imie);

    printf("Podaj swoje nazwisko: ");
    scanf("%49s", nazwisko);

    printf("Ile masz lat? ");
    scanf("%d", &wiek);

    printf("Podaj aktualny rok: ");
    scanf("%d", &rok);

    int rok_urodzenia = rok - wiek;
    int rok_rozpoczecia_szkoly = rok_urodzenia + 7;

    printf("\nWitaj %s %s!\n", imie, nazwisko);
    printf("Pierwszą naukę w szkole podjąłeś w roku %d.\n", rok_rozpoczecia_szkoly);
    printf("Twój rok urodzenia to %d.\n", rok_urodzenia);

    return 0;
}