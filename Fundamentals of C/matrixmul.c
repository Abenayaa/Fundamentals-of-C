//Program to compute product of two matrices
#include <stdio.h>
main() {
	int A[10][10],B[10][10],C[10][10],m,n,p,q,i,j,k;
	printf("Enter the dimensions for first matrix");
	scanf("%d%d",&m,&n);
	printf("Enter the dimensions for second matrix");
	scanf("%d%d",&p,&q);
	if (n != p) {
	    printf("Dimensions should match!");
	}
	else {
	    printf("Enter the values of first matrix:");
	    for (i = 0; i < m; i ++)
	        for (j = 0; j < n; j++) 
	            scanf("%d",&A[i][j]);
	   printf("Enter the values of second matrix:");
	   for (i = 0; i < p; i ++)
	        for (j = 0; j < q; j++) 
	            scanf("%d",&B[i][j]);
	   for (i = 0; i < m; i ++)
	        for (j = 0; j < q; j++) { 
	            C[i][j] = 0;
                for (k = 0; k < n; k++)
                    C[i][j] += A[i][k] * B[k][j];
             }
	   printf("The product of the two matrices are: \n");
	   for (i = 0; i < m; i++) {
	       for (j = 0; j < q; j++)
	            printf("%d ",C[i][j]);
	        printf("\n");
	   }
	}
}

