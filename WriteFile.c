#include <stdio.h>

int main() {
    char filename[50];
    char line[500];

    printf("Enter file name: ");
    scanf("%49s", filename);

    getchar();   // clear leftover newline from input buffer

    FILE *fp = fopen(filename, "w");

    if (fp == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    printf("Start typing your content.\n");
    printf("(Press Ctrl+D on Linux/Mac or Ctrl+Z then Enter on Windows to finish)\n\n");

    while (fgets(line, sizeof line, stdin) != NULL) {
        fputs(line, fp);
    }

    fclose(fp);

    printf("\nContent saved successfully.\n");

    return 0;
}
