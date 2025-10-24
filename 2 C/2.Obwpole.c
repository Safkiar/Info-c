#include <stdio.h>
int main() {
    // identyfikator / zmienne
    double promien, obwod,pole;
    double pi = 3.1415;
    // stałe, napisy
    printf("Podaj promień: ");
    scanf("%lf", &promien);

    pole = promien * promien * pi;
    obwod = 2.0 * promien * pi;

    printf("pole powierzchni: %f\n", pole);
    printf("obwód: %f\n", obwod);

    return 0;
}