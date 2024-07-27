/*
https://www.acmicpc.net/problem/25304
*/

#include <stdio.h>

int main() {
    int X, N;
    int sum = 0;

    scanf("%d\n", &X);
    scanf("%d\n", &N);

    int a[N+1], b[N+1];

    for(int i = 0; i < N; i++) {
        scanf("%d %d", &a[i], &b[i]);
        sum += a[i]*b[i];
    }

    if(sum == X) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}