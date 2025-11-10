#include <stdio.h>

int moja_tab[8];

int main(void) {
    int j;
    for (j = 0; j < 8; j++) {
        scanf("%d", &moja_tab[j]);
        printf("moja_tab[%d] == %d\n", j, moja_tab[j]);
    }
    return 0;
}