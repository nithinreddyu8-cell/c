#include <stdio.h>

int main() {
    FILE *fp = fopen("number.bin", "rb");

    int num;

    fread(&num, sizeof(int), 1, fp);

    printf("%d", num);

    fclose(fp);
}