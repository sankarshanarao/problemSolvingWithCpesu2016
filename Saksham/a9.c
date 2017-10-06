#include<stdio.h>
main()
{
int a[100],l,n;
printf("Enter the number of times to rotate the array\n");
scanf("%d",&n);
printf("Enter the size of array\n");
scanf("%d",&l);
printf("Enter the array elements");
for(int i=0;i<l;i++)
{
scanf("%d",&a[i]);
}
for(int i=0;i<n;i++)
{
int t=a[l-1];
for(int j=(l-1);j>=0;j--)
{
a[j]=a[j-1];
}
a[0]=t;
}
printf("New array is\n");
for(int i=0;i<l;i++)
{
printf("%d ",a[i]);
}
}

 


