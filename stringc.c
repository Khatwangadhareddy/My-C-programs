#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file1, *file2;
    char ch;

    // Opening ex1.txt for reading
    file1 = fopen("ex1.txt", "r");
    if (file1 == NULL) {
        printf("Error opening ex1.txt\n");
        return 1;
    }

    printf("Contents of ex1.txt:\n");
    while ((ch = fgetc(file1)) != EOF) {
        putchar(ch);
    }

    // Closing ex1.txt
    fclose(file1);

    // Opening ex2.txt for reading and ex1.txt for writing
    file2 = fopen("ex2.txt", "r");
    file1 = fopen("ex1.txt", "w");
    if (file2 == NULL || file1 == NULL) {
        printf("Error opening files\n");
        return 1;
    }

    printf("\nContents of ex2.txt copied to ex1.txt:\n");
    while ((ch = fgetc(file2)) != EOF) {
        putchar(ch);
        fputc(ch, file1);
    }

    // Closing files
    fclose(file2);
    fclose(file1);

    // Opening ex1.txt again for appending
    file1 = fopen("ex1.txt", "a");
    if (file1 == NULL) {
        printf("Error opening ex1.txt\n");
        return 1;
    }

    printf("\nAppending ' - Updated' to ex1.txt\n");
    fprintf(file1, " - Updated");

    // Closing ex1.txt
    fclose(file1);

    // Opening ex1.txt for reading
    file1 = fopen("ex1.txt", "r");
    if (file1 == NULL) {
        printf("Error opening ex1.txt\n");
        return 1;
    }

    printf("\nContents of ex1.txt after appending:\n");
    while ((ch = fgetc(file1)) != EOF) {
        putchar(ch);
    }

    // Closing ex1.txt
    fclose(file1);

    return 0;
}
