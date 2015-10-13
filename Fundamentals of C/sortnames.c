//Program to order strings in alphabetical order
#include<stdio.h>
#include<string.h>
main() {
   
    char name[10][20],temp[20];
    int n,i,j;
    printf("Enter the number of names: ");
    scanf("%d",&n);
    printf("Enter the names:\n");
    for (i = 0; i < n; i++) {
        scanf("%s",name[i]);
    }
    for (i = 0; i < n; i++)
        for (j = 0; j < n-1; j++)
            if (strcmp(name[j],name[j+1]) >= 0) {
               strcpy(temp,name[j]);
               strcpy(name[j],name[j+1]);
               strcpy(name[j+1],temp);
            }   
    printf("Sorted names are: \n");
    for (i = 0; i < n; i++)
        printf("%s\n",name[i]);    

}
