#include<stdio.h>

void main()
{
    char A[1000];
    int count=0;
    printf("Enter a string\n");
    scanf("%s",A);
    printf("Enter a character to check if it exists in the string.");
    char c;
    fflush(stdin);
    scanf("%c",&c);
    for(int i=0;A[i]!='\0';i++)
        if(A[i]==c)
            count++;
    count?printf("%c occurs %d times in %s",c,count,A):printf("%c does not exist in %s",c,A);
}
