// 나머지 합 문제

#include <stdio.h>

void main() {
    int N, M, cnt = 0;
    scanf("%d %d", &N, &M);
    int num[N], sum[N+1], C[M];

    sum[0] = 0;

    for(int i = 0; i < M; i++) 
        C[i] = 0;

    for(int i = 0; i < N; i++) {
        scanf("%d", &num[i]);

        sum[i+1] = sum[i] + num[i];
    }

    for(int i = 1; i < N+1; i++) {
        int reminder = sum[i] % M;

        if(reminder < 0)
            reminder += M;

        if(reminder == 0)
            cnt++;
        
        C[reminder]++;
    }
    
    for(int i = 0; i < M; i++) {
        if(C[i] > 1) {
            cnt += C[i] * (C[i]-1) / 2;
        }
    }

    printf("%d", cnt);
}

// 다시 볼 필요 있음