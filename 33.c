#include<stdio.h>
struct student{
    char name[20];
    struct address addr;
};
struct address{
    char city[20];
    int pin;
    
};
int main(){
struct student s={"nithin","chickballapur",562101};
printf("%s\n",s.name);
printf("%s\n",s.addr.city);
printf("%d\n",s.addr.pin);
return 0;
}
