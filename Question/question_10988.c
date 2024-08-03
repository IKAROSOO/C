/*
https://www.acmicpc.net/problem/10988
*/

#include <stdio.h>
#include <string.h>

int main() {
    char input[101];

    scanf("%s", input);

    int len = strlen(input);

    for(int i = 0; i < len/2; i++) {
        if(input[i] != input[len-1-i]) {
            printf("0");
            return 0;
        }
    }

    printf("1");

    return 0;
}