/*
https://www.acmicpc.net/problem/2675
*/

#include <stdio.h>
#include <string.h>

int main() {
    int repeat;

    scanf("%d", &repeat);

    int r_time[repeat];
    char in_str[repeat][1001];

    for(int i = 0; i < repeat; i++) {
        scanf("%d %s", &r_time[i], in_str[i]);
    }

    for(int i = 0; i < repeat; i++) {
        int len = strlen(in_str[i]);

        for(int j = 0; j < len; j++) {

            for(int k = 0; k <r_time[i]; k++) {
                printf("%c", in_str[i][j]);
            }
        }

        printf("\n");;
    }
}