#include<stdio.h>

void main()
{
    int r1,c1,r2,c2,i,j,m;
    printf("Enter 1 by 1 the matrices you want to multiply\n");
    printf("\nEnter the size of the matrix A in rows and columns\n");
    scanf("%d %d",&r1,&c1);

    printf("\nMatrix A: Rows:%d Col:%d\n",r1,c1);

    printf("\nEnter the size of matrix Bin rows and columns\n");
    scanf("%d %d",&r2,&c2);
    int B[r2][c2];
    printf("\nMatrix B: Rows:%d Cols:%d\n",r2,c2);

    if(c1==r2)
    {
    int A[r1][c1];
    int B[r2][c2];
    printf("\nEnter Matrix A\n ");
    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
            scanf("%d",&A[i][j]);
    printf("\nEnter Matrix B\n");
    for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
            scanf("%d",&B[i][j]);

    int C[r1][c2];
    for(i=0;i<r1;i++)
        for(j=0;j<c2;j++)
            C[i][j]=0;

    printf("\n\nA*B\n");


    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            for(m=0;m<r2;m++)
                C[i][j]+=A[i][m]*B[m][j];
                printf("%d ",C[i][j]);
            }
        printf("\n");

    }





    }
    else
        printf("\nERROR: Dimensions of the matrix do not agree for multiplication.\n");



}
