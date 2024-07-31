#include <stdio.h>

void ascending(int arr[], int N) {
    int temp;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N-1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;                
            }
        }
    }
}

void main() {
    int N;

    scanf("%d", &N);

    int arr[N];

    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    ascending(arr, N);

    for(int i = 0; i < N; i++) {
        printf("%d\n", arr[i]);
    }
}