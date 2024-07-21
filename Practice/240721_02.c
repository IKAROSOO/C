#include <stdio.h>

void swap(int *x, int *y) {
    int temp;
    
    temp = *x;
    *x = *y;
    *y = temp;
}

void main() {
    int a = 10;
    int b = 20;

    printf("Before : a=%d, b=%d\n", a, b);

    swap(&a, &b);

    printf("After : a=%d, b=%d\n", a, b);
}

//포인터 개념의 학습 - 1