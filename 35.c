#include <stdio.h>

void greet(void)
{
    printf("Hello!\n");
}

void execute(void (*fp)(void))
{
    fp();
}

int main(void)
{
    execute(greet);

    return 0;
}