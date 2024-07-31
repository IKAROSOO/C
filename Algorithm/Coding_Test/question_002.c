#include <stdio.h>

int main() {
    int N, M=0;
    float sum=0, avg;

    scanf("%d", &N);

    int score[N];

    for(int i = 0; i < N; i++) {
        scanf("%d", &score[i]);
        
        if(score[i] > M)
            M = score[i];
    }

    for(int i = 0; i < N; i++) {
        float normalized = ((float)score[i]/M)*100;
        // printf("%lf\n", normalized);
        sum += normalized;
    }

    avg = sum/N;

    printf("%lf", avg);

    return 0;
}