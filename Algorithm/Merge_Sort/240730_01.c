#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random_arr(int arr[], int size) {
    srand(time(NULL));

    for(int i = 0; i < size; i++) {
        arr[i] = rand();
    }
}

void MergeSort(int arr[], int start, int mid, int end) {
    int i, j, k;

    i = start;
    j = mid+1;
    k = end;

    while(i <= mid && j <= end) {
        if()
    }
}

