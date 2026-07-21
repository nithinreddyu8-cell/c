#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "r");

    int ch;

    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);
}