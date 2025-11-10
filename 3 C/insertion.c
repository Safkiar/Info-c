#include <stdio.h>

void print_array(int arr[], int n) {
    int i;
    printf("[ ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

int main(void) {
    int n, wektor[100], licznik, iter, temp;

    printf("Podaj liczbe elementow do sortowania (max 100): ");
    scanf("%d", &n);

    printf("Wprowadź %d liczb calkowitych:\n", n);
    for (licznik = 0; licznik < n; licznik++) {
        printf("  wektor[%d] = ", licznik);
        scanf("%d", &wektor[licznik]);
        printf("  Aktualny stan tablicy po wczytaniu elementu %d: ", licznik);
        print_array(wektor, licznik + 1);
    }

    printf("\n--- POCZATEK SORTOWANIA (insertion sort) ---\n");
    printf("Stan poczatkowy: ");
    print_array(wektor, n);

    for (licznik = 1; licznik < n; licznik++) {
        printf("\nKrok zewnetrzny: licznik = %d (biezacy element: wektor[%d] = %d)\n",
               licznik, licznik, wektor[licznik]);

        iter = licznik;

        if (wektor[iter] >= wektor[iter - 1]) {
            printf("  wektor[%d] = %d jest >= wektor[%d] = %d -> zostaje na swoim miejscu.\n",
                   iter, wektor[iter], iter - 1, wektor[iter - 1]);
        }

        while (iter > 0 && wektor[iter] < wektor[iter - 1]) {
            printf("  Porownuje wektor[%d] = %d z wektor[%d] = %d -> zamiana\n",
                   iter, wektor[iter], iter - 1, wektor[iter - 1]);

            temp = wektor[iter];
            wektor[iter] = wektor[iter - 1];
            wektor[iter - 1] = temp;

            printf("  Stan tablicy po zamianie: ");
            print_array(wektor, n);

            iter--;
        }

        printf("Koniec kroku zewnetrznego dla licznik = %d. Tablica teraz: ", licznik);
        print_array(wektor, n);
    }

    printf("\n--- KONIEC SORTOWANIA ---\n");
    printf("Liczby posortowane rosnaco:\n");
    print_array(wektor, n);

    return 0;
}
