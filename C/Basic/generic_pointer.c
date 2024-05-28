//
// Created by zzkl27 on 24. 5. 28.
//
#include <stdio.h>

void print_bytes(void* data, size_t length){ //size_t는 sizeof()의 결과물의 자료형
    /* void로 데이터를 받다 다양한 자료형에 대해 동작할 수 있다.
     * size_t는 데이터의 정보를 가지고 있다.
     * */
    char delim = ' ';
    unsigned char* ptr = data; // data를 unsigned char의 주소로 변경, 산술연산 간격인 1byte

    for (size_t i = 0; i < length; i++){
        printf("%c 0x%x", delim, *ptr);
        delim = ',';
        ptr++;
    }
    printf("\n");
}

int main(int argc, char**argv){
    int a = 9;
    double b = 18.9;
    print_bytes(&a, sizeof(int)); //4byte
    print_bytes(&b, sizeof(double)); //8byte
}