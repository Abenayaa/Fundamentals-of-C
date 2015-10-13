//Program to sort numbers using bubble sort
#include <stdio.h>
main() {
	int A[10],n,i,j,temp;
	printf("Enter the size of the list");
	scanf("%d",&n);
	printf("Enter the numbers:");
	for (i = 0; i < n; i++)
	    scanf("%d",&A[i]);
    for (i = 0; i < n; i++)
	    for (j = 0; j < n-1; j++) 
	        if (A[j] >= A[j+1]) {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;         
            }
    printf("The sorted list  is : \n");
    for (i = 0; i < n; i++) 
	    printf("%d ",A[i]);
}

