//Program to implement string functions from scratch
#include <stdio.h>
main() {
	char str1[20],str2[20],str3[20],len1,len2,len3,i,small,ans = 0;
	printf("Enter two strings: ");
	gets(str1);
	gets(str2);
	//string length
	for (len1 = 0; str1[len1] != '\0'; len1++);
	printf("Length of %s is %d",str1,len1); 
	for (len2 = 0; str2[len2] != '\0'; len2++);
	printf("Length of %s is %d",str2,len2);
    //string concatenation
    for (len3 = 0; len3 < len1; len3++)
        str3[len3] = str1[len3];
    for (i = 0; i < len2; i++)
        str3[len3 + i] = str2[i];
    str3[len3+i] = '\0';
    printf("String concatenation of %s and %s is : %s", str1,str2,str3);
    //string copy
    for (len3 = 0; len3 < len1; len3++)
        str3[len3] = str1[len3];
    str3[len3] = '\0';
    printf("String copy of %s  is : %s", str1,str3);
    //string compare  
    small = (len1 < len2) ? len1 : len2;
    for (i = 0; i < small, i++) {
        if (str1[i] < str2[i]) {
           ans = -1;
           break;
        }
        if (str1[i] > str2[i]) {
           ans = 1;
           break;
        }
    }   
    if (ans == 0 && len1 == len2) 
       printf("%s and %s are equal",str1,str2);
    else if (ans == 0 && len1 < len2)
         ans = 1;
    else if (ans == 0 && len1 > len2)
         ans = -1;
    if (ans == 1)
           printf("%s > %s",str1,str2);
    else if (ans == -1)       
         printf("%s < %s",str1,str2);

}

