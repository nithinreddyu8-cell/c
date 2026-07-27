#include<stdio.h>
#include<stdlib.h>
struct packet{
    int size;
    char data[];

};
int main(){
struct packet*p=malloc(sizeof(struct packet)+100);

printf("%d\n",p->size);
return 0;
}