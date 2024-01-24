#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],n,i,max=a[0];
	clrscr();
	printf("Enter number of element:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("elemet:-%d\n",a[i]);
	}
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("max is:%d",max);
}
