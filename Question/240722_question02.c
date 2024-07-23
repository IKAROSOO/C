/*
https://www.acmicpc.net/problem/12865
*/

#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int N;  // 물품의 수
    int K;  // 버틸 수 있는 무게

    scanf("%d %d", &N, &K);

    int thing[N+1][2];

    for(int i = 0; i < N; i++) {
        scanf("%d %d", &thing[i][0], &thing[i][1]);
    }

    int bp[N+1][K+1];   // BackPack
    for(int i=0; i < N; i++) {
        for(int j=0; j < K; j++) {
            bp[i][j] = 0;
        }
    }

    for(int i=0; i < N; i++) {
        for(int j=0; j < K; j++) {
            if(thing[i][0] <= j) {
                bp[i][j] = max(bp[i-1][j], bp[i-1][j-thing[i][0]] + thing[i][1]);
            } else {
                bp[i][j] = bp[i-1][j];
            }
        }
    }

    printf("%d", bp[N][K]);

    return 0;
}