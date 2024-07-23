#include <stdio.h>

int sum(int a, int b) {
    return a+b;
}

int main() {
    int num;

    scanf("%d", &num);

    int x[num+1], y[num+1];
    for(int i = 0; i < num; i++)
        x[i] = y[i] = 0;
    
    int result[num+1];
    
    for(int i = 0; i < num; i++) {
        scanf("%d %d", &x[i], &y[i]);
        result[i] = sum(x[i], y[i]);
    }

    for(int i = 0; i < num; i++)
        printf("%d\n", result[i]);

    return 0;
}

// Hello World, Judge 1!