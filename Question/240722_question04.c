#include <stdio.h>

int main() {
    int A, B, C;
    int mid;

    scanf("%d %d %d", &A, &B, &C);

    mid = A;

    if(mid >= B && mid >= C) {
        if(B >= C)
            mid = B;
        else
            mid = C;
    } else if((mid >= B && C >= mid) || (mid >= C && B >= mid)) {
        mid = A;
    } else {
        if(B >= C)
            mid = C;
        else
            mid = B;
    }

    printf("%d", mid);

    return 0;
}