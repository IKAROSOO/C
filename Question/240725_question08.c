/*
https://www.acmicpc.net/problem/25314
*/

#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    N = N/4;

    for(int i = 0; i < N; i++) {
        printf("long ");
    }

    printf("int");

    return 0;
}