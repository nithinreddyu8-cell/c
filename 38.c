#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;
    int choice, searchId, found = 0;

    while (1) {
        printf("\n===== Student File System =====\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            fp = fopen("students.txt", "a");
            if (fp == NULL) {
                printf("File cannot be opened!\n");
                return 1;
            }

            printf("Enter ID: ");
            scanf("%d", &s.id);

            printf("Enter Name: ");
            scanf(" %[^\n]", s.name);

            printf("Enter Marks: ");
            scanf("%f", &s.marks);

            fprintf(fp, "%d %s %.2f\n", s.id, s.name, s.marks);
            fclose(fp);

            printf("Student added successfully!\n");
            break;

        case 2:
            fp = fopen("students.txt", "r");
            if (fp == NULL) {
                printf("No records found!\n");
                break;
            }

            printf("\nID\tName\tMarks\n");
            while (fscanf(fp, "%d %49s %f", &s.id, s.name, &s.marks) == 3) {
                printf("%d\t%s\t%.2f\n", s.id, s.name, s.marks);
            }

            fclose(fp);
            break;

        case 3:
            printf("Enter Student ID: ");
            scanf("%d", &searchId);

            fp = fopen("students.txt", "r");
            if (fp == NULL) {
                printf("File not found!\n");
                break;
            }

            found = 0;
            while (fscanf(fp, "%d %49s %f", &s.id, s.name, &s.marks) == 3) {
                if (s.id == searchId) {
                    printf("\nStudent Found!\n");
                    printf("ID: %d\n", s.id);
                    printf("Name: %s\n", s.name);
                    printf("Marks: %.2f\n", s.marks);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Student not found!\n");

            fclose(fp);
            break;

        case 4:
            printf("Exiting...\n");
            return 0;

        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}