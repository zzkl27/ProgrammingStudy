//
// Created by zzkl27 on 24. 5. 29.
//
#include <stdio.h>

struct sample_t{
    char first;
    char second;
    char third;
    short fourth;
};

void print_size(struct sample_t* sample){
    printf("size of point struct sample_t: %lu\n", sizeof(struct sample_t));
    printf("size of point sample: %lu bytes\n", sizeof(sample));
    printf("size of first: %lu\n", sizeof(sample->first));
    printf("size of second: %lu\n", sizeof(sample->second));
    printf("size of third: %lu\n", sizeof(sample->third));
    printf("size of fourth: %lu\n", sizeof(sample->fourth));
}

void print_bytes(struct sample_t* sample){
    unsigned char* prt = (unsigned char*)sample;

    for (int i = 0; i < sizeof(*sample); i++, prt++){
        printf("0x%x ", (unsigned int)*prt);
    }
    printf("\n");
}

int main(int argc, char** argv){
    struct sample_t sample = {'A', 'b', 'c', 931};
    print_size(&sample);
    print_bytes(&sample);
    return 0;
}