//Program to check if it is a palindrome
#include <stdio.h>
main() {
	char str[20],rev[20],len,i;
	printf("Enter the string: ");
	gets(str);
	//string length
	for (len = 0; str[len] != '\0'; len++);
	//string reverse
	for (i = 0; i < len; i++)
	    rev[len-i-1] = str[i];
    rev[len] = '\0';
    //check for palindrome
    for (i = 0; i < len; i++)
        if (str[i] != rev[i])
           break;
    if (i == len) 
       printf ("%s is a palindrome", str);
    else0
       printf ("%s is not a palindrome", str);     
   
}

