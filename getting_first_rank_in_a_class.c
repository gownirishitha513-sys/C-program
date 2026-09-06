#include <stdio.h>

int main() {
    int n, i, marks, maxMarks = -1, rank = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter marks of student %d: ", i);
        scanf("%d", &marks);

        if (marks > maxMarks) {
            maxMarks = marks;
            rank = i;
        }
    }

    printf("\nStudent %d got 1st rank with %d marks.\n", rank, maxMarks);

    return 0;
}