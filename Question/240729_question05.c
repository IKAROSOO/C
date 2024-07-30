/*
https://www.acmicpc.net/problem/9086
*/

#include <stdio.h>

int main() {
    int T;

    scanf("%d", &T);

    char testcase[T][1001];
    char res[T][2];

    for(int i = 0; i < T; i++) {
        scanf("%s", testcase[i]);
    }

    for(int i = 0; i < T; i++) {
        res[i][0] = testcase[i][0];
        
        int j=0;
        while(testcase[i][j] != '\0') {
            j++;
        }
        
        res[i][1] = testcase[i][j-1];
    }

    for(int i = 0; i < T; i++)
        printf("%c%c\n", res[i][0], res[i][1]);
    
    return 0;
}