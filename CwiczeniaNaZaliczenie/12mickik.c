/*
Napisz funkcję, która zlicza liczbę wystąpień zadanego znaku w łańcuchu znaków,
 iterując po nim za pomocą wskaźnika. Zwróć wynik i zademonstruj w main.
*/

#include <stdio.h>

int zlicz_znaki(const char *ptr, char szukany) {
    int licznik = 0;
    while (*ptr != '\0') {
        
        if (*ptr == szukany) {
            licznik++;
        }
        ptr++; 
    }

    return licznik;
}

int main() {
    char tekst[100];
    char znak;
    printf("Podaj tekst: ");
    fgets(tekst, sizeof(tekst), stdin);
    printf("Podaj znak do znalezienia: ");
    scanf(" %c", &znak);
    int wynik = zlicz_znaki(tekst, znak);

    printf("Znak '%c' wystapil %d razy.\n", znak, wynik);

    return 0;
}