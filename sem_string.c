#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Good Morning";
    char str3[] = "REVA";
    
    int result = strcmp(str1, str3);
    
    if (result == 0) {
        printf("str1 is equal to str3\n");
    } else if (result < 0) {
        printf("str1 is less than str3\n");
    } else {
        printf("str1 is greater than str3\n");
    }
    
    return 0;
}
