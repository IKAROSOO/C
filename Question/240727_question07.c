/*
https://www.acmicpc.net/problem/10810
*/

#include <stdio.h>

int main() {
    int N, M;

    scanf("%d %d", &N, &M);
    int room[N+1];
    int i[M+1], j[M+1], k[M+1];

    for(int a = 0; a < N; a++)
        room[a] = 0;
    
    for(int a = 0; a < M; a++) {
        scanf("%d %d %d", &i[a], &j[a], &k[a]);
    }

    for(int a = 0; a < N; a++) {
        for(int b = 0; b < M; b++) {
            if(a+1 >= i[b] && a+1 <= j[b]) {
                room[a] = k[b];
            }
        }
    }

    for(int a = 0; a < N; a++)
        printf("%d ", room[a]);

    return 0;
}