#include<stdio.h>
#include<conio.h>
#define size 5
int top=-1;
int stack[size];
void Push()
{
     printf("\n1..Stack data push \n2..Exit");
}
void Pop()
{
     printf("\n1..Stack data pop \n2..Exit");
}
void Peep()
{
     printf("\n1..Stack data check \n2..Exit");
}
void Display()
{
     printf("\n1..Stack data Display \n2..Exit");
}
void Menu()
{
    printf("\n1.. Push \n2.. Pop  \n3.. Peek \n4.. Count \n5.. Display \n6.. Exit");
}
void push()
{
      int val;
      if(top==size-1)
      {
	     printf("\nStack overflow");
      }
      else
      {
	     printf("\nEnter value :- ");
	     scanf("%d",&val);
	     top++;
	     stack[top] = val;
      }
}
void pop()
{

	if(top==-1)
	{
		printf("\nStack Empty");

	}
	else
	{
		printf("\n%d Delete successfully",stack[top]);
		top--;
	}

}
void peep()
{
       int pos;
       printf("\nEnter Position you want to seek :- ");
       scanf("%d",&pos);
       if(pos>top+1)
       {
		printf("\nPosition is higher then Element..");
       }else if(top-pos+1 < 0)
       {
		printf("\nPosition is Lower then Element..");
       }
       else
       {
		printf("\n%d is at Position of %d",stack[top-pos+1],pos);
       }
}
void display()
{
	int i;
	if(top == -1)
	{
	      printf("\n Stack is Empty");
	}else
	{
	      for(i=top;i>=0;i--)
	      {
		printf("\n%d",stack[i]);
	      }
	}
}
void main()
{
	int ch,p,p1,p2,d;
	do
	{
		clrscr();
		Menu();
		printf("\n\nEnter your choice :- ");
		scanf("%d",&ch);

		switch(ch)
		{

		case 1://Push
		       do
		       {
			    clrscr();
			    printf("\nStack data Enter.. \n");
			    Push();
			    printf("\n\nEnter your chouice :- ");
			    scanf("%d",&p);
			    switch(p)
			    {
				case 1:
				     push();
				     break;
				case 2:
				     break;
				default :
				    printf("\nWrong choice..");
			    }
			     if(p!=2)
			     getch();
		       }while(p!=2);
			break;
		case 2://pop
			do
		       {
			    clrscr();
			    printf("\n\nStack element delete..\n");
			    Pop();
			    printf("\n\nEnter your chouice :- ");
			    scanf("%d",&p1);
			    switch(p1)
			    {
				case 1:
				     pop();
				     break;
				case 2:
				     break;
				default :
				    printf("\nWrong choice..");
			    }
			     if(p1!=2)
			     getch();
		       }while(p!=2);
			break;
		case 3://Peek
			do
		       {
			    clrscr();
			    printf("\nStack data Check.. \n");
			    Peep();
			    printf("\n\nEnter your choice :- ");
			    scanf("%d",&p2);
			    switch(p2)
			    {
				case 1:
				     peep();
				     break;
				case 2:
				     break;
				default :
				    printf("\nWrong choice..");
			    }
			     if(p2!=2)
			     getch();
		       }while(p2!=2);
			break;
		case 4://Count
			printf("\ncount");
			break;
		case 5://Display
			do
		       {
			    clrscr();
			    printf("\n\nStack data..\n");
			    Display();
			    printf("\n\nEnter your choice :- ");
			    scanf("%d",&d);
			    switch(d)
			    {
				case 1:
				     display();
				     break;
				case 2:
				     break;
				default :
				    printf("\nWrong choice..");
			    }
			     if(d!=2)
			    getch();
		       }while(d!=2);
			break;
		case 6:
			break;
		default:
		printf("\n ivalid choice");

	}
	}while(ch!=6);
}