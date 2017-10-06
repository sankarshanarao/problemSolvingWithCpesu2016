
#include<stdio.h>
char A[1000];

void strRot(int);

void main()
{
    printf("Enter a string.");
    gets(A);
    printf("\nHow many times would you like to rotate the string.");
    int n;
    scanf("%d",&n);
    strRot(n);
    puts(A);

}

void strRot(int n)
{
    if(n==0)
        return;
    else
    {
        int len=strlen(A);
        char temp;
        temp=A[len-1];
        for(int i=len-1;i>0;i--)
            A[i]=A[i-1];
        A[0]=temp;
        strRot(n-1);
    }
    return;

}
