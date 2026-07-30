#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

int main() {
    FILE *fp = fopen("student.bin", "rb");

    struct Student s;

    fread(&s, sizeof(struct Student), 1, fp);

    printf("Roll = %d\n", s.roll);
    printf("Marks = %.1f\n", s.marks);

    fclose(fp);
}