/*
https://www.acmicpc.net/problem/2743
*/

#include <stdio.h>

int main() {
    char instr[101];
    int cnt=0, i=0;

    scanf("%s", instr);

    while(instr[i] != '\0') {
        cnt++;
        i++;
    }

    printf("%d", cnt);

    return 0;
}