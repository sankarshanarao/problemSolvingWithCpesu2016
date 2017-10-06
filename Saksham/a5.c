#include<stdio.h>
main()
{
	int n,m=0;
	printf("Enter the size of array");
	scanf("%d",&n);
	int a[n],b[n];
	printf("Enter the values of the array");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(n%2==0)
	{
	 for(int i=0;i<n;i++)
	  {
		b[m]=a[i]+a[i+1];
		i++;
		m++;
	  }
	}
	else
	{
	 for(int i=0;i<n;i++)
	  {
		if(i==(n-1))
		 { 
		  b[m]=a[i];
		  m++;
		 }
		else
	  	 {
		  b[m]=a[i]+a[i+1];
	  	  i++;
		  m++;
		 }
	  }
	}
	for(int i=0;i<m;i++)
	 {
	   printf("%d ",b[i]);
 	 }
	
}

