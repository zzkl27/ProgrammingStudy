//
// Created by zzkl27 on 24. 5. 27.
//

#include <stdio.h>

#define DATA 2 //macro
#define STR "string" //macro
#define MUL(a, b) (a + b) * DATA // 유사 함수 매크로(function-like macro)
#define CODE \
printf("출력 : %d -%s", MUL(x, y), STR); // 매크로로 코드 대체

int main(void) {
    int x = 10;
    int y = 20;
    CODE
}