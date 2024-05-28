//
// Created by zzkl27 on 24. 5. 28.
//
#include <stdio.h>

#define SIZE 10

int main(int argc, char** argv){
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //배열의 첫번째 위치의 주소가 arr에 저장된다. arr은 포인터이다.
    arr[0] = 9;
    arr[1] = 22;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 8;

//    for (int i = 0; i < SIZE; i++) {
//        printf("%d\n", arr[i]);
//    }

    int* ptr = &arr[0];
    for (;;){
        printf("%d\n", *ptr);
        if(ptr == &arr[SIZE -1]){ // 주소가 같으면 멈춘다.
            break;
        }
        ptr++;
    }
}