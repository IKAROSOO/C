#include <stdio.h>

void ascending(int arr[], int size) {
    int temp;
    int sorted;

    while(!sorted) {
        sorted = 1;
        for(int i = 0; i < size-1; i++) {
            if(arr[i] > arr[i+1]) {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                sorted = 0;
            }
        }
    }
}

void main() {
    int N, M, cnt = 1, sum = 1;
    int start_index = 1;
    int end_index = 1;

    scanf("%d", &N);
    scanf("%d", &M);
    int material[N];

    for(int i = 0; i < N; i++) {
        scanf("%d", &material[i]);
    }

    ascending(material, N);

    while(end_index != N) {
        if(sum == N) {
            cnt++;
            end_index++;
            sum += end_index;
        } else if(sum > N) {
            sum -= start_index;
            start_index++;
        } else {
            end_index++;
            sum += end_index;
        }
    }

    printf("%d", cnt);
}