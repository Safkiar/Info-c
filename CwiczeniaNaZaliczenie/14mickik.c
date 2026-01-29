/*
Wczytaj N, zaalokuj dynamicznie tablicę int o rozmiarze N, 
wczytaj N liczb i oblicz średnią. Zwalnij pamięć.
*/

#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n;
    double suma = 0; 
    double srednia;

    printf("Podaj ilosc liczb (N): ");
    scanf("%d", &n);

    int *tab = (int *)malloc(n * sizeof(int));
    if (tab == NULL) {
        printf("Blad: Brak pamieci RAM!\n");
        return 1; 
    }
    printf("Podaj %d liczb:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
        suma = suma + tab[i];
    }


    srednia = suma / n;

    printf("Srednia wynosi: %.2f\n", srednia);
    free(tab);

    return 0;
}