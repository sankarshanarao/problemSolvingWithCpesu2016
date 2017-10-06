//WAP to add pair wise elements in variable length array using pointer notation assuming there are even number of elements. Achieve this using functions
#include<stdio.h>
#include<stdlib.h>

int * addpairwise(int * A,int size)
{
    int *ans=(int *)malloc(sizeof(int *));
    for(int i=0;i<size/2;i++)
        *(ans+i)=*(A+2*i)+*(A+2*i+1);
    return ans;
}








void main()
{
    printf("\nEnter size of number array:\n");
    int size;

    scanf("%d",&size);
    int a[size];

    printf("\nEnter your numbers:\n");
    for(int i=0;i<size;++i)
        scanf("%d",&a[i]);

    int *ans=addpairwise(a,size);

    for(int m=0;m<size/2;++m)
        printf("%d ",*(ans+m));
    free(ans);
}
