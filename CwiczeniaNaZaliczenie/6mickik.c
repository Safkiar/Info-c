/*
Instrukcje
Wczytaj liczbę całkowitą n i wypisz tabliczkę mnożenia 
od 1 do n (w formie tabeli). Zadbaj o czytelne formatowanie i wyrównanie kolumn.
*/

#include <stdio.h>

int main() {
    int n;
    printf("Podaj rozmiar tabliczki (n): ");
    scanf("%d", &n);
    printf("\nTabliczka mnozenia do %d:\n\n", n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }

    return 0;
}