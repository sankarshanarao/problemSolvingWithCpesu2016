#include<stdio.h>

void main()
{
    int r,c,i,j;
    printf("Enter the size of the matrix whose elements is to be squared\n");
    scanf("%d %d",&r,&c);
    int A [r][c];
    printf("Enter the matrix\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++){
            scanf("%d",&A[i][j]);
            A[i][j]*=A[i][j];
        }

    printf("\n\nElements Of A squared\n");

    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            printf("%d ",A[i][j]);
        printf("\n");
    }



}
