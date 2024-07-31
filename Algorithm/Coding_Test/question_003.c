#include <stdio.h>

void main() {
    int N, M;

    scanf("%d %d", &N, &M);
    int num[N];
    int sum[M];

    for(int a = 0; a < N; a++) {
        scanf("%d", &num[a]);
    }

    for(int a = 0; a < M; a++) {
        int i, j;
        scanf("%d %d", &i, &j);

        sum[a] = 0;

        for(int b = i-1; b < j; b++) {
            sum[a] += num[b];
        }
    }

    for(int a = 0; a < M; a++) {
        printf("%d\n", sum[a]);
    }
}