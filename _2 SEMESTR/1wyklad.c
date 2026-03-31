// Instrukcje programu (pamięć) są połączone z jednostką sterującą
// Dane programu (pamięć) są połączone z jednostką arytmetyczno-logiczną

// jednostka sterująca jest połącozna z jednostką arytmetyczno-logiczną, w której są akumulatory
// zawiera wejście i wyjście

--- PAMIĘĆ ---
--------------
--------------
--------------
--------------

// Stos (stack) to obszar pamięci, który zostaje automatycznie przydzielony do wykorzystania dla programu
// na stosie przechowywane są:
// automatyczne zmienne lokalne
// argumenty wywołania funkcji
// wartość zwracana przez funkcję
// adres wywołania funkcji

// Rozmiar stosu ustalany jest raz podczas kompilacji programu i nie zmienia się w trakcie jego działania

// Sterta (heap) to cała pamięć przydzielana do wykorzystania przez program podczas jego działania
// na wszystkie dane, jakie musi pzretwarzać dynamicznie
// Kontrolą pamięci sterty zajmuje się program i programista, ktory może przydzielać odpowiednią jej ilość
// dynamicznie podczas działania programu

--------------

// Adres wierzchoła stosu jest przechowywany w specjalnym rejestrze procesora (RSP w przypadku architektury x86-64)
// Sterta i stos rosnąw przeciwnych kierunkach zbliżając się do siebie. Dzięki temu pamięć jest optymalnie wykorzystna
// Segmenty data I BSS (Block Started by Symbol) można ogólnie określić jako pamięć statyczną
// Segment data zawiera zmienne globalne i statyczne zainicjowany w sposób jawny przez programistę do wartości różny od 0.
// Segment BSS zawiera z kolei zmienne globalne i statyczne niezainicjowane w sposób jawny(zainicjowane automatycznie do 0)
// Segment text jest obszarem pamięci, który zawiera kod wykonywalny programu i służy tylko do odczytu

// OS KERNEL SPACE -- user cannot read from nor write to these addresses 
// (down) STACK -- Automatic variables (local to function scope)

// (up) HEAP -- Dynamic memory allocation through mallow/new free/delete 
// BSS - stati variables filled with zeros
// Data -- static variables explicty initialized
// Text -- binary image of the process

--------------

// komórka pamięci 8 bit (1 bytes)
// char - 4 bytes
// int - 2 bytes
// float - 8 bytes
// int *p - 1 byte
// float *wsk - 1 byte

--------------
--WSKAŹNIK----
--------------
--------------
--------------

// Wskaźnik w języku C jest specjalnym typem danych
// Zmienna typu wskaźnikowego przechowuje adres do innej zmiennej w pamięci programu
// Tak jak inne zmienne, należy go zadeklarować oraz zainicjalizować przed pierwszym użyciem
// Dla wskaźnków język C udostępnia specjalną arytmetykę, dzięki której stosunkowo łatwo można operować na adresach w pamięci operacyjnej
// Unarny jednoargumentowy operator * oznacza adresowanie i daje w wyniku zmienną lub funkcję wskazywaną przez argument

--------------

// typ_danych_pod_adresem * zmienna_wskaźnikowa;
// zmienna_wskaźnikowa == adres danych w pamięci
// znak gwiazdki oznacza wskaźnik
// na stosie: wskazywany element pamięci (dane określonego typu) == jakaś zmienna określonego typu

--------------

// deklaracja wskaźnika na zmienną całkowitoliczbową
// int *p;
// p == adres wskazujący na miejsce dla wartości typu int
// wskazywany element == wartość typu int 

// jeżeli przy deklaracji wskaźnika jego wartość nie zostanie zainicjalizowana na adres zmiennej odpowiedniego typu
// zostanie on zainicjowany zgodnie z regułami jak dla zmiennych
// wskaźniki statyczne i zewnętrzne są domyślnie inicjowane zerami
// p = Null - makro null zdefiniowany implementacyjnie
// p = nullptr - predefiniowana stała
// wartość wskaźników lokalnych nie są określone - jako zmienne odkładane automatycznie na stosie są wartościami przypadkowymi

--------------
--OPERATOR----
----ADRESU----
--------------
--------------

// jednoargumentowy operator & podaje adres swojego argumentu
// operator * jest operatorem odwrotnym do & tzn. x = *&y == x = y;
// Adres może być 8, 16, 32 bitowy

--------------

#include <stdio.h>
main() {
    int*p,q;
    p=&q; // ustawienie wskazania z p na q*
    *p = 200; // pośrednie przypisanie wartości do q*
    printf("Wartość w wynosi: %d\n", q);
    return 0;
}

--------------

// nie należy interpretowaćwskaźnika do typu jako nowego typu
// int* a,b,c;
// powstanie jeden a nie trzy wspaźniki do liczby całkowitej;
// b i c będą liczbami; znak * łączymy ze zmienną a nie typem
// lepiej jest pisać gwiazdkę tuż przy zmiennej

int *a, b, c; 

// trzy wskaźniki otrzymamy w tej deklaracji

int *a, *b, *c;

// deklarujmy wskaźnii i zmienne w osobnych liniach 

int *a;
int b,c;

--------------

// operator zwracający wartość przechowanąpod wskazaniem *
// operator zwracający adres zmiennej wskazywanej &
// inkremetacja i dekrementacja wartości wskaźnika p oznacza zmianę adresu o liczbę bajtów wyliczoną wg wskazywanej wartości
// p+ liczba bajtów dla wskazywanego przez p
// p- liczba bajtów dla wskazywanego przez p
// char - 1 bajt 
// int  - 2/4 bajty
// float - 4 bajty

--------------

int *p, q;
p=&q;   // p wskazuje na adres 100
*p=200; // wartość wkazywana przez p = 200
p++;    // p wskazuje na adres 102 

--------------

int *p; 
int q;
p = &q;
q = 200;

// operatory wskaźnikowe

*p++;
*p--;

// operatory arytmetyczne 
(*p)++;

// Wypisanie wartości wskaźnika
printf("Wartość wskaźnika p: %p \n", p)

--------------

// sizeof

char *znak
int a = sizeof znak;
int a = sizeof (char*)
// ilość pamięci dla adresu np 1 byte dla 8bit , 4 byte dla 32bit 

int a = sizeof *znak;
int a = sizeof(char)
// zmienna a ma przypisany rozmiar dla znaku typu char, czyli 1 byte

--------------

// zastosowanie wskaźników

// tablice
// operacje na tekstach
// struktury złożone
// argumenty funkcji

--------------

// c utożsamia wskaźniki i zmienne tablicowe
// tablica zajmuje spójny obszar pamięci oepracyjnej

// w wyniku deklaracji zmiennej tablicowej tworzony jest wskaźnik na początek tej tablicy
// miejsce na elementy jest zajmowane zależnie od rozmiaru tablicy;

// możemy się odnosić
tab[i];
// lub stosując notację i arytmetykę wskaźników;
// przydatne dla tablic otwartych bez wstępnego określania ich długości

--------------

// wskaźnik p inicjalizujemy pod adresem na dwa sposoby

int *p=tab;
// tablicowa zawiera wskaźnik do początku
int *p=tab[0];
// także pierwszy element

tab[i];
// przy każdym użyciu jest wyrażenie &tab[0] + i*sizeof(int) które określa adres i + 1 ego elementu tablicy
int *p=tab;
// p++ czyli bezpośrednie przesunięcie wskaźnika do kolejnego adresu

*p++; // trwale zwiększa wartość
*(p+1) // wskazanie następnego bez wskazania p

--------------

// dwuwymiarowa tablica elementów na stosie

#include <stdio.h>
int main() {
    int tab[3][5]={0};
    int (*wtab)[5]; // wskaźnik na tablicę 2-wymiarową
    wtab=&tab[0][0] // inicjalizacja, adres przejwszego wyrażenia tablicy

    return 0
}

--------------

// czasem zamiast wielu zmiennych warto stosować tablice wskaźnikó do zmiennech tego samego typu
int *tab_wsk[20];  // tablica 20-stu wskaźników do int

// wskaźniki do zmiennych całkowitoliczbowych
int zmienna1 = 0, zmienna2 = 0;
tab_wsk[2]=&zmienna1;
tab_wsk[5]=&zmienna2;

// ustawianie wartości całkowitoliczbowych we wskazanych zmiennych
*tab_wsk[2]=100;
*tab_wsk[5]=300;

--------------

// napis jest tablicą znaków
// wskaźniki pozwalają skrócić operację na łańcuchach

char lan[] = "tekst" // \0 zostanie dodany
char bufor[20];
unsigned h = 0;
char *src = &lan[0];
char *dst = &bufor[0];
h = strlen(src);

// strlen() zwraca liczbę znaków bez znaku \0
// poniżej kopiowanie po znaku wraz ze znakiem \0

for (i=0; i<=h; i++)
    bufor[i] = lan[i];
printf(bufor);

--------------

while (*src){
    *dst = *src 
    src++; dst++;
}
*dst = '\0'

--------------

// podwójny wskaźnik

// wskaźnik na wskaźnik na oryginalny typ
int var = 789;
int *ptr2= &var; 
int **ptr1 = &ptr2;

char *wyraz;
// przez wskaźnik na pierwszą literę mamy łańcuch liter, wyraz
char **zdanie;
// przez zdanie z wielu liter przez wskaźnik na pierwszy wyraz

--------------

// struct

struct Punkt {
    int x, y;
};
int main() {
    struct Punkt pkt = {0,0};
    struct Punkt *wsk = &pkt;
    pkt.x = 1;
    (*wsk).x = 2;
    wsk->x = 3;
    return 0;
}

--------------
---FUNKCJE----
--------------
--------------
--------------

// przekazywanie parametów to przesylanie do wykonania w funkcji wartości stałych lub obliczonyc z wyrażeń użytych w wywołaniu funkcji;
// W języku C istnieją dwie techniki przekazywania parametrów:
// przez wartość
// przez wskaźnik - wartością zmiennej wskaźnikowej jest adres 
// w C++ jest przez referencję

--------------

// Wywołanie przez wskaźnik polega na przekazaniu wskaźnika do funkcji
// nie są tworzone kopie wartości

#include <stdio.h>
#include <math.h>

int rkw(float a, float b, float c, float *x1, float *x2)
{
    float delta;
    delta = b*b - 4*a*c;
    if (delta < 0)
        return 0;
    if (delta == 0){
        *x1 = *x2 = -b/(2*a);
        return 1;
    }
    if (delta > 0){
        *x1 = (-b - sqrt(delta)) / (2*a)
        *x2 = (-b - sqrt(delta)) / (2*a)
        return 2;
    }
}

int main(void) {
    float pa, pb, pc, x1, x2;
    printf("Podaj par. a: ")
    scanf("%f", &pa)
     printf("Podaj par. b: ")
    scanf("%f", &pb)
     printf("Podaj par. c: ")
    scanf("%f", &pc)
    switch(rkw(pa,pb,pc,&x1,&x2)){
        case 0: printf("Brak pierwiastków\n"); break;
        case 1: printf("x1 = x2 = %f\n", x1); break;
        case 2: printf("x1 = %f\n", x1);
                printf("x2 = %f\n", x2);
    }
    return 0;
}

--------------
--stałe-------
-----wskaźniki
--------------
--------------

// wskaźniki na stałą wartość 

const int *a;

// stała wartość wskaźnika

int* const b;

// stały wskaźnik na stałą wartość

const int * const c;

--------------

// typ wskaźnikowy void * - dla uniwersalnej zmiennej z dowolnym adresem

// można go użyć jeżeli typ wartości we wskazywanych komórkach pamięci nie jest
// lub nie musi być znany w momencie definicji wskaźnika
// każdy wskaźnik może być zapisany jako void*
// przekształcenie z pworotem oryginalnego typu przywraca oryginalny wskaźnik

int tab[5] = {0,1};
int *wskTab = tab;
void *wsk = wskTab;
wskTab++;
wskTab = (int*) wsk;
printf("%d", *wskTab);

--------------
-DYNAMICZNIE--
--ZARZĄDZANIE-
---PAMIĘCIĄ---
--------------


// zarządzanie pamięcią statyczne i dynamiczne

// statycznie - ilość pamięci jest wliczona dokładnie wg typów zmiennych na etapie kompilacji
// dynamiczne - program alokuje na starcie ilość pamięci żądaną o ile jest dostępna

// zwalnianie - dealokacja pamięcią
// dla automatycznych - po zakończeniu bloku programu
// dla zmiennych gloabalnych oraz static - po zakończeniu programu

// dynamicznie - pamięć musi być zwolniona jawnie przez instrukcje w trakcie działania programu i automatycznie po zakończeniu

--------------

// DYNAMICZNE - TWORZONE I USUWANE W TRAKCIE DZIAŁANIA PROGRAMU
// nie posiadają nazw - istnieją tylko adresy przydzielonej im pamięci, wskaźnik do tej pamięci
// alokacja na stercie pamięci jest możliwa, o ile taka ilość jest dostępna, jeśli nie to NULL
// używamy do tego malloc() calloc() realloc() z biblioteki stdlib.h

// zwalnianie dealokacja pamięci przydziejolnej dynamicznie
// niepotrzebna pamięc powinna być zwolniona przez free()
// pamięc staje się dostępną do następnyc hwywołąń funkcji alokacji
// do zmiennej wskaźnikowej, której pamięć zwolniono, ma wartość nieokreśloną, trzeba przypisać NULL


--------------

#include <stdio.h>
#include <stdlib.h>
int main(){
    int *wsk;
    wsk=(int*) malloc(sizeof(int));
    if (!wsk) {
        printf("Przydzielenie pamięci jest niemożliwe");
        return 1;
    }

    printf("Podaj liczbę int do zapamiętania:")
    scanf("%d",wsk);
    printf("Zapamiętana liczba to %d:", *wsk);
    free(wsk);
    return 0;
}

--------------

// calloc

void * calloc (int,int)

// argumenty t oliczba bloków pamięci oraz rozmiar pojedynczego bloku pamięci
// wynikiem jest przydzielony obszar pamięci
// jeśli przydziałsię powiódł, funkcja zwraca wskaźnik do pierwszego bajtu bloku
// jeśli nie to NULL
// przydzielone bloki są inicjalizowane zerami

#include <stdio.h>
#include <stdlib.h>
int main()
{
    double *wsk;
    int i, rozmiar=0;
    printf("Podaj liczbe elementow: "); scanf("%i", &rozmiar);
    wsk=(double *) calloc(rozmiar, sizeof(double));
    for (i=0; i<rozmiar; i++) {
        printf("\n Podaj element %d: ", i);
        scanf("%lf", wsk); //Przy ’wsk’ nie piszemy ’&’
	 wsk++;  //Przesunięcie do kolejnego elementu
    }
    wsk = wsk-rozmiar;//przesuniecie wskaznika na 1szy element
    for (i=0; i<rozmiar; i++)
        printf("\n Element [%d] zawiera: %.2f", i, *wsk++);
    wsk -= rozmiar;
    free(wsk);
    return 0;
}

--------------

// realloc  - alokacja

void * realloc (void*,int);

// argumentami funkcji są 
// wskaźnik na obszar pamięci, który był przydzielony przez malloc, calloc, realloc
// nowy rozmiar pamięci w bajtach

// nowy przydział, tylko nowy obszar jest większy, , kopiuje ze starego obszaru, a w rozszerzonej części będą nieustalone wartości
// nowy obszar mniejszy to część danych, która się nie mieści zostanie utracona

--------------

// dealokacja

void free (void*);

// argumentem jest wskaźnik na obszar pamięci przydzielony przez malloc, calloc, realloc
// zwolnienie pamięci wskazanej przez argument
// wskaźnik na obszar zostałzmieniony od momentu przydzielenia pamięci
// obszar pamięci zostałzwolniony przez free()

--------------

// memory leaks
// break lub niewłaściwe używanie funkcji free - program alokuje coraz więcej pamięci i traci do niej dostęp (wskaźniki)
// nadpisanei wskaźnika inną wartością !!! uwaga - zrób kopię
// przydzielenie pamięci do zmiennych lokalnie deklarowanych - usuń przydzielony obszar przed wyjściem z lokalnego bloku, przekazać wartość wskaźnika poza opuszczany blok
// break free

--------------

// dynamiczne alokowanie pamięci na stercie pozwala na tablice o zmiennym rozmiarze, ustalanym podczas działania programu
// tablica - jeden wiersz, sekwencji wskaźników z adresami na komórki z wartościami
// tablica wskaźników wierszy zawierających wskaźniki z komórki z danymi - drugie podejście pozwala konstrować tablice o różnym kształcie, macierzy

--------------

// miejsce | zaleta | wada

// stos: 
// prosta alokacja bez obowiązku zarządzania pamięcią
// ograniczona wielkość tablicy - rozmiar na etapie kompilacji

// sterta - blok:
// efektywne wykorzystanie pamięci, szybkie operacje dostępu
// wymaga właściwej interpretacji układu komórek dla wielu wymiarów

// sterta - tablica wskaźników
// nieregularne tablice
// większy narzut pamięciowy, więcej operacji przy dostępie

--------------
-WSKAŹNIKI----
---NA---------
---FUNKCJĘ----
--------------

// PO SKOMPILOWANIU DEFINICJI FUNKCJI PRZYDZIELANY JEST NA JEJ INSTRUKCJE OBSZAR PAMIĘCI Z PEWNYM ADRESEM POCZĄTKOWYM
// po wywołaniu funkcji realizowany jest skok do instrukcji pod adresem początkowym bloku instrukcji;
// adres startowy bloku instrukcji może zostać odczytany i przydzielony do zmiennej wskaźnikowej - wskaźnik do funkcji

// poprzez taki wskaźnik można funkcjęwywołać i zrealizować jej instrukcję
// wskaźnik do funkcji jak każdy inny wskaźnik można

// skopiować do innej zmienej 
// zapisać w tablicy wskaźników
// przekazać do funkcji jako parametr

// kompilator sprawdza zgodność typów: zwracanej wartości i argumentów

--------------

// funkcje które mają ten sam typ zwracanej wartości ite samy typy argumentów z punktu widzenia wskaźników są traktowane jako identyczne
// nazwa funkcji nie ma znaczenia

// można utworzyć dlablicę wskaźników na funkcję, dla dwu funkcji , tablicę zmiennych wskaźnikowych oraz wywołanie funkcji


