//Program to compute max using ternary operator
#include <stdio.h>
main() {

	int a,b,max;
	printf ("Enter the numbers: ");
	scanf ("%d%d",&a,&b);
	max = (a > b) ? a : b;
	printf("The maximum of the two numbers is %d",max); 
}
