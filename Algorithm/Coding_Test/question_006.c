#include <stdio.h>

void main() {
    int N, cnt = 1, sum = 1;

    scanf("%d", &N);

    int start_index = 1, end_index = 1;

    while(end_index != N) {
        if(sum == N) {
            cnt++;
            end_index++;
            sum += end_index;
        } else if(sum > N) {
            sum -= start_index;
            start_index += 1;
        } else {
            end_index += 1;
            sum += end_index;
        }
    }

    printf("%d", cnt);
}