#include<stdio.h>
void main()
{
    char A[1000],B[1000];
    printf("Character in string A which are also in B will be removed from A.\nEnter string A:");
    gets(A);
    printf("\nEnter string B:");
    gets(B);
    int upd=0;
    int flag=0;
    for(int i=0;A[i]!='\0';i++)
    {
        flag=0;
        for(int j=0;B[j]!='\0';j++)
        {
            if(A[i]==B[j]){
                flag++;
                break;
            }
        }
        if(!flag)
        {
            A[upd++]=A[i];
        }
    }
    A[upd++]='\0';
    puts(A);

}
