#include <stdio.h>
#include <stdbool.h>
// stdbool  - od c23 nie jest potrzebny ten import 

int main(void) {
    bool warunek = true;
    while(warunek) {
        printf("pętla wykonujes ię dopóki jest warunek true.\n");
        warunek = false;
    }
    printf("Stop\n");
    return 0;
}
