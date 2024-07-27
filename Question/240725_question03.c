/*
https://www.acmicpc.net/problem/2525
*/

#include <stdio.h>

int main() {
    int H, M;
    int input_time;

    scanf("%d %d", &H, &M);
    scanf("%d", &input_time);

    int cvt_H, cvt_M;

    if(input_time >= 60) {
        cvt_H = input_time / 60;
        cvt_M = input_time % 60;
    } else {
        cvt_H = 0;
        cvt_M = input_time;
    }

    H += cvt_H;
    M += cvt_M;
    
    if(M >= 60) {
        M = M - 60;
        H += 1;
    }
    if(H > 23) {
        H =  H - 24;
    }
    

    printf("%d %d", H, M);

    return 0;
}