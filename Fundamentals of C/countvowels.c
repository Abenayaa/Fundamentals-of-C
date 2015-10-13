//Program to count the number of vowels in a para
#include<stdio.h>
#include<string.h>
main() {
   
    char para[1000],n=0;
    printf("Enter the paragraph: \n");
    gets(para);
    for (i = 0; i < strlen(para); i++) {
        if (para[i] == 'a' || para[i] == 'e' || para[i] == 'i' || para[i] == 'o' || para[i] == 'u')
           n++;
        if (para[i] == 'A' || para[i] == 'E' || para[i] == 'I' || para[i] == 'O' || para[i] == 'U')
           n++;
    }
    printf("The number of vowels is: %d\n",n);

}
