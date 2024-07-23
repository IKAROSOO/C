#include <stdio.h>

// 최대값을 반환하는 함수
int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int N, K;
    printf("물건의 개수 N과 배낭의 최대 무게 K를 입력하세요: ");
    scanf("%d %d", &N, &K);

    int W[N + 1], V[N + 1];
    printf("각 물건의 무게 W와 가치 V를 입력하세요:\n");
    for (int i = 1; i <= N; ++i) {
        scanf("%d %d", &W[i], &V[i]);
    }

    // DP 배열 초기화
    int dp[N + 1][K + 1];
    for (int i = 0; i <= N; ++i) {
        for (int w = 0; w <= K; ++w) {
            dp[i][w] = 0;
        }
    }

    // DP를 사용하여 최대 가치를 계산
    for (int i = 1; i <= N; ++i) {
        for (int w = 0; w <= K; ++w) {
            if (W[i] <= w) {
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - W[i]] + V[i]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    // 결과 출력
    printf("배낭에 넣을 수 있는 물건들의 최대 가치: %d\n", dp[N][K]);

    return 0;
}
