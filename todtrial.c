#include <stdio.h>

int isPrime(int n)
{
    if(n!=2 && n%2==0)
        return 0; //Not Prime
    int c=0;
    for(int i=1;i<=n;i++)
      if(n%i==0)
            c++;
    if(c==2)
        return 1; // Prime
    return 0;
}

int main()
{
    char str[500];
    int n,trial;
    scanf("%d",&n);



    for(trial=0;trial<n;trial++)
    {
        fflush(stdin);
        printf("1");
        fgets(str,500,stdin);
        puts(str);

    }

}
