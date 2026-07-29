#include <stdio.h>

struct Student {
    char name[20];
    int age;
};

int main()
{
    struct Student s = {"Nithin",18};

    struct Student *ptr = &s;

    printf("%s\n", ptr->name);
    printf("%d\n", ptr->age);

    return 0;
}