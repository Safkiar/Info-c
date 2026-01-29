/*
Instrukcje
Dla tablicy n liczb całkowitych znajdź maksimum i jego indeks, 
używając wyłącznie arytmetyki wskaźników (bez indeksowania []).
*/

#include <stdio.h>

int main() {
    int dane[] = {12, 5, 89, 4, 105, 33, 7};
    // deklaracja tablicy []
    int n = sizeof(dane) / sizeof(int);
    // waga tablicy / waga elementu
    int *ptr = dane; 
    // wskazuje na ten sam adres
    int max_wartosc = *ptr;
    // zakladam, ze jest tam max wartosc
    int max_indeks = 0;

    for (int i = 0; i < n; i++) {
        int aktualna = *(dane + i);
        // zaczynam od początku tablicy i przesuwam się o jeden  
        if (aktualna > max_wartosc) {
            // jeśli jest większe niż moja wcześniej zapisana max wartość
            max_wartosc = aktualna;
            // nadpisuje
            max_indeks = i;
        }
    }

    printf("Maksimum: %d\n", max_wartosc);
    printf("Indeks: %d\n", max_indeks);

    return 0;
}