//Program to find roots of a quadratic equation
#include <stdio.h>
main() {
    float a,b,c,d,r1,r2;
    printf("If the equation is ax^2 + bx + c = 0, enter a,b,c :");
    scanf("%f%f%f",&a,&b,&c);
    d = b*b - 4*a*c;
    if (d < 0)
        printf("Cannot be solved!");
    else {
        r1 = (-b + sqrt(d))/(2*a);
        r2 = (-b + sqrt(d))/(2*a);
        printf("The roots of the equation are %f and %f",r1,r2);
    }
}