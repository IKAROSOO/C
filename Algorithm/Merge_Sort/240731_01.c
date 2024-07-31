#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 8

int sorted[ARRAY_SIZE];     // 데이터의 임시 저장을 위한 버퍼

void merge(int arr[], int start, int mid, int end) {
    int i, j, k;
    i = start;          // 첫 번째 하위 배열의 시작 인덱스 설정
    j = mid + 1;        // 두 번째 하위 배열의 시작 인덱스 설정
    k = start;          // 정렬된 데이터를 임시로 저장할 sorted 배열의 시작 인덱스 설정

    while(i <= mid && j <= end) {  // 두 하위 배열을 모두 탐색할 때까지 반복
        if(arr[i] <= arr[j]) {     // 첫 번째 배열의 현재 원소가 두 번째 배열의 현재 원소보다 작거나 같으면
            sorted[k] = arr[i];    // 첫 번째 배열의 원소를 sorted 배열에 저장
            i++;                   // 첫 번째 배열의 다음 원소로 이동
        } else {
            sorted[k] = arr[j];    // 두 번째 배열의 원소가 더 작으면, 그 원소를 sorted 배열에 저장
            j++;                   // 두 번째 배열의 다음 원소로 이동
        }
        k++;                       // sorted 배열의 다음 위치로 이동
    }

    while(i <= mid)                // 첫 번째 하위 배열에 남아있는 원소를 모두 sorted에 복사
        sorted[k++] = arr[i++];    // 첫 번째 배열의 원소를 sorted에 저장하고, 두 인덱스 모두 증가

    while(j <= end)                // 두 번째 하위 배열에 남아있는 원소를 모두 sorted에 복사
        sorted[k++] = arr[j++];    // 두 번째 배열의 원소를 sorted에 저장하고, 두 인덱스 모두 증가

    for(int t = start; t <= end; t++)  // sorted 배열의 내용을 원래 배열 arr로 복사
        arr[t] = sorted[t];            // arr의 인덱스 t에 sorted의 값을 복사하여 병합된 결과를 반영
}


void mergeSort(int arr[], int start, int end) {         // 해당 함수로 배열을 각 원소 단위까지 분해
    if(start < end) {
        int mid = (start+end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1, end);
        merge(arr, start, mid, end);
    }
}

void main() {
    srand(time(NULL));
    int arr[ARRAY_SIZE];

    for(int i = 0; i < ARRAY_SIZE; i++) {
        arr[i] = rand()%100;
        printf("%d\n", arr[i]);
    }

    printf("\n--------------------------------\n");

    mergeSort(arr, 0, ARRAY_SIZE-1);

    for(int i = 0; i <ARRAY_SIZE; i++) {
        printf("%d\n", arr[i]);
    }
}

/*

초기 설정:
    i, j, k는 각 배열의 현재 위치를 추적하는 인덱스입니다.
    i는 첫 번째 하위 배열의 시작점(start)에서 시작합니다.
    j는 두 번째 하위 배열의 시작점(mid + 1)에서 시작합니다.
    k는 병합된 결과를 저장할 배열 sorted의 시작점(start)에서 시작합니다.

두 하위 배열의 비교 및 병합:
    두 하위 배열의 현재 위치(i, j)의 요소를 비교합니다.
    작은 값을 sorted[k]에 저장하고, 해당 배열의 인덱스를 증가시킵니다 (i 또는 j).
    k는 항상 증가하여 sorted 배열의 다음 위치로 이동합니다.

나머지 요소 복사:
    첫 번째 하위 배열에 남아있는 요소가 있으면 이를 sorted에 모두 복사합니다 (i가 mid를 넘을 때까지).
    두 번째 하위 배열에 남아있는 요소가 있으면 이를 sorted에 모두 복사합니다 (j가 end를 넘을 때까지).

결과 복사:
    sorted 배열의 병합된 결과를 원래 배열 arr로 복사합니다. 이는 병합 정렬의 병합 결과가 원래 배열에 반영되도록 하기 위함입니다.

*/