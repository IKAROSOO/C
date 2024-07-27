/*
https://www.acmicpc.net/problem/11021
*/

#include <stdio.h>

int main() {
    int N;
    
    scanf("%d", &N);

    int A[N+1], B[N+1];
    int sum[N+1];

    for(int i = 0; i < N; i++) {
        scanf("%d %d", &A[i], &B[i]);
        sum[i] = A[i] + B[i];
    }

    for(int i =0; i < N; i++) 
        printf("Case #%d: %d\n", i+1, sum[i]);
    
    return 0;
}