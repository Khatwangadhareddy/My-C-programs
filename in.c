int main() {
   int arr[30],i,n,pos,num;
   printf("Enter the size of the array:\n");
   scanf("%d",&n);
   printf("Enter the elements:");
   for(i=0;i<n;i++) {
       scanf("%d",&arr[i]);
   }
   printf("Enter the position :");
   scanf("%d",&pos);
   printf("Enter the value:");
   scanf("%d",&num);
   for(i=n;i>=pos;i--) {
       arr[i] = arr[i-1];
   }
   arr[pos-1] = num;
   n++;
   printf("Array after insertion is:");
   for(i=0;i<n;i++) {
   printf("%d\t",arr[i]);
   }
    return 0;
}