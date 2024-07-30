/*
https://www.acmicpc.net/problem/2743
*/

#include <stdio.h>

int main() {
    char instr[101];
    int cnt=0;

    scanf("%s", instr);

    while(instr[cnt] != '\0') {
        cnt++;
    }

    printf("%d", cnt);

    return 0;
}