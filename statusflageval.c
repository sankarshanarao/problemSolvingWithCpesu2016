#include<stdio.h>
#include<math.h>
# pragma pack(1)

void bitfieldanalyser(int n)
{

    for(int i=0;i<n+1;++i)
        switch(n&i)
        {
            case 1:printf("\nzerof");getch();break;
            case 2:printf("\ncarrf");getch();break;
            case 4:printf("\nparif");getch();break;
            case 8:printf("\noverf");getch();break;
            case 16:printf("\nnegef");getch();break;
            default:getch();break;
        }
          //printf("\n%d %d %d",n&i,i,n);
}

main()
{
    int n=0;
    n|=8;
    n|=(int)pow(2,2);
    printf("%d",n);
    bitfieldanalyser(n);
}
