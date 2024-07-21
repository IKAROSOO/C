#include <stdio.h>

void main() {
    int a = 10;
    int b = 20;

    int *pa = &a, *pb = &b;
    int tmp;

    printf("Before : a = %d, b = %d\n", a, b);

    tmp = *pa;
    *pa = *pb;
    *pb = tmp;

    printf("After : a = %d, b = %d", a, b);
}