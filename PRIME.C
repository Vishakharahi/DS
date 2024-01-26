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
	return true;
	if(no%2==0)
	return false;
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
void IsGoodPrime(int count)
{
	int *a,i,j=0,multi,sq;
	FILE *fp1;
	a=(int *)malloc(count*sizeof(int));
	fp1=fopen("good.txt","w");
	for(i=3;i<=count;i++)
	{
		if(IsPrime(i)==true)
		{
			a[j]=i;
			j++;
		}
	}
	for(i=1;i<=j;i++)
	{
		sq=a[i]*a[i];
		multi=a[i-1]*a[i+1];
		if(sq>multi)
		{
			printf("%5d",a[i]);
			fprintf(fp1,"%5d",a[i]);
		}
	}
	fclose(fp1);
}
Bool IsHappyPrime(int no)
{
	int sum=0,rem;
	while(no!=1 && no!=4)
	{
		sum=0;
		while(no>0)
		{
			rem=no%10;
			sum=sum+(rem*rem);
			no=no/10;
		}
		no=sum;
	}
	return (no==1);
}

void main()
{
	int i,count;
	FILE * fp,*fp2;
	clrscr();
	printf("\n\t\t GOOD PRIME \n\n");

	IsGoodPrime(100);

	printf("\n\n\n");

	printf("\n\t\t CIRCULER PRIME \n\n");

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

	printf("\n\n");

	printf("\n\t\t HAPPY PRIME \n\n");

	fp2=fopen("happy.txt","w");
	for(i=2;i<=100;i++)
	{
		if(IsHappyPrime(i)==true)
		{
			printf("%5d",i);
			fprintf(fp2,"%5d",i);
		}
	}
	fclose(fp2);
	getch();
}


