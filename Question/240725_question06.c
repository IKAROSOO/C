/*
https://www.acmicpc.net/problem/10950
*/

#include <stdio.h>

int main() {
    int T;
    
    scanf("%d", &T);

    int x[T+1], y[T+1];
    int sum[T+1];

    for(int i = 0; i < T; i++) {
        scanf("%d %d", &x[i], &y[i]);
        sum[i] = x[i] + y[i];
    }

    for(int i = 0; i < T; i++) {
        printf("%d\n", sum[i]);
    }

    return 0;
}