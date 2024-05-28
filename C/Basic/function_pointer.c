//
// Created by zzkl27 on 24. 5. 29.
//
#include <stdio.h>

int sum(int a, int b){
    return a + b;
}

int subtract(int a, int b){
    return a - b;
}

int main(int argc, char** argv){
    int (*func_ptr)(int, int) = NULL; // 함수 포인터 선언
    func_ptr = &sum; // 함수 포인터에 sum 함수의 주소를 저장
    int result = func_ptr(10, 20); // 함수 포인터를 이용하여 sum 함수 호출
    printf("sum: %d\n", result); // 함수 포인터를 이용하여 sum 함수 호출

    func_ptr = *subtract; // 함수 포인터에 subtract 함수의 주소를 저장
    result = func_ptr(20, 10); // 함수 포인터를 이용하여 subtract 함수 호출
    printf("subtract: %d\n", result); // 함수 포인터를 이용하여 subtract 함수 호출
}