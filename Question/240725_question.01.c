/*
https://www.acmicpc.net/problem/2588
*/

#include <stdio.h>

int main() {
    int x;
    int y;

    int place_1, place_10, place_100;
    int res_1, res_2, res_3, res;

    scanf("%d", &x);
    scanf("%d", &y);

    place_1 = y%10;
    place_10 = (y-place_1)%100 / 10;
    place_100 = (y-(place_1+place_10*10))%1000 / 100;

    res_1 = x*place_1;
    res_2 = x*place_10;
    res_3 = x*place_100;
    res = x*y;

    printf("%d\n", res_1);
    printf("%d\n", res_2);
    printf("%d\n", res_3);
    printf("%d\n", res);

    return 0;
}