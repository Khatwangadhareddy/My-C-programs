#include <stdio.h> // Preprocessor Directive
 int main()
3. {
4. int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k; // Declaration
5. printf("Enter rows and column for first matrix: "); // Enter rows and columns for both
6. scanf("%d%d", &r1, &c1);
7. printf("Enter rows and column for second matrix: ");
8. scanf("%d%d",&r2, &c2);
9. if( c1= = r2) // Multiplication possible only if c1 equals r2
10. {
11. printf("\nEnter elements of matrix 1:\n"); /* Storing elements of first matrix. */
12. for(i=0; i<r1; ++i) {
13. for(j=0; j<c1; ++j) {
14. scanf("%d",&a[i][j]);
   
15. printf("\nEnter elements of matrix 2:\n"); /* Storing elements of second matrix. */
16. for(i=0; i<r2; ++i)
17. for(j=0; j<c2; ++j)
18. scanf("%d",&b[i][j]);
19. for(i=0; i<r1; ++i) /* Multiplying matrix a and b and storing in array mult. */
20. {
21. for(j=0; j<c2; ++j)
22. {
23. mult[i][j]=0;
24. for(k=0; k<c1; ++k)
25. mult[i][j] += (a[i][k]*b[k][j]);
26. }
27. }
28. printf("\nOutput Matrix:\n"); /* Displaying the multiplication of two matrix. */
29. for(i=0; i<r1; ++i)
30. {
31. printf("\n");
32. for(j=0; j<c2; ++j)
33. printf("%d\t ",mult[i][j]);
34. }
35. }
36. else
37. printf(“ Multiplication not possible as number of columns of matrix 1 not equal to number of
rows of matrix 2\n ”);
}