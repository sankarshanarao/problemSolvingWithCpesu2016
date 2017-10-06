#include<stdio.h>
main()
{
    printf("%s\n%s\n%d",__FILE__,__DATE__,__STDC_HOSTED__);
    #ifdef __unix___
    printf("Linux");
    #elif __WIN32__
    printf("Windows");
    #endif // __WIN64__
}
