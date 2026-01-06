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













   return 0;
}