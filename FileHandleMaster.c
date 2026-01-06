#include<stdio.h>
#include <stdlib.h>

void write_file();
void append_file();
void read_file();
void copy_file();
void read_words();
void read_chars();



int main(){
  

 int choice;

    do {
        printf("\n================ FILE HANDLING MASTER MENU ================\n");
        printf("1. Write to file (overwrite)\n");
        printf("2. Append to file\n");
        printf("3. Read file (line by line)\n");
        printf("4. Copy file using buffer\n");
        printf("5. Read file word by word\n");
        printf("6. Read file character by character\n");
        printf("7. Exit\n");
        printf("===========================================================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // clear leftover newline


          switch (choice) {
            case 1: write_file(); break;
            case 2: append_file(); break;
            case 3: read_file(); break;
            case 4: copy_file(); break;
            case 5: read_words(); break;
            case 6: read_chars(); break;
            case 7: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }

    } while (choice != 7);

    return 0;
}


// function to write in file 
void write_file() {
    char filename[50], line[500];
    printf("Enter filename: ");
    scanf("%49s", filename);
    getchar();

    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Type your content (Ctrl+D / Ctrl+Z to stop):\n");
    while (fgets(line, sizeof line, stdin) != NULL) {
        fputs(line, fp);
    }

    fclose(fp);
    printf("Saved.\n");
}





void append_file() {
    char filename[50], line[500];
    printf("Enter filename: ");
    scanf("%49s", filename);
    getchar();

    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Type content to append (Ctrl+D / Ctrl+Z to stop):\n");
    while (fgets(line, sizeof line, stdin) != NULL) {
        fputs(line, fp);
    }

    fclose(fp);
    printf("Appended.\n");
}




void read_file() {
    char filename[50], line[500];
    printf("Enter filename: ");
    scanf("%49s", filename);

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("File not found!\n");
        return;
    }

    printf("\n--- File Content ---\n");
    while (fgets(line, sizeof line, fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);
}











   return 0;
}