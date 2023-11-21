#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Good Morning";
    char str2[] = "REVA University";
    char str3[] = "REVA";

    // 1) To reverse the string str1
    printf("1) Reversed str1: ");
    strrev(str1);
    printf("%s\n", str1);

    // 2) To concatenate str1 with str2
    printf("2) Concatenated str1 and str2: %s\n", strcat(str1, str2));

    // 3) To copy str1 to str2
    strcpy(str2, str1);
    printf("3) Copied str1 to str2: %s\n", str2);

    // 4) To identify the length of str2
    int length = strlen(str2);
    printf("4) Length of str2: %d\n", length);

    // 5) To compare str1 with str3
    int comparison = strcmp(str1, str3);
    if (comparison == 0) {
        printf("5) str1 is equal to str3\n");
    } else if (comparison < 0) {
        printf("5) str1 is less than str3\n");
    } else {
        printf("5) str1 is greater than str3\n");
    }

    return 0;
}
