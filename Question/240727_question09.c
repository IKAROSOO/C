/*
https://www.acmicpc.net/problem/5597
*/

#include <stdio.h>

int main() {
    int std[31] = {0}, input[29], dont[3];
    int a = 0;

    for(int i = 0; i < 28; i++) {
        scanf("%d", &input[i]);
        std[input[i]] = 1;
    }

    for(int i = 1; i < 30; i++) {
        if(std[i] == 0)
            printf("%d\n", i);
    }

    return 0;
}