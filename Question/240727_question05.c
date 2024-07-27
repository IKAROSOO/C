/*
https://www.acmicpc.net/problem/10818
*/

#include <stdio.h>

int main() {
    int N;
    int max, min;

    scanf("%d", &N);

    int num[N+1];

    for(int i = 0; i < N; i++) {
        scanf("%d", &num[i]);
    }

    max = num[0];
    min = num[0];

    for(int i = 1; i < N; i++) {
        if(num[i] > max)
            max = num[i];
        
        if(num[i] < min)
            min = num[i];
    }

    printf("%d %d", min, max);

    return 0;
}