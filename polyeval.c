#include<stdio.h>
#include<math.h>
#include<string.h>

struct term
{
    float coef;
    int power;
    struct term *next=NULL;
};

void cninput(struct term **f)
{

    struct term *temp,*p;
    temp=(struct term *) malloc(sizeof(struct term));
    printf("\nEnter the coefficient:");
    scanf("%f",temp->coef);
    printf("\nEnter the power:");
    scanf("%d",temp->power);
    p=*f;
    if(p==NULL)


    while(p->next!=NULL)
        t=t->next;
    p->next=temp;


}

void main()
{
    struct term *first=NULL;

}
