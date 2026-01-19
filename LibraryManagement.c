#include <stdio.h>
struct Book {
    int bookId;
    char title[50];
    char author[50];
    int quantity;
};

void addBook()
{
    struct Book b;
    FILE *fp;

    fp = fopen("library.dat", "ab");

    if (fp == NULL) {
        printf("File cannot be opened.\n");
        return;
    }

    printf("\nEnter Book ID: ");
    scanf("%d", &b.bookId);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", b.title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b.author);

    printf("Enter Quantity: ");
    scanf("%d", &b.quantity);

    fwrite(&b, sizeof(b), 1, fp);

    fclose(fp);

    printf("\nBook added successfully.\n");
}


