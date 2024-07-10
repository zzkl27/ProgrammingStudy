//
// Created by zzkl27 on 24. 7. 10.
//
#include <stdio.h>

int main(void){
    // %d는 정수형, %f는 실수형, %c는 문자형, %s는 문자열
    // printf에서 %를 출력하려면 %%로 사용
    int a = printf("%%d는 정수형 : %d\n", 86);
    int b = printf("%%f는 실수형 : %f\n", 86.0);
    int c = printf("%%c는 문자형 : %c\n", 'A');
    int d = printf("%%s는 문자열 : %s\n", "Hello, World!");

    printf("prinf 함수의 반환값은 출력한 문자의 개수 : %d, %d, %d, %d\n", a, b, c, d);
}