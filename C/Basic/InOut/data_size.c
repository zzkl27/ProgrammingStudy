//
// Created by zzkl27 on 24. 7. 12.
//
#include <stdio.h>
#include <stdbool.h>
#include <complex.h>

void main(int argc, char** argv){
    bool a = true;
    complex double b = 10.1 + 3.3*I;
    size_t c = sizeof(b);

    printf("bool(%lu) : %lu\n", sizeof a, sizeof(a));
    printf("bool(%lu) : %lu > %lf + %lfi\n", sizeof b, c, creal(b), cimag(b));
    printf("bool(%lu) : %zu\n", sizeof c, sizeof(c));
}