// Napisz funkcję rekurencyjną int sum_of_digits(long long x), która zwraca sumę cyfr
// liczby (obsłuż liczby ujemne). Wczytaj liczbę z wejścia i wypisz wynik.

#include <stdio.h>
#include <stdlib.h> 

int sum_of_digits(long long x) {
    if (x < 0) {
        return sum_of_digits(-x);
    }
    if (x < 10) {
        return (int)x;
    }
    return (x % 10) + sum_of_digits(x / 10);
}

int main() {
    long long n;
    printf("Podaj liczbe: ");
    scanf("%lld", &n);
    int wynik = sum_of_digits(n);

    printf("Suma cyfr liczby %lld wynosi: %d\n", n, wynik);

    return 0;
}