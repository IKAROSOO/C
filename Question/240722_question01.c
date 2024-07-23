#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    char s[10001];
    char *str;
    char ch = '<';
    scanf("%s", s);

    str = s;

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            
            str[i] = str[i-1];
        }
    }

    printf("%s", str);

    return 0;
}
// Input : abcd<efgh<<ijklmnopqrs<<<tuvwx<yuz<
// Output : abcefijklmnoptuvwyu