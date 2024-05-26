#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
    //정수형 자료형 출력
    printf("<Data Type 정수형>\n");
    printf("char(%ld)의 최소값/최대값 : %d~%d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("unsigned char(%ld)의 최소값/최대값 : %d~%d\n", sizeof(unsigned char), 0, UCHAR_MAX);
    printf("shor(%ld)의 최소값/최대값 : %d~%d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("unsigned short(%ld)의 최소값/최대값 : %d~%d\n", sizeof(unsigned short), 0, USHRT_MAX);
    printf("int(%ld)의 최소값/최대값 : %d~%d\n", sizeof(int), INT_MIN, INT_MAX);
    printf("unsigned int(%ld)의 최소값/최대값 : %d~%u\n", sizeof(unsigned int), 0, UINT_MAX);
    printf("long(%ld)의 최소값/최대값 : %ld~%ld\n", sizeof(long), LONG_MIN, LONG_MAX);
    printf("unsigned long(%ld)의 최소값/최대값 : %d~%lu\n", sizeof(unsigned long), 0, ULONG_MAX);
    printf("long long(%ld)의 최소값/최대값 : %lld~%lld\n", sizeof(long long), LLONG_MIN, LLONG_MAX);
    printf("unsigned long(%ld)의 최소값/최대값 : %d~%llu\n", sizeof(unsigned long long), 0, ULLONG_MAX);
    // 실수형
    printf("\n");
    printf("<Data Type 실수형>\n");
    printf("float(%ld)의 최소값/최대값 : %e~%e\n", sizeof(float), FLT_MIN, FLT_MAX);
    printf("double(%ld)의 최소값/최대값 : %e~%e\n", sizeof(double), DBL_MIN, DBL_MAX);
    printf("long double(%ld)의 최소값/최대값 : %Le~%Le\n", sizeof(long double), LDBL_MIN, LDBL_MAX);
    return 0;
}
