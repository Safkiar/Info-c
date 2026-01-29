/*
Zaalokuj dynamicznie dwuwymiarową tablicę M×N (jako tablicę wskaźników lub bufor ciągły),
 wypełnij tabliczką mnożenia i wypisz ją. Zwalnij całą pamięć.
*/

#include <stdio.h>
#include <stdlib.h> 

int main() {
    int wiersze, kolumny;

    printf("Podaj ilosc wierszy i kolumn: ");
    scanf("%d %d", &wiersze, &kolumny);
    int **tab = (int **)malloc(wiersze * sizeof(int *));
    // ** - adres wskaźnika
    for (int i = 0; i < wiersze; i++) {
        tab[i] = (int *)malloc(kolumny * sizeof(int));
    }


    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            tab[i][j] = (i + 1) * (j + 1);
        }
    }

    printf("\n--- Dynamiczna Tabliczka ---\n");
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            printf("%4d", tab[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < wiersze; i++) {
        free(tab[i]);
    }
    free(tab);

    return 0;
}