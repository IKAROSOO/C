#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main() {
   char tmp[1000];

   printf("Enter Anything : ");
   scanf("%999s", &tmp);    // %999s로 최대입력길이를 제한

   size_t length = strlen(tmp);

   char *str = (char*)malloc((length+1) * sizeof(char));
    if (*str == NULL) {
        printf("Memory Allocate Failed\n");
        return 1;
    }

    strcpy(str, tmp);
    printf("You Enter This : %s", str);

    free(str);
}