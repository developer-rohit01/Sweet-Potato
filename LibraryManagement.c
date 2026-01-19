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

    while (fread(&b, sizeof(b), 1, fp))
    {
        if (b.bookId == id)
        {
            printf("\nBook Found!");
            printf("\nID: %d", b.bookId);
            printf("\nTitle: %s", b.title);
            printf("\nAuthor: %s", b.author);
            printf("\nQuantity: %d", b.quantity);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nBook not found.");

    fclose(fp);
}

void issueBook()
{
    struct Book b;
    FILE *fp;
    int id, found = 0;

    fp = fopen("library.dat", "rb+");

    if (fp == NULL) {
        printf("\nFile not found.\n");
        return;
    }

    printf("\nEnter Book ID to issue: ");
    scanf("%d", &id);

    while (fread(&b, sizeof(b), 1, fp))
    {
        if (b.bookId == id)
        {
            found = 1;

            if (b.quantity > 0)
            {
                b.quantity--;

                fseek(fp, -sizeof(b), SEEK_CUR);
                fwrite(&b, sizeof(b), 1, fp);

                printf("\nBook issued successfully.");
            }
            else
            {
                printf("\nBook not available.");
            }

            break;
        }
    }

    if (!found)
        printf("\nBook ID not found.");

    fclose(fp);
}

void returnBook()
{
    struct Book b;
    FILE *fp;
    int id, found = 0;

    fp = fopen("library.dat", "rb+");

    if (fp == NULL) {
        printf("\nFile not found.\n");
        return;
    }

    printf("\nEnter Book ID to return: ");
    scanf("%d", &id);

    while (fread(&b, sizeof(b), 1, fp))
    {
        if (b.bookId == id)
        {
            b.quantity++;

            fseek(fp, -sizeof(b), SEEK_CUR);
            fwrite(&b, sizeof(b), 1, fp);

            printf("\nBook returned successfully.");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nBook ID not found.");

    fclose(fp);
}
