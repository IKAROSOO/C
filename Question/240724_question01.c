#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool palindrome(char *arr) {
    int len = strlen(arr);
    int index_left = 0;
    int index_right = len - 1;

    while(index_left < index_right) {
        if(arr[index_left] != arr[index_right]) {
            return false;
        }
        ++index_left;
        --index_right;
    }

    return true;
}

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;

    for(int i = 3; i*i <= num; i++) {
        if(num % i == 0)
            return false;
    }

    return true;
}

int nextPrime(char *arr) {
    int num = atoi(arr);
    
    while(true) {
        if(isPrime(num) && palindrome(arr)) {
            return num;
        }
        ++num;
    }
}

int main() {
    char N[1000001];
    int Ans;

    scanf("%s", N); 
       
    Ans = nextPrime(N);

    printf("%d", Ans);

    return 0;
}