#include <stdio.h>
struct Address {
char city[50];
char state[50];
int pincode;
};
struct Student {
int rollno;
char name[50];
float marks;
struct Address address;
};
int main() {
struct Student s;
printf("Enter student roll number: ");
scanf("%d", &s.rollno);
printf("Enter student name: ");
scanf("%s", s.name);
printf("Enter marks: ");
scanf("%f", &s.marks);
printf("Enter city: ");
scanf("%s", s.address.city);
printf("Enter state: ");
scanf("%s", s.address.state);
printf("Enter pincode: ");
scanf("%d", &s.address.pincode);
printf("\n--- Student Details ---\n");
printf("Roll Number: %d\n", s.rollno);
printf("Name: %s\n", s.name);
printf("Marks: %.2f\n", s.marks);
printf("Address:\n");
printf("City: %s\n", s.address.city);
printf("State: %s\n", s.address.state);
printf("Pincode: %d\n", s.address.pincode);
return 0;
}