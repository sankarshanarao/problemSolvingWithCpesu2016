//WAP to count the number of nodes in a singly linked list
#include<stdio.h>

struct nodes
{
    int info=0;
    struct nodes * next=NULL;
};

void insertnode(struct nodes **f)
{
    struct nodes * temp=(struct nodes*)malloc(sizeof(struct nodes));
    scanf("%d",&(temp->info));
    if(*f==NULL)
        *f=temp;
    else
    {
        struct nodes *iter;
        iter=*f;
        while(iter->next!=NULL)
            iter=iter->next;
        iter->next=temp;
    }
}

void ender(struct nodes ** b)
{
    struct nodes * iter=*b;
    struct nodes * next=NULL;
    while(iter!=NULL)
    {
        next=iter->next;
        free(iter);
        iter=next;
    }
}



void main()
{
    struct nodes * begin=NULL;
    //printf("::::::::::Linked List:::::::::\n1.Insert\n2.Count\n");

    insertnode(&begin);



}
