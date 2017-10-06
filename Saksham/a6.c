#include<stdio.h>
#include<string.h>
main()
{
  char s[100],c;
  int k=0;
  printf("Enter the string\n");
  gets(s);
  printf("Enter the character to be searched\n");
  c=getchar();
  int l=strlen(s);
  for(int i=0;i<l;i++)
    { 
      if(s[i]==c)
      k=1;
    }
  if(k==1)
   printf("The character is present in the given string\n");
  else
   printf("Character not present\n");
}
