//
// Created by zzkl27 on 24. 5. 27.
//
#include <stdio.h>
#include <stdlib.h>

#define LOG_ERROR(format, ...) \
    fprintf(stderr, format, __VA_ARGS__)

#define LOOP3(X, ...) \
    printf("%s\n", #X);
#define LOOP2(X, ...) \
    printf("%s\n", #X);\
    LOOP3(__VA_ARGS__)
#define LOOP1(X, ...) \
    printf("%s\n", #X); \
    LOOP2(__VA_ARGS__)
#define LOOP(X, ...) \
    printf("%s\n", #X); \
    LOOP1(__VA_ARGS__)

int main(int argc, char** argv) {
    LOOP(test)
    LOOP(a, b, c, d, e, f, g)

    if (argc < 3) {
        LOG_ERROR("INvalid number of arguments for version %s\n", "2.3.4");
        exit(1);
    }
}