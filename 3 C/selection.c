#include <stdio.h>

void print_array(int arr[], int n) {
    int i;
    printf("[ ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

int main(void)
{
    int wektor[100], n, licznik, iter, pozycja, temp;

    printf("Podaj liczbe elementow do sortowania (max 100): ");
    scanf("%d", &n);

    printf("Wprowadz %d liczb calkowitych:\n", n);
    for (licznik = 0; licznik < n; licznik++) {
        printf("  wektor[%d] = ", licznik);
        scanf("%d", &wektor[licznik]);
    }

    printf("\nStan poczatkowy tablicy: ");
    print_array(wektor, n);

    printf("\n--- POCZATEK SORTOWANIA (selection sort) ---\n");

    for (licznik = 0; licznik < n - 1; licznik++) {
        pozycja = licznik;
        printf("\nKrok zewnetrzny: licznik = %d (aktualny poczatek nieposortowanej czesci)\n", licznik);
        printf("  Startowo minimalny element to wektor[%d] = %d\n", pozycja, wektor[pozycja]);

        for (iter = licznik + 1; iter < n; iter++) {
            printf("    Porownuje wektor[%d] = %d z aktualnym minimum wektor[%d] = %d\n",
                   iter, wektor[iter], pozycja, wektor[pozycja]);

            if (wektor[iter] < wektor[pozycja]) {
                pozycja = iter;
                printf("    Nowe minimum: wektor[%d] = %d\n", pozycja, wektor[pozycja]);
            }
        }

        if (pozycja != licznik) {
            printf("  Zamiana: wektor[%d] = %d <-> wektor[%d] = %d\n",
                   licznik, wektor[licznik], pozycja, wektor[pozycja]);

            temp = wektor[licznik];
            wektor[licznik] = wektor[pozycja];
            wektor[pozycja] = temp;
        } else {
            printf("  Brak zamiany (element na pozycji %d juz jest minimalny).\n", licznik);
        }

        printf("  Stan tablicy po kroku licznik = %d: ", licznik);
        print_array(wektor, n);
    }

    printf("\n--- KONIEC SORTOWANIA ---\n");
    printf("Liczby posortowane rosnaco:\n");
    print_array(wektor, n);

    return 0;
}
