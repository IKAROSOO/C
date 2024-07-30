/*
https://www.acmicpc.net/problem/3052
*/

#include <stdio.h>

int main() {
    int num[10], cnt = 0;
    int remain[42] = {0};

    for(int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < 10; i++) {
        int nam = num[i]%42;
        remain[nam] = 1;
    }

    for(int i = 0; i < 42; i++) {
        if(remain[i] == 1) {
            cnt++;
        }
    }

    printf("%d", cnt);

    return 0;
}