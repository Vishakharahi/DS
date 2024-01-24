#include<stdio.h>
#include<conio.h>
void Bubble(int n,int a[])
{
	int i,pass,tmp;
	for(pass=0;pass<n-1;pass++)
	{
		for(i=0;i<n-1-pass;i++)
		{
			if(a[i]>a[i+1])
			{
				tmp=a[i];
				a[i]=a[i+1];
				a[i+1]=tmp;
			}
		}
	}
}
void main()
{
	int a[100],n,i;
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
	Bubble(n,a);
	for(i=0;i<n;i++)
	{
		printf("sorted element:-%d\n",a[i]);
	}
	getch();
}