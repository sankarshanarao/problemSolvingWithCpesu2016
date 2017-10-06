#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int max=0,nos;
    char delim=',';
    char bufer[1000];
    char * w;
    char *college="India";
    char *maxcollege;
    //const char * rand;

    FILE *p;
    p=fopen("Universities.csv","r");
    while(1)
    {
        printf("%s\n",fgets(bufer,1000,p));

        w=strtok(bufer,&delim);
        for(int m=1;m<10;m++)
        {
            w=strtok(NULL,&delim);
            if(m==1)
                strcpy(college,w);


        }
        nos=atoi(w);
        if(nos>max)
        {
            strcpy(maxcollege,college);
            max=nos;
        }

        if(feof(p))
            break;

    }
    printf("No of University with maximum students is %s with %d students.",maxcollege,max);
    fclose(p);
    return 0;
}
