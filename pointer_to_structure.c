#include <stdio.h>
struct Student {
int id;
float marks;
};
int main() {
struct Student s;
struct Student *ptr;
ptr = &s;
printf("Enter ID: ");
scanf("%d", &ptr->id);
printf("Enter Marks: ");
scanf("%f", &ptr->marks);
printf("\nStudent Details\n");
printf("ID = %d\n", ptr->id);
printf("Marks = %.2f\n", ptr->marks);
return 0;
}