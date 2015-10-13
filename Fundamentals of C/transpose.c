//Program to compute transpose of a matrix
#include <stdio.h>
main() {
	int A[10][10],B[10][10],m,n,i,j;
	printf("Enter the dimensions of the matrix");
	scanf("%d%d",&m,&n);
	printf("Enter the values of the matrix:");
	for (i = 0; i < m; i ++)
	    for (j = 0; j < n; j++) 
	        scanf("%d",&A[i][j]);
    for (i = 0; i < m; i ++)
	    for (j = 0; j < n; j++) 
	        B[i][j] = A[j][i];
    printf("The transpose of the matrix is : \n");
    for (i = 0; i < m; i++) {
	    for (j = 0; j < n; j++)
	        printf("%d ",B[i][j]);
	        printf("\n");
	}
}

