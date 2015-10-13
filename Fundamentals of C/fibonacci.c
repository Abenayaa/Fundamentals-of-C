//Program to generate Fibonacci numbers till an upper limit
#include <stdio.h>
main() {
    int a=1,b=1,c;
    printf("Enter limit:");
    scanf("%d",&n);
    print("1\n1\n");
    while (c<=n) {
        c = a + b;
        printf("%d\n",c);
        a = b;
        b = c;
    }
}
