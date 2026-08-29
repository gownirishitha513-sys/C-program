#include <stdio.h>
#include <string.h>

int main() {
    int n, i, found = 0;
    char books[100][100];
    char search[100];

    printf("Enter number of books in the rack: ");
    scanf("%d", &n);

    printf("Enter book names:\n");
    for (i = 0; i < n; i++) {
        scanf(" %[^\n]", books[i]);
    }

    printf("Enter the book to find: ");
    scanf(" %[^\n]", search);

    for (i = 0; i < n; i++) {
        if (strcmp(books[i], search) == 0) {
            printf("Book found at position %d in the rack.\n", i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book not found in the rack.\n");
    }

    return 0;
}