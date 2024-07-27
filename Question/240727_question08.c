/*
https://www.acmicpc.net/problem/10813
*/

#include <stdio.h>

int main() {
    int N, M;
    int tmp;

    scanf("%d %d", &N, &M);

    int room[N+1];
    int i[M+1], j[M+1];

    for(int a = 0; a < N; a++)
        room[a] = a+1;

    for(int a = 0; a < M; a++) {
        scanf("%d %d", &i[a], &j[a]);
    }

    
    for(int b = 0; b < M; b++) {
        tmp = room[i[b]-1];
        room[i[b]-1] = room[j[b]-1];
        room[j[b]-1] = tmp;
    }

    for(int a = 0; a < N; a++)
        printf("%d ", room[a]);

    return 0;
}