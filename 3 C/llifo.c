#include <stdio.h>

#define N 100

int Stos[N];
int top = -1;

void push(int item);
int pop(void);

int main(void) {
    int item, operacja, petla = 1;

    while (petla == 1) {
        printf("\n1. Operacja Push\n");
        printf("2. Operacja Pop\n");
        printf("Wybierz operację: ");
        scanf("%d", &operacja);

        switch (operacja) {
            case 1:
                printf("\nWprowadź wartość odkładanej liczby: ");
                scanf("%d", &item);
                push(item);
                break;

            case 2:
                item = pop();
                if (item != -1) {
                    printf("\nWartość pobranej liczby wynosi: %d\n", item);
                }
                break;

            default:
                printf("\nNieprawidłowy wybór operacji – powtórz wybór.\n");
                break;
        }

        printf("\nKontynuować? (1-tak / inny znak-nie): ");
        scanf("%d", &petla);
    }

    return 0;
}

int pop(void) {
    int item = -1;

    if (top == -1) {
        printf("\nStos pusty (Stack Underflow)\n");
    } else {
        item = Stos[top];
        Stos[top] = -1;
        top = top - 1;
    }

    return item;
}

void push(int item) {
    if (top >= N - 1) {
        printf("\nStos przepełniony (Stack Overflow)\n");
    } else {
        top = top + 1;
        Stos[top] = item;
    }
}
