//WAP to sort array of structures using quick sort

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct student
{
    int roll;
    char name[20];

};
void quicksort_roll(struct student s[],int beg,int end);


void main()
{
    FILE *fp;
    struct student s[11];
    char a[200];
    fp=fopen("Book1.csv","r");
    fgets(a,200,fp);
    printf("%s",a);
    int i=0;
    while(!feof(fp))
    {
        fgets(a,200,fp);
        if(feof(fp))break;
        char *items;
        items=strtok(a,",");
        s[i].roll=atoi(items);

        printf("%d ",s[i].roll);
        items=strtok(NULL,",");
        strcpy(s[i].name,items);
        printf("%s\n",s[i++].name);
    }
    printf("\n//////////////////////////////////////////\n");

    quicksort_roll(s,0,i);

    printf("\n//////////////////////////////////////////\n\n");

    FILE *p;
    p=fopen("output.csv","w");
    for(int k=0;k<i;k++)
    {
        fprintf(p,"%d,%s",s[k].roll,s[k].name);
        printf("%d,%s",s[k].roll,s[k].name);
    }
    fclose(fp);
    fclose(p);
}


void quicksort_roll(struct student s[],int beg,int end)                     //Based on Roll no
{
    if(beg==end)
        return;
    printf("\n##########beg= %d ,end= %d #############",beg,end);
    struct student pivot=s[beg];
    int i=beg+1,j=end-1;
    struct student temp;
    for(;;)
    {
        for(;i<end;i++)
        {


            if(s[i].roll>=pivot.roll)
                break;
        }
        for(;j>=i;--j)
        {

            if(s[j].roll<=pivot.roll)
            {
                temp=s[j];
                s[j]=s[i];
                s[i]=temp;

                break;
            }
        }

        if(i>j)
            break;
    }
    s[beg]=s[j];
    s[j]=pivot;
    quicksort_roll(s,beg,j);
    quicksort_roll(s,j+1,end);
    return;

}

