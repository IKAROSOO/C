#include <stdio.h>

int Plus(int x, int y) {
    int sum;

    sum = x + y;

    return sum;
}

void main() {
    int a = 6, b = 34;
    int result;

    result = Plus(a, b);

    printf("Result of Function 'Plus' : %d", result);
}