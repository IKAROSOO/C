#include <stdio.h>
#include <string.h>

void processString(const char *input, char *output) {
    int outputIndex = 0;
    int inputLen = strlen(input);

    for (int i = 0; i < inputLen; i++) {
        if (input[i] == '<') {
            // '<'가 나오면, output에서 마지막 문자를 지워야 한다.
            if (outputIndex > 0) {
                outputIndex--;  // 인덱스를 줄여서 마지막 문자를 무시하게 한다.
            }
        } else {
            // '<'가 아니면, 문자를 output에 추가한다.
            output[outputIndex++] = input[i];
        }
    }

    output[outputIndex] = '\0';  // null-terminator 추가
}

int main() {
    const char *input = "abcd<efgh<<ijklmnopqrs<<<tuvwx<yuz<";
    char output[100];  // 충분히 큰 배열 선언

    processString(input, output);

    printf("Output: %s\n", output);

    return 0;
}
