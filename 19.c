

#include<stdio.h>
int main(){

int i = 5;

// this is executed once, because the loop condition is not checked until
// after the body of the loop runs:

do {
    printf("do-while: i is %d\n", i);
    i++;
} while (i <=5);


}