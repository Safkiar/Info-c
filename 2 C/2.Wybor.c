#include <stdio.h>
int main() {
    int x = 2;
    switch (x)
    {
        case 1: printf("Wybrano 1"); break;
        case 2: printf("Wybrano 2"); break;
        case 3: printf("Wybrano 3"); break;
        default: printf("Wybrano inną niż 1, 2, 3"); break;
    }
    return 0;
}

