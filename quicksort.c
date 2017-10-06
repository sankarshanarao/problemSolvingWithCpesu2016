#include<stdio.h>


int A[10000];

void quicksort(int,int);

int main()
{
    int n;
    printf("Size of array:");
    scanf("%d",&n);
    printf("\nEnter the elements\n");
    for(int i=0;i<n;i++)
        scanf("%d",&A[i]);

    ///////////////////////////////////////////////////////
    quicksort(0,n);
    printf("\n");
    for(int i=0;i<n;i++)
        printf("%d ",A[i]);

    return 0;

}

void quicksort(int beg,int end)
{
    if(beg==end)
        return;
    printf("\n##########beg= %d ,end= %d #############",beg,end);
    int pivot=A[beg];
    int i=beg+1,j=end-1,temp;
    for(;;)
    {
        for(;i<end;i++)
        {

            //printf("\ni%d %d",i,A[i]);
            if(A[i]>=pivot)
                break;
        }
        for(;j>=i;--j)
        {
          //  printf("\nj%d %d",j,A[j]);
            if(A[j]<=pivot)
            {
                temp=A[j];
                A[j]=A[i];
                A[i]=temp;

                break;
            }
        }
        //printf("\ni %d j %d p %d",i,j,pivot);
        //printf("\n");
    //for(int m=beg;m<end;m++)
      //  printf("%d ",A[m]);

        //getch();
        if(i>j)
            break;
    }
    A[beg]=A[j];
    A[j]=pivot;
    quicksort(beg,j);
    quicksort(j+1,end);
    return;

}

