/*
https://www.acmicpc.net/problem/15552
*/

#include <stdio.h>

int main() {
    int T;

    scanf("%d", &T);

    int A[T+1], B[T+1];
    int sum[T+1];

    for(int i = 0; i < T; i++) {
        scanf("%d %d", &A[i], &B[i]);
        sum[i] = A[i] + B[i];
    }

    for(int i = 0; i < T; i++)
        printf("%d\n", sum[i]);

    return 0;
}