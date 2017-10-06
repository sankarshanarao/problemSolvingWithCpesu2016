#include<stdio.h>
//WAP a program to implement priority queue using array of structures

struct priq
{

    int info;
    int pri;

};

void disp(struct priq * A, int size, int * front,int * rear)
{
    printf("\n\n<<< \n")
    for(int i=rear;i<=front;i++)
        printf("\ninfo=%d , priority=%d",A[i].info,A[i].pri);
    printf("\n>>>\n");
}

void insert(struct priq * A,int size,int * front,int * rear)
{
    struct priq temp;
    printf("\nEnter info:");
    scanf("%d",&temp.info);
    printf("\nEnter priority:")
    scanf("%d",&temp.pri);
    if(front!=size-1)
        if(rear==0)
            printf("Overflow!!!!");
        else
            A[++front]=temp;
    else
    {
        for(int i=rear;i<size;++i)
            A[i-rear]=A[i];
        front=size-rear;
        rear=0;
        A[front]=temp;

    }
    disp(A,size,&front,&rear);
}

void main()
{
    int size,front=0,back=0;

    printf("\nEnter max number of elements in the queue:");
    scanf("%d",&size);
    struct priq A[size];

    int cond=1,choice;

    while(cond)
    {

        printf("\n1.Insert\n2.Delete\n3.Exit")
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insert(A,size,&front,&back);break;
            case 2:delete();break;
            case 3:cond=0;break;
        }

    }




}
