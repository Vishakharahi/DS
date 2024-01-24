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
	if(front==0 && rear==size-1) //simple queue
	{
		printf("\n\tqueueis full");
	}
	else if(rear==front-1) //circuler queue
	{
		printf("\n\tqueue is full");
	}
	else if(front==-1)
	{
		front=0;
		rear=0;
		queue[rear]=val;
	}
	else if(rear==size-1)
	{
		rear=0;
		queue[rear]=val;
	}
	else
	{
		rear++;
		printf("enter value:");
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
		else if(front==rear)
		{
			front=size-1;
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
	else if(rear>=front)
	{
		printf("\n\n\t Elemets of queue ==>");
		for(i=front;i<=rear;i++)
		{
			printf("front:%d\n",front);
			printf("rear:%d\n",rear);
			printf("\n\t\t%d\n",queue[i]);
		}
	}
	else
	{
		for(i=front;i<=size-1;i++)
		{
			printf("\n\t%d\n",queue[i]);
		}
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


