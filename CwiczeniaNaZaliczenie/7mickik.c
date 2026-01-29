/*
Napisz prosty kalkulator działający w pętli: użytkownik wybiera operację
 (+, -, *, /) w switch, podaje dwie liczby, 
a program wypisuje wynik. Wyjście z programu po wyborze opcji q.
*/

#include <stdio.h>

int main() {
    char op;
    double a, b;

    while (1) {
        printf("\nWybierz operacje (+, -, *, /) lub 'q' aby wyjsc: ");
        
        scanf(" %c", &op);
        // usuwanie spacji, \n
        
        if (op == 'q') {
            printf("Bye, bye!\n");
            break; 
        }
        // lf - long float
        printf("Podaj pierwsza liczbe: ");
        scanf("%lf", &a);
        printf("Podaj druga liczbe: ");
        scanf("%lf", &b);

        switch (op) {
            case '+':
                printf("Wynik: %.2lf\n", a + b);

                break;
            case '-':
                printf("Wynik: %.2lf\n", a - b);
                break;
            case '*':
                printf("Wynik: %.2lf\n", a * b);
                break;
            case '/':
                if (b == 0) {
                    printf("Error: Nie dziel przez zero!\n");
                } else {
                    printf("Wynik: %.2lf\n", a / b);
                }
                break;
            default:
                printf("Nieznana operacja! Spróbuj ponownie.\n");
        }
    }

    return 0;
}