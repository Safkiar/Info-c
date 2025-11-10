#include <stdio.h>
char napis[80];
int i;

int main() {
    printf("Wprowadz napis nie wiekszy niz 80 znakow:");
    gets(napis);
    for(i=0; napis[i]; i++){
        printf("%c", napis[i]);
    }
    return 0;
}