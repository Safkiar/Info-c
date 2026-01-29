
/*
Utwórz tablicę 5 elementów struktury Pair { char a; int b; } i wypisz 
adresy kolejnych elementów oraz różnicę adresów, aby pokazać krok 
(stride) elementu w tablicy wynikający z paddingu końcowego
*/

#include <stdio.h>
// char (1 bajt) + int (4 bajty) = 5 bajtów. 
struct Pair {
    char a;
    int b;
};

int main() {
    struct Pair tab[5];

    printf("Rozmiar pojedynczej struktury (sizeof): %zu bajtow\n\n", sizeof(struct Pair));
    
    printf("--- Adresy w pamieci (Hex) ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Element tab[%d]: %p\n", i, (void*)&tab[i]);
    }

    long roznica = (char*)&tab[1] - (char*)&tab[0];

    printf("Roznica adresow (Krok): %ld bajtow\n", roznica);
    printf("Czyste dane: 1 (char) + 4 (int) = 5 bajtow\n");
    printf("Zmarnowane miejsce: %ld bajtow na kazdy element\n", roznica - 5);

    return 0;
}