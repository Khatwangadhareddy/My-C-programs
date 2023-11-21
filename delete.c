#include <stdio.h>

int main() {
   int arr[30], i, n, pos;
   printf("Enter the size of the array (max 30):\n");
   scanf("%d", &n);
   printf("Enter the elements: ");
   for(i = 0; i < n; i++) {
       scanf("%d", &arr[i]);
   }
   printf("Enter the position: ");
   scanf("%d", &pos);
   
   for(i = pos - 1; i < n - 1; i++) {
       arr[i] = arr[i + 1];
   }
   n--;
   printf("Array after deletion is: ");
   for(i = 0; i < n; i++) {
       printf("%d\t", arr[i]);
   }
   return 0;
}