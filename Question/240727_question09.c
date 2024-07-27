/*
https://www.acmicpc.net/problem/5597
*/

#include <stdio.h>

int main() {
    int std[31], input[29];
    int a = 0, b;

    for(int i = 0; i < 30; i++) {
        std[i] = i+1;
    }

    for(int i = 0; i < 28; i++) {
        scanf("%d", &input[i]);

        for(int j = 0; j < 30; j++) {
            if(std[j] == input[i])
                std[j] = 0;
        }
    }

    int k=0;
    while(a != 0) {
        if(std[k] != 0)
            a = k+1;
        k++;
    }

    printf("%d", a);

    return 0;
}