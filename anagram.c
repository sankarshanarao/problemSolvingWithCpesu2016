#include<stdio.h>
void main()
{
    char A[2][1000];
    int flag=0;
    for(int i=0;i<2;i++)
    {
        printf("Enter string %d:",i+1);
        scanf("%s",A[i]);
    }
    int D[2][26];
    for(int i=0;i<26;i++)
        D[0][i]=D[1][i]=0;



    for(int i=0;i<2;i++)
        for(int j=0;A[i][j]!='\0';j++)
            D[i][A[i][j]-'a']++;

     for(int i=0;i<26;i++)
     {
         printf("%c %d %d\n",i+'a',D[0][i],D[1][i]);
         if(D[0][i]!=D[1][i])
            flag++;
     }
    flag?printf("%s is not anagram of %s",A[0],A[1]):printf("%s is anagram of %s",A[0],A[1]);



}
