#include <stdio.h>
#include <ctype.h> 

int main() {
    char napis[40]; 
    int licznik = 0;
    int i = 0;

    printf("Dzień dobry, podaj imię i nazwisko.");

    fgets(napis, sizeof(napis), stdin);
    // sizeof - limit 
    // standard input output

    while (napis[i] != '\0') {
        char znak = tolower(napis[i]);

        if (znak == 'a' || znak == 'e' || znak == 'i' || 
            znak == 'o' || znak == 'u' || znak == 'y') {
            licznik++;
        }
        i++; 
    }
    printf("Liczba samoglosek: %d\n", licznik);
    return 0;
}