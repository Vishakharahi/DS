#include<stdio.h>
#include<conio.h>
void Maragesort(int n,int m,int a[],int b[],int c[])
{
	int i=0,j=0,k=0;
	while(i<n&&j<m)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;
			k++;
		}
		else
		{
			c[k]=b[j];
			j++;
			k++;
		}

	}
	while(i<n)
	{
		c[k]=a[i];
		i++;
		k++;
	}
	while(j<m)
	{
		c[k]=b[j];
		j++;
		k++;
	}
	for(i=0;i<n+m;i++)
	{
		printf("\n%d\n",c[i]);
	}

}
void main()
{
	int a[100],b[100],c[100],n,m,i,j;
	clrscr();
	printf("Enter number of element..");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter value %d for n: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("Elemets are...\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("Enter number of element...");
	scanf("%d",&m);
	for(j=0;j<m;j++)
	{
		printf("Enter value %d for m: ",j+1);
		scanf("%d",&b[j]);
	}
	printf("Elements are..\n");
	for(j=0;j<m;j++)
	{
		printf("%d\n",b[j]);
	}
	Maragesort(n,m,a,b,c);
	getch();
}