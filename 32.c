#include <stdio.h>

#define DEBUG

int main() {

    int x = 10;

#ifdef DEBUG
    printf("x = %d\n", x);
#endif

    printf("Program finished.\n");

    return 0;
}