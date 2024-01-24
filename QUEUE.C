#include<stdio.h>
#include<conio.h>
#define size 5

int queue[size];
int front=-1;
int rear=-1;

void menu()
{
	printf("\n1.insert");
	printf("\n2.delete");
	printf("\n3.display");
	printf("\n0.exit");
}
void insert()
{
	int val;
	if(rear==size-1)
	{
		printf("queue is full");
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
		rear++;
		printf("\nenter value");
		scanf("%d",&val);
		queue[rear]=val;
	}
}
void deleteq()
{
	if(front==-1)
	{
		printf("\n\t empty queue");
	}
	else
	{
		if(front==rear)
		{
			front=-1,rear=-1;
		}
		else
		{
			printf("deleted successfully");
			front=front++;
		}
	}
}
void display()
{
	int i;
	if(front==-1 && rear==-1)
	{
		printf("\n\t empty queue");
	}
	else
	{
		printf("\n\n\t Elemets of queue ==>");
		for(i=front;i<=rear;i++)
		{
			printf("\n\t\t%d\n",queue[i]);
		}
	}
}
void main()
{
	int n;
	int ch;
	clrscr();

	do
	{
		menu();
			printf("\nenter your choice");
			scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			insert();
			break;
			case 2:
			deleteq();
			break;
			case 3:
			display();
			break;
			case 0:
			break;
			default:
				printf("worugh choice");
		}
	}while(ch!=0);
	getch();
}


