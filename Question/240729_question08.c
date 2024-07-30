/*
https://www.acmicpc.net/problem/10809
*/

#include <stdio.h>
#include <string.h>

int main() {
    char voca[101];
    int loc[26];

    for(int i = 0; i < 26; i++)
        loc[i] = -1;

    scanf("%s", voca);

    int len = strlen(voca);

    for(int i = 0; i < len; i++) {
        int num = voca[i] - 'a';

        if(loc[num] == -1)
            loc[num] = i;
    }

    for(int i = 0; i < 26; i++)
        printf("%d ", loc[i]);
    
    return 0;
}