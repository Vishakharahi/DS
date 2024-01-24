#include<stdio.h>
#include<conio.h>
#define size 50
char stack[size];
int top=-1,curpos=-1,lastpos=-1;
void push(char symbol)
{
	top=top+1;
	stack[top]=symbol;
}
char pop()
{
	char symbol;
	symbol=stack[top];
	top=top-1;
	return(symbol);
}
char read_symbol(char infix[])
{
	curpos=curpos+1;
	return(infix[curpos]);
}
int isp(char x)//in stack priority
{
	int value;
	switch(x)
	{
		case '+':
		case '-':
			value=2;
			break;
		case '*':
		case '/':
			value=4;
			break;
		case '^':
			value=5;
			break;
		case '(':
			value=0;
			break;
		default:
			value=0;
			break;
	}
	return(value);
}
int icp(char x)//in comeing priotity
{
	int value;
	switch(x)
	{
		case '+':
		case '-':
			value=1;
			break;
		case '*':
		case '/':
			value=3;
			break;
		case '^':
			value=6;
			break;
		case '(':
			value=9;
			break;
		case ')':
			value=0;
			break;
		default:
			value=7;
			break;
	}
	return(value);
}
void output(char symbol,char opstr[])
{
	lastpos=lastpos+1;
	opstr[lastpos]=symbol;
	opstr[lastpos+1]='\0';
}
void infixtopostfix(char infix[],char postfix[])
{
	char item,x;
	push('(');

	printf("\nRead symbol\tStack\tOutput");
	while(top>=0)
	{
		item=read_symbol(infix);
		x=pop();

		flushall();
		if((item>=97 && item<=122)||(item>=65 && item<=90))//operand
		{
			push(x);
			output(item,postfix);
		}
		else if(item==')')
		{
			while(x!='(')
			{
				output(x,postfix);
				x=pop();
			}
		}
		else if(isp(x)>=icp(item))
		{
			while(isp(x)>=icp(item))
			{
				output(x,postfix);
				x=pop();
			}
			push(x);
			push(item);
		}
		else if(isp(x)<icp(item))
		{
			push(x);
			push(item);
		}
		printf("\n%c\t\t%s\t\t%s",item,stack,postfix);
	}
}
void main()
{
	int i;
	char infix[100],opstr[100];
	clrscr();
	strcpy(opstr,"");
	printf("Enter infix string:");
	scanf("%s",&infix);
	//printf("\n\tinfix expression is:%c",infix);
	for(i=0;infix[i]!='\0';i++);

	infix[i]=')';
	infix[i+1]='\0';

	printf("fix string is:%s",infix);

	infixtopostfix(infix,opstr);

	printf("\nOutput is:%s",opstr);
	getch();


}