/*
https://www.acmicpc.net/problem/1152
*/

#include <stdio.h>
#include <string.h>

int main() {
    char in_str[1000000];

    scanf("%s", in_str);

    int len = strlen(in_str), i = 0, cnt = 0;

    while(i != len) {
        if(in_str[i] >= 'A' && in_str[i] <= 'z') {
            cnt++;
        }
        i++;
    }

    printf("%d", cnt);

    return 0;
}

/*
#include <stdio.h>

int main() {
    char str[1001];  // 최대 1000자의 문자열을 입력받기 위한 배열
    int word_count = 0;
    int in_word = 0;  // 단어가 현재 열려 있는지 여부를 나타내는 플래그

    // 문자열 입력 받기
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        // 현재 문자가 공백이 아니고, 이전 문자가 공백이라면 새로운 단어 시작
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            if (!in_word) {
                word_count++;
                in_word = 1;  // 단어가 열려 있음
            }
        } else {
            in_word = 0;  // 공백을 만나면 단어가 닫힘
        }
    }

    printf("%d\n", word_count);

    return 0;
}


*/