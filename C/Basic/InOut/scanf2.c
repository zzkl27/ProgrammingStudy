//
// Created by zzkl27 on 24. 7. 11.
//
#include "stdio.h"

int main(void){
    int num1, num2;
    printf("정수를 2개 입력하세요 : ");
    int value = scanf("%d %d", &num1, &num2);
    printf("입력한 정수 : %d, %d\n", num1, num2);
    printf("scanf 함수의 반환값 : %d\n", value); // 에러 여부 확인, 0이면 에러, 1이면 성공
}