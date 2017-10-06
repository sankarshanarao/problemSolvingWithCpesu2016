#include<stdio.h>
#include<math.h>

int minsquare(int n)
{
        int diff=n-pow((int)sqrt(n),2);
        if(!diff)
            return 1;
        else
            return 1+minsquare(diff);
}

main()
{
    //float t=100.1;
    printf("%d",minsquare());

}

