#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
typedef enum Bool{false,true}Bool;
Bool IsPrime(const int no)
{
	int i,sq;
	if(no==0||no==1)
	return false;
	if(no==2)
	return 1;
	if(no%2==0)
	return 0;
	sq=sqrt(no);
	for(i=3;i<=sq;i++)
	{
		if(no%i==0)
		return false;
	}
	return true;
}
int NoOfDigits(int no)
{
	int count=0;
	while(no>0)
	{
		no=no/10;
		count++;
	}
	return count;
}
Bool IsCirculerPrime(int no)
{
	int count,div,lastdigit,i;
	count=NoOfDigits(no);
	for(i=1;i<=count;i++)
	{
		if(IsPrime(no)==false)
		return false;
		div=pow(10,count-1);
		lastdigit=no/div;
		no=no%div;
		no=no*10+lastdigit;
	}
	return true;
}
int IsGoodPrime(int count)
{
	int *a,i,j=0,multi,sq;
	a=(int*)malloc(count*sizeof(int));
	for(i=1;i<=count;i++)
	{
		if(IsPrime(i)==true)
		{
			a[j]=i;
			j++;
		}
		return a[j];
	}
	for(i=1;i<=j;i++)
	{

		sq=a[i]*a[i];
		multi=a[i-1]*a[i+1];
		if(sq>multi)
		{
			printf("%5d",a[i]);
		}
	}
	return true;
}
void main()
{
	int i,count,*a[100];
	FILE * fp;
	clrscr();
	//IsGoodPrime(100);
	for(i=2;i<=100;i++)
	{
		if(IsGoodPrime(count)==true)
		{
			printf("%5d",a[i]);
			//fprintf(fp,"%5d",i);
		}
	}
	fp=fopen("circuler.txt","w");
	for(i=2;i<=10000;i++)
	{
		if(IsCirculerPrime(i)==true)
		{
			printf("%5d",i);
			fprintf(fp,"%5d",i);
		}
	}
	fclose(fp);
	getch();
}


