#include <stdio.h>

#define MAX_N 1000

int arr[MAX_N][MAX_N];
int prefix_sum[MAX_N+1][MAX_N+1];

void preprocess(int N) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            prefix_sum[i][j] = arr[i-1][j-1]
                                + prefix_sum[i-1][j]
                                + prefix_sum[i][j-1]
                                - prefix_sum[i-1][j-1];
        }
    }
}

int getSum(int x1, int y1, int x2, int y2) {
    return prefix_sum[x1][y1]
            - (x1 > 1 ? prefix_sum[x1-1][y1] : 0)
            - (y1 > 1 ? prefix_sum[x1][y1-1] : 0)
            + (x1 > 1 && y1 > 1 ? prefix_sum[x1-1][y1-1] : 0);
}

int main() {
    int N, Q;
    scanf("%d %d", &N, &Q);
    int result[Q];

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    preprocess(N);

    for(int q = 0; q < Q; q++) {
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        result[q] = getSum(x1, y1, x2, y2);
    }

    for(int q = 0; q < Q; q++) {
        printf("%d\n", result[q]);
    }
}