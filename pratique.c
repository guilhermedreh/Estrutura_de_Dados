#include <stdio.h>

void main() {
    float m[ ] = {1.0, 3.0, 5.75, 2.345 };
    float *ponteiro;

    ponteiro = &m[1];

    printf("%f", ponteiro[2]);    
}
