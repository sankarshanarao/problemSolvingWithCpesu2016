#include<stdio.h>
#include<string.h>

int main()
{
    int i=0;
    char delim=',';
    char bufer[1000];
    char * w;
    char *country="India";
    FILE *p;
    p=fopen("Universities.csv","r");
    while(1)
    {
        printf("%s\n",fgets(bufer,1000,p));

        w=strtok(bufer,&delim);
        for(int m=1;m<3;m++)
        {
            w=strtok(NULL,&delim);

        }

        if(feof(p))
            break;
        if(strcmp(w,country)==0)
        {
            printf("%s\n",w);
            i++;
        }





    }
    printf("No of Universities in %s is %d.",country,i);
    fclose(p);
    return 0;
}
