//Program to find minimum and maximum value in an array
#include <stdio.h>
main() {
	int A[10],n,i, min, max;
	printf("Enter the size of the list");
	scanf("%d",&n);
	printf("Enter the numbers:");
	for (i = 0; i < n; i++)
	    scanf("%d",&A[i]);
	min = A[0];
    max = A[0];    
    for (i = 1; i < n; i++) {
	    if (A[i] < min)
	       min = A[i];
	    if (A[i] > max)
           max = A[i];   
    }
    printf("The minimum value is %d\n",min);
    printf("The maximum value is %d\n",max);
}

