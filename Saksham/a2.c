#include<stdio.h>
main()
{
int n1,m1,n2,m2;
printf("Enter the size of the first array");
scanf("%d%d",&n1,&m1);
printf("Enter the size of the second array");
scanf("%d%d",&n2,&m2);
int a[n1][m1],b[n2][m2],c[n1][m1];
if(n1!=n2 || m1!=m2)
{
printf("Substraction not possible\n");
}
else
{
printf("Enter values of first array\n");
for(int i=0;i<n1;i++)
{
	for(int j=0;j<m1;j++)
	 {
		scanf("%d",&a[i][j]);
	 }
}
printf("Enter values of second array\n");
for(int i=0;i<n2;i++)
{
	for(int j=0;j<m2;j++)
	 {
		scanf("%d",&b[i][j]);
	 }
}
for(int i=0;i<n1;i++)
{
	for(int j=0;j<m1;j++)
	 {
		c[i][j]=a[i][j]-b[i][j];
	 }
}
printf("Enter values of resultant array is\n");
for(int i=0;i<n1;i++)
{
	for(int j=0;j<m1;j++)
	 {
		printf("%d",c[i][j]);
	 }
printf("\n");
}
}
}


