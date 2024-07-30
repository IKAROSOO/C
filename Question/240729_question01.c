/*
https://www.acmicpc.net/problem/10811
*/

#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int baskets[N];
    for (int i = 0; i < N; i++) {
        baskets[i] = i + 1;
    }

    for (int m = 0; m < M; m++) {
        int i, j;
        scanf("%d %d", &i, &j);
        reverse(baskets, i - 1, j - 1);  // 배열은 0부터 시작하므로 인덱스 조정
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", baskets[i]);
    }
    printf("\n");

    return 0;
}
