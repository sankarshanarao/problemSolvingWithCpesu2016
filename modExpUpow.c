#include<stdio.h>
#include<math.h>

main()
{
    int x=5;
    int y=400;
    int m=7;
    int i=pow(x,y);
    printf("%d^%d mod %d = %d\n",x,y,m,i%7);


}
