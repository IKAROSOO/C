#include <stdio.h>

int main() {
    int N;
    int row_cnt = 0, col_cnt = 0;

    scanf("%d", &N);

    char Room[N+1][N+1];

    for(int i = 0; i < N; i++) {
        scanf("%s", Room[i]);
    }

    for(int i = 0; i < N-1; i++) {
        int cnt = 0;
        if(Room[i] == '.' && Room[i+1] == '.') {
            ++cnt;
        }
        if(cnt > 0)
            row_cnt++;
    }

    

    printf("%d %d", row_cnt, col_cnt);

    return 0;
}