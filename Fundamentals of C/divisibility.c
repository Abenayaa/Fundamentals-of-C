//Program to find numbers from 1 to 100 which are divisible by 2 and not divisible by 3 and 5
#include <stdio.h>
main() {
    int i;
    printf("Numbers from 1 to 100 which are divisible by 2 and not divisible by 3 and 5:\n");
    for (i = 1; i <= 100; i++) {
        if (i%2 == 0 && i%3 != 0 && i%5 != 0)
            printf("%d\n",i);
    }
}