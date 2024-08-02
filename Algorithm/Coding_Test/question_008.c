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
    int N;
    int i, j, cnt=0;
    
    scanf("%d", &N);

    int num[N];

    for(int i = 0; i < N; i++)
        scanf("%d", &num[i]);
    
    ascending(num, N);

    for(int a = 0; a < N; a++) {
        int find = num[a];
        i = 0;
        j = N-1;

        while(i < j) {
            if(num[i] + num[j] == find) {
                if(i != a && j != a) {
                    cnt++;
                    break;
                } else if(i == a) {
                    i++;
                } else if(j == a) {
                    j--;
                }
            } else if(num[i] + num[j] < find) {
                i++;
            } else {
                j--;
            }
        }
    }

    printf("%d", cnt);
}