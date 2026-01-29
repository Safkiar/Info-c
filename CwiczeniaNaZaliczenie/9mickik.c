/* 
Wczytaj n oraz n liczb całkowitych. Sprawdź,
czy tablica jest niemalejąco posortowana i wypisz odpowiedni komunikat.
 */

#include <stdio.h>

int main() {
    int n;
    printf("Ile liczb chcesz wpisac? ");
    scanf("%d", &n);
    int tab[n]; 
    printf("Podaj %d liczb:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
    int wszystko_ok = 1; 

    for (int i = 0; i < n - 1; i++) {

        if (tab[i] > tab[i+1]) {
            wszystko_ok = 0; 
            break;           
        }
    }
    if (wszystko_ok == 1) {
        printf("Wynik: Tablica JEST posortowana.\n");
    } else {
        printf("Wynik: Tablica NIE jest posortowana.\n");
    }

    return 0;
}