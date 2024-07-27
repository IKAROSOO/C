/*
https://www.acmicpc.net/problem/2480
*/

#include <stdio.h>

int compare(int a, int b, int c) {
    if(a == b && b == c) {
        return 1;
    } else if(a == b || b == c || c == a) {
        return 2;
    } else {
        return 3;
    }
}

int main() {
    int x, y, z;
    int result, cs;

    scanf("%d %d %d", &x, &y, &z);

    cs = compare(x, y, z);

    switch(cs) {
        case 1:
            result = 10000 + (x*1000);
            break;
        case 2:
            if(x == y) {
                result = 1000 + (x*100);
            } else if(y == z){
                result = 1000 + (y*100);
            } else {
                result = 1000 + (z*100);
            }
            break;
        case 3:
            if(x > y && x > z) {
                result = x*100;
            } else if(y > x && y > z) {
                result = y*100;
            } else {
                result = z*100;
            }
    }

    printf("%d", result);

    return 0;
}