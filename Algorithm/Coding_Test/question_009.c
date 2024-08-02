#include <stdio.h>

void main() {
    int N, M;
    
    scanf("%d %d", &N, &M);

    char DNA[N+1];
    for(int i = 0; i < N; i++) {
        scanf("%s", DNA[i]);
    }

    int ACGT[M];
    for(int i = 0; i < M; i++) {
        scanf("%d", &ACGT[i]);
    }
}