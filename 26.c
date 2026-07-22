#include<stdio.h>
int main(){
    int i=3;
    int*j;
    j=&i;
    printf("address of i=%d\n",&i);
    printf("address of i=%d\n",j);
    printf("address of i=%d\n",&j);
    printf("address of i=%d\n",j);
    printf("address of i=%d\n",i);
    printf("address of i=%d\n",*(&i));
    printf("address of i=%d\n",*j);
    return 0;
}