/*
https://www.acmicpc.net/problem/1655
*/

#include <stdio.h>

int Find_Middle(int *arr, int size) {
    size += 1;
    int mid;
    int temp;

    for(int i = 0; i < size-1; i++) {
        for(int j = 0; j < size-1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    if(size % 2 == 0) {     // 배열이 짝수개일 때
        mid = arr[(size/2)-1];
    } else {
        mid = arr[(size-1)/2];
    }

    return mid;
}

void main() {
    int N;  // 말할 숫자의 갯수

    scanf("%d", &N);

    int num[N+1];
    int mid[N+1];

    for(int i = 0; i < N; i++) {
        scanf("%d", &num[i]);
        mid[i] = Find_Middle(num, i);
    }

    for(int i = 0; i < N; i++)
        printf("%d\n", mid[i]);
}

// 문제대로 하였지만, 시간복잡도에 의해 시간초과로 인한 오답