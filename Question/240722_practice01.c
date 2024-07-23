#include <stdio.h>
#include <string.h>

int main() {
    char s[10001];
    char output[10001];
    int index = 0;
    int s_len;

    // 문자열 입력 받기
    scanf("%s", s);
    s_len = strlen(s);

    // 문자열 처리
    for (int i = 0; i < s_len; i++) {
        if (s[i] == '<') {
            if (index > 0) {
                index--;
            }
        } else {
            output[index++] = s[i];
            // printf("%s\n", output);
        }
    }

    output[index] = '\0';  // 루프가 끝난 후에 null-terminator 추가

    // 최종 결과 출력
    printf("%s\n", output);

    return 0;
}
