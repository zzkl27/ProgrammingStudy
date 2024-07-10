//
// Created by zzkl27 on 24. 7. 11.
//
#include "stdio.h"

int main(void){
    printf("정수(long long)를 입력하세요 : ");
    long long num;
    int value = scanf("%lld", &num);
    printf("입력한 정수 : %lld\n", num);
    printf("scanf 함수의 반환값 : %d\n", value); // 에러 여부 확인, 0이면 에러, 1이면 성공
}