//
// Created by zzkl27 on 24. 5. 27.
//
#include <stdio.h>
#include <string.h>

#define CMD(NAME) \
    char NAME ## _cmd[10] = ""; \
    strcpy(NAME ## _cmd, #NAME);

int main(int args, char** argv) {
    CMD(copy) // copy_cmd 변수에 "copy"를 생성

    printf("출력 : %s", copy_cmd); //copy를 출력
}