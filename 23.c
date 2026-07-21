#include <stdio.h>

int main(void)
{
    FILE *fp;
    int c;

    fp = fopen("", "r");

    while ((c = fgetc(fp)) != EOF)
        printf("%c", c);

    fclose(fp);
}