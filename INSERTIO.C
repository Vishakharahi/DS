#include<stdio.h>
#include<conio.h>
void insertion(int n,int a[])
{
	int j,i=0,tmp;
	for(j=1;j<n;j++)
	{
		i=j-1;
		tmp=a[j];
		while(i>=0&&tmp<a[i])
		{
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=tmp;
	}
	for(i=0;i<n;i++)
	{
		printf("sorted element:-%d\n",a[i]);
	}
}
/*menu()
{
	printf("\n 1..assending order");
	printf("\n 2..dessending order");
	printf("\n 3..exit");
	printf("\n Enter your choice");
} */
void main()
{
	int a[100],n,i,ch;
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
	insertion(n,a);
	getch();
}