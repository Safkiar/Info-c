/*
Zaimplementuj strukturę wiadomości z polem type oraz 
union payload zawierającym: tekst char text[256], liczbę 
int number oraz dane binarne unsigned char data[256]; size_t 
length;. Wypisz rozmiar całej struktury oraz policz, ile bajtów oszczędza union w
 porównaniu z wersją bez union (z trzema polami jednocześnie).
*/

#include <stdio.h>


typedef struct {
    unsigned char data[256];
    size_t length;
} BinaryData;


struct MessageUnion {
    int type; 
    union {
        char text[256];      
        int number;          
        BinaryData binary;   
    } payload;
};


struct MessageNoUnion {
    int type;
    char text[256];      
    int number;          
    BinaryData binary;   
};

int main() {
    size_t size_union = sizeof(struct MessageUnion);
    size_t size_struct = sizeof(struct MessageNoUnion);
    
    size_t oszczednosc = size_struct - size_union;

    printf("1. Wersja z UNION :  %zu bajtow\n", size_union);
    printf("2. Wersja bez UNION : %zu bajtow\n", size_struct);
    printf("Dzieki unii oszczedzasz: %zu bajtow na kazdej wiadomosci!\n", oszczednosc);

    return 0;
}