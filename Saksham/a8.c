#include<stdio.h>
#include<string.h>
main()
{
char str1[100],str2[100];
int st1[26],st2[26],k=0;
printf("Enter the two string");
gets(str1);
gets(str2);
for(int i=0;i<26;i++)
{
st1[i]=0;
st2[i]=0;
}
int l1=strlen(str1);
int l2=strlen(str2);
for(int i=0;i<l1;i++)
{
int m=str1[i]-'a';
st1[m]=1;
}
for(int i=0;i<l2;i++)
{
int n=str2[i]-'a';
st2[n]=1;
}
for(int i=0;i<26;i++)
{
if(st1[i]!=st2[i])
{
printf("the strings are not anagram\n");
k=1;
break;
}
}
if(k==0)
printf("Strings are anagram\n");
}

