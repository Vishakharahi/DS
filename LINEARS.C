#include<stdio.h>
#include<conio.h>
int LinearSearch(int a[],int n,int key)
{
	int flag=0,i;
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			flag=1;
			return flag;
		}
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



	do
	{
		printf("serach element:");
		scanf("%d",&key);
		if(LinearSearch(a,n,key))
		{
			printf("%d found..",key);
		}
		else
		{
			printf("%d not found...",key);
		}
		printf("Do yo want to search[y/n]..");
		scanf(" %c",&ch);
	}while(ch=='y'||ch=='Y');
	getch();
}