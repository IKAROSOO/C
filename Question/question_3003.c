/*
https://www.acmicpc.net/problem/3003
*/

#include <stdio.h>

int main() {
    int chess[6];
    int rule[6] = {1, 1, 2, 2, 2, 8};;

    for(int i = 0; i < 6; i++)
        scanf("%d", &chess[i]);
    
    for(int i = 0; i < 6; i++) {
        printf("%d ", rule[i]-chess[i]);
    }

    return 0;
}