//Program using nested-if to find max of three numbers 
#include <stdio.h>
main() {
	int a,b,c;
	printf ("Enter the numbers: ");
	scanf ("%d%d%d",&a,&b,&c);
	if (a > b) {
	    if (a > c)
	        printf("%d is maximum",a);
	}
	else if (b > c) {
	    printf("%d is maximum",b);
	}
	else 
	   printf("%d is maximum",c);
}