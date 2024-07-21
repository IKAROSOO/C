#include <stdio.h>

void main() {
    FILE *fp;
    int c;

    fp = fopen("./FILE/test.txt", "w");

    if (fp == NULL)
        printf("Failed\n");
    else
        printf("Success\n");
    
    fputc("S", fp);
    fputc("E", fp);
    fputc("X", fp);

    while((c = fgetc(fp)) != EOF) {
        putchar(c);
    }
        
    fclose(fp);
}