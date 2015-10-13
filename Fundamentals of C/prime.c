//Program to check if a number is prime
#include <stdio.h>
main() {
    int n,i;
    printf("Enter number:");
    scanf("%d",&n);
    for (i=2; i<n; i++)
        if (n%i == 0)
            break;
    if (i == n)
        printf ("The number is prime");
    else
        printf ("The number is not prime");
}
