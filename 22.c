#include <stdio.h>

struct car {
    char *name;
    float price;
    int speed;
};

void set_price(struct car *c, float price) {
    c->price = price;
}

int main(void) {
    struct car saturn = {.speed = 175, .name = "Saturn SL/2"};

    set_price(&saturn, 799.99);
 printf("name:%s\n",saturn.name);
    printf("Price: %f\n", saturn.price);
}