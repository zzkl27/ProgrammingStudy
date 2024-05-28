//
// Created by zzkl27 on 24. 5. 28.
//
#include <stdio.h>

int main(int argc, char**argv) {
    int var = 1;

    int* int_ptr = NULL;
    int_ptr = &var;

    char* char_ptr = NULL;
    char_ptr = (char*)&var; //var의 메모리 주소를, char형식의 메모리 주소로 변환

    printf(
            "Before arithmetic : int_ptr: %u, char_ptr: %u\n",
            (unsigned int) int_ptr,
            (unsigned int) char_ptr
    );

    int_ptr++; // 4바이트 간격
    char_ptr++; // 1바이트 간격

    printf(
            "After arithmetic : int_ptr: %u, char_ptr: %u\n",
            (unsigned int) int_ptr,
            (unsigned int) char_ptr
    );
}