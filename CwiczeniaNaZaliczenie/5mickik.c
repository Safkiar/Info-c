#include <stdio.h>

int main() {
    int n;
    int czy_pierwsza = 1; 

    printf("Podaj liczbe calkowita: ");
    scanf("%d", &n);

    if (n < 2) {
        czy_pierwsza = 0;
    } 
    else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                czy_pierwsza = 0; 
                break; 
            }
        }
    }

    if (czy_pierwsza == 1) {
        printf("%d jest liczba pierwsza.\n", n);
    } else {
        printf("%d NIE jest liczba pierwsza.\n", n);
    }

    return 0;
}