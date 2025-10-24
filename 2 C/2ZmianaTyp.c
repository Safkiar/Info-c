#include <stdio.h>

int main(void) {
    int a = 42;

#if __STDC_VERSION__ >= 202311L  // C23 lub nowszy
    typeof(a) b = a;                    // typ jak a
    typeof_unqual(const int) c = 7;     // usuwa kwalifikatory -> int
#else                                   // starsze standardy
    int b = a;
    int c = 7;
#endif

    printf("%d %d\n", b, c);
    return 0;
}