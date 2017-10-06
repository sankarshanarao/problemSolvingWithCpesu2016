#include<stdio.h>
void main()
{
    int r,c,i,j,nos;
    printf("Enter the size of the matrices you want to add in row and column\n");
    scanf("%d %d",&r,&c);
    printf("Rows:%d Col:%d\n",r,c);
    int A[3][r][c];
    printf("Enter matrix A\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&A[0][i][j]);

    printf("\nMatrix A\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",A[0][i][j]);
        printf("\n");

    }
    printf("\n\nEnter matrix B\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&A[1][i][j]);
    printf("\nMatrix B\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",A[1][i][j]);
        printf("\n");

    }
    printf("\n\nA+B\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {

            A[2][i][j]=A[0][i][j]+A[1][i][j];
            printf("%d ",A[2][i][j]);
        }
        printf("\n");
    }





}
