#include<stdio.h>

void endianess_checker(char *p, int n)
{
    for(int i=0;i<n;++i)
        printf("\n%x",*(p++));


}

main()
{
    int flag=0x12345678;
    endianess_checker((char*)&flag,4);
}
