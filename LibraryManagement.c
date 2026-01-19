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

void displayBooks()
{
    struct Book b;
    FILE *fp;

    fp = fopen("library.dat", "rb");

    if (fp == NULL) {
        printf("\nNo records found.\n");
        return;
    }

    printf("\n-------------------------------");
    printf("\nID\tTitle\t\tAuthor\t\tQty");
    printf("\n-------------------------------");

    while (fread(&b, sizeof(b), 1, fp))
    {
        printf("\n%d\t%s\t\t%s\t\t%d",
               b.bookId, b.title, b.author, b.quantity);
    }

    printf("\n-------------------------------");

    fclose(fp);
}

void searchBook()
{
    struct Book b;
    FILE *fp;
    int id, found = 0;

    fp = fopen("library.dat", "rb");

    if (fp == NULL) {
        printf("\nFile not found.\n");
        return;
    }

    printf("\nEnter Book ID to search: ");
    scanf("%d", &id);

   