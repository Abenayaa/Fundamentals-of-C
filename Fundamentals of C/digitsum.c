//Program to generate sum of digits in a number using while and do-while
//while
#include <stdio.h>
main() {
    int n,sum=0,d;
    printf("Enter number:");
    scanf("%d",&n);
    while (n > 0) {
        d = n % 10;
        n = n / 10;
        sum = sum + d;
    }; 
    printf ("The sum is %d",sum);
}
//do while
/*#include <stdio.h>
main() {
    int n,sum=0,d;
    printf("Enter number:");
    scanf("%d",&n);
    do {
        d = n % 10;
        n = n / 10;
        sum = sum + d;
    } while (n > 0); 
    printf ("The sum is %d",sum);
}*/
