/*
Wczytaj rozmiar n i n liczb całkowitych do tablicy, a 
następnie odwróć kolejność elementów "w miejscu" (in-place) i wypisz wynik.
*/
#include <stdio.h>

int main() {
    int n;
    printf("Podaj rozmiar tablicy n: ");
    scanf("%d", &n);
    int tab[n];

    printf("Podaj %d liczb:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }


    for (int i = 0; i < n / 2; i++) {
        int temp = tab[i];           
        tab[i] = tab[n - 1 - i];     
        tab[n - 1 - i] = temp;        
    }

    printf("\nTablica po odwroceniu:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}