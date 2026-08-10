#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct student s[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll number: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nStudent Details\n");

    for (i = 0; i < 5; i++) {
        printf("\nName: %s", s[i].name);
        printf("\nRoll: %d", s[i].roll);
        printf("\nMarks: %.2f\n", s[i].marks);
    }
return 0;
}