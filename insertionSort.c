#include<stdio.h>

int main()
{
    int n;
    printf("Size of the array");
    scanf("%d",&n);
    printf("\nEnter the array\n");
    int A[n];
    for(int i=0;i<n;i++)
            scanf("%d",&A[i]);

    int temp;
    for(int i=1;i<n;i++)
    {
            temp=A[i];
            int j;
            for(j=i-1;j>=0;j--)
                if(temp>A[j])
                    break;
                else
                    A[j+1]=A[j];


            A[j+1]=temp;
            for(int k=0;k<n;k++)
                printf("%d ",A[k]);
            printf("\n");
            getch();


    }



}
