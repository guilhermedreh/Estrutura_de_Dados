#include <stdio.h>

void main() {
    int x = 10;
    int *ponteiro;

    ponteiro = &x;

    (*ponteiro)++;

    printf("%d", x);
    
}
