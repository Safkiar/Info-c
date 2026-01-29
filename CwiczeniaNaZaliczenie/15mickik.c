/*
Zaimplementuj klasyczny problem Wież Hanoi. Napisz funkcję rekurencyjną
 void hanoi(int n, char from, char aux, char to), która wypisuje kolejne 
 ruchy przenoszenia n krążków z wieży from na to przy użyciu wieży pomocniczej aux.
 Wczytaj n i wypisz wszystkie ruchy oraz łączną liczbę ruchów.
*/

#include <stdio.h>
#include <math.h> 

void hanoi(int n, char from, char aux, char to) {
    if (n == 1) {
        printf("Przenies krazek 1 z %c na %c\n", from, to);
        return;
    }
    hanoi(n - 1, from, to, aux);
    printf("Przenies krazek %d z %c na %c\n", n, from, to);
    hanoi(n - 1, aux, from, to);
}

int main() {
    int n;
    printf("Podaj liczbe krazkow: ");
    scanf("%d", &n);

    printf("\n--- Sekwencja ruchow ---\n");
    hanoi(n, 'A', 'B', 'C');
    long long ilosc_ruchow = (long long)pow(2, n) - 1;
    
    printf("\nLaczna liczba ruchow: %lld\n", ilosc_ruchow);

    return 0;
}