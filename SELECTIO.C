#include<stdio.h>
#include<conio.h>
void Selection(int n,int a[])
{
	int i,j,tmp,min_pos;
	for(i=0;i<n;i++)
	{
		min_pos=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min_pos])
			{
				min_pos=j;
			}
		}
		tmp=a[i];
		a[i]=a[min_pos];
		a[min_pos]=tmp;
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
	printf("Before sorted..\n");
	for(i=0;i<n;i++)
	{

		printf("%d\n",a[i]);
	}
	Selection(n,a);
	printf("Sorted elements..\n");
	for(i=0;i<n;i++)
	{

		printf("%d\n",a[i]);
	}
	getch();
}