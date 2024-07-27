/*
https://www.acmicpc.net/problem/2562
*/

#include <stdio.h>

int main() {
    int num[10];
    int max, index;

    for(int i = 0; i < 9; i++) {
        scanf("%d", &num[i]);
    }

    max = num[0];
    index= 0;

    for(int i = 0; i < 9; i++) {
        if(num[i] >= max) {
            max = num[i];
            index = i+1;
        }
    }

    printf("%d\n%d", max, index);

    return 0;
}