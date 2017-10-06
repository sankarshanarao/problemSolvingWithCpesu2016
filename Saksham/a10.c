#include<stdio.h>
#include<string.h>
main()
{
char str1[100],str2[100],str3[100];
int m=0,k;
printf("Enter the two string");
gets(str1);
gets(str2);
int l1=strlen(str1);
int l2=strlen(str2);
for(int i=0;i<l1;i++)
{
k=0;
for(int j=0;j<l2;j++)
{
if(str1[i]==str2[j])
{
k=1;
}
}
if(k==0)
{
str3[m]=str1[i];
m++;
}
}
printf("New string is\n");
puts(str3);
}

