//Program to generate maximum digits in a number
#include <stdio.h>
main() {
    int n,max = -1,d;
    printf("Enter number:");
    scanf("%d",&n);
    while (n > 0) {
        d = n % 10;
        n = n / 10;
        if (d > max)
            max = d;
    }; 
    printf ("The maximum digit is %d",max);
}
