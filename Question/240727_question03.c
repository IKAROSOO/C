/*
https://www.acmicpc.net/problem/10807
*/

#include <stdio.h>

int main() {
    int N, v;
    int cnt = 0;

    scanf("%d", &N);

    int input[N+1];

    for(int i = 0; i < N; i++) {
        scanf("%d", &input[i]);
    }

    scanf("%d", &v);

    for(int i = 0; i < N; i++) {
        if(v == input[i])
            cnt++;
    }

    printf("%d", cnt);

    return 0;
}