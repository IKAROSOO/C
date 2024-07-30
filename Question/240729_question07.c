/*
https://www.acmicpc.net/problem/11720
*/

#include <stdio.h>

int main() {
    int N, sum = 0;

    scanf("%d", &N);

    char input[N+1];
    
    scanf("%s", input);

    for(int i = 0; i < N; i++) {
        sum += input[i]-'0';
    }

    printf("%d", sum);

    return 0;
}