//Program to compute sum of two matrices
#include <stdio.h>
main() {
	int A[10][10],B[10][10],C[10][10],m,n,p,q,i,j;
	printf("Enter the dimensions for first matrix");
	scanf("%d%d",&m,&n);
	printf("Enter the dimensions for second matrix");
	scanf("%d%d",&p,&q);
	if (m != p || n != q) {
	    printf("Dimensions of both matrices should match!");
	}
	else {
	    printf("Enter the values of first matrix:");
	    for (i = 0; i < m; i ++)
	        for (j = 0; j < n; j++) 
	            scanf("%d",&A[i][j]);
	   printf("Enter the values of second matrix:");
	   for (i = 0; i < m; i ++)
	        for (j = 0; j < n; j++) 
	            scanf("%d",&B[i][j]);
	   for (i = 0; i < m; i ++)
	        for (j = 0; j < n; j++) 
	            C[i][j] = A[i][j] + B[i][j];
	   printf("The sum of the two matrices are: \n");
	   for (i = 0; i < m; i++) {
	       for (j = 0; j < n; j++)
	            printf("%d ",C[i][j]);
	        printf("\n");
	   }
	}
}
