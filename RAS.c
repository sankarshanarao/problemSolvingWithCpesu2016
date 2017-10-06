#include<stdio.h>

char A[1000];  //Used Global String A, cause we are not supposed to use pointers until we have been taught to do so :D!!!

void main()
{
    gets(A);
    //printf("%s %d\n",A,strlen(A));
    strev(0,strlen(A)-1);
    printf(A);


}

void strev(int i,int j)
{
    if(i<j)
    {
        char temp;
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }
    else
        return;
    //printf("%s %d %d \n",A,i,j);
    strev(++i,--j);
    return;
}
