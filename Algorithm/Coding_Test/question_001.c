#include <stdio.h>

void main() {
    int N, sum=0;

    scanf("%d", &N);

    char input[N+1];

    for(int i = 0; i < N; i++) {
        scanf("%s", input);
        sum += input[i] - '0';
    }

    printf("%d", sum);
}