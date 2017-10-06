#include<stdio.h>

void main()
{
    int A[1000];
    printf("Enter an array of numbers:\n");
    printf("How many numbers would you like to enter:");
    int n;
    scanf("%d",&n);
    printf("\nEnter the numbers\n");
    for(int i=0;i<n;i++)
        scanf("%d",&A[i]);
    if(n%2) A[n++]=0;
    printf("\nThe sum of pairs of numbers is...\n");
    for(int i=0;2*i<n;i++)
    {
        A[i]=A[2*i]+A[2*i+1];
        printf("%d ",A[i]);
    }

}
