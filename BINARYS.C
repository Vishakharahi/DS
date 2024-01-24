#include<stdio.h>
#include<conio.h>
int BinearSearch(int a[],int n,int key)
{
	int flag=0,mid,l,u;
	l=0;
	u=n-1;
	mid=(l+u)/2;
	while(l<=u && a[mid]!=key)
	{
		if(a[mid]>key)
		{
			u=mid-1;
		}
		else
		{
			l=mid+1;
		}
		mid=(l+u)/2;
	}
	if(a[mid]==key)
	{
		flag=1;

	}
	else
	{
		flag=0;
	}
	return flag;

}
void main()
{
	int a[100],n,i,key;
	char ch;
	clrscr();
	printf("Enter number of element:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("\nEnter search element:");
	scanf("%d",&key);
	if(BinearSearch(a,n,key))
	{
		printf("element found..");
	}
	else
	{
		printf("not found..");
	}
	getch();
}