#include<stdio.h>
main()
{
	int n,m;
	printf("Enter the size of array");
	scanf("%d",&n);
	int a[n];
	printf("Enter the values of the array");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		m=a[i]*a[i];
		printf("%d ",m);
	}
}
