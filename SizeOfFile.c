//WAP to find the size of a file. Create text file and display size of the file.
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>




//
//int * extractnos(char * s);
//{
//    int * nos=(int *)malloc(sizeof(int));
//
//    int n=0;
//    int flag=0;
//    for(int i=0;A[i]!='\0';++i)
//    {
//        if(isdigit(A[i]))
//        {
//            if(flag==0)
//            {
//                nos[n]=(A[i]-'0');
//                ++flag;
//            }
//            else
//                nos[n]=nos[n]*10+(A[i]-'0');
//        }
//        else if(flag==1)
//            flag=0;
//
//
//    }
//
//
//
//
//
//
//
//    return nos;
//}
//


double operatenumber(char * nos)
{
    double sum=0;
    int lon=strlen(nos);
    printf("\n\n\n%s\n",nos);


    for(int i=1;i<=lon;++i)
    {
        char s[lon];
        for(int m=0;m+i-1<lon;++m)
        {
            int z;
            for(z=0;z<i;++z)
                s[z]=nos[z+m];
            sum+=pow(atoi(s),2);
        }
    }


    return sum;
}


void extractnos(char * s)
{

    char nos[100];
    int flag=0;
    for(int i=0;s[i]!='\0';++i)
    {
        if(isdigit(s[i]))
            nos[flag++]=s[i];
        else if(flag)
        {
            nos[flag]='\0';
            printf("\n%lf",operatenumber(nos));
            strcpy(nos,"");
            flag=0;

        }


    }
}

void main()
{
    char * s="abc1def23ghij456klmno7890pqr";
    extractnos(s);
   //peratenumber("123");







    /////////////

}
