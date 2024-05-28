//
// Created by zzkl27 on 24. 5. 29.
//
#include <stdio.h>

typedef struct{
    int x;
    int y;
} point_t;

typedef struct{
    point_t p1;
    point_t p2;
} line_t;

int main(int argc, char** argv){
    line_t line;

    line_t* p1 = &line;
    point_t* p2 = (point_t*)&line;
    int* p3 = (int*)&line;

    printf("p1 : %p\n", p1);
    printf("p2 : %p\n", p2);
    printf("p3 : %p\n", p3);
    return 0;
}
