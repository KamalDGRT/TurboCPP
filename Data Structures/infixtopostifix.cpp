#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int isoperand(char);
int precedence(char);
char* InfixToPostfix(char*);

typedef struct Stack
{

    int top;
    char A[50];
    Stack()
    {
       top=-1;
    }
    void push(char x)
    {
	if(top==49)
	  printf(" \n Stack Full.");
	else
	{
	     top=top+1;
	     A[top]=x;
	}

    }

    char pop()
    {
	 char x=0;

	 if(top==-1)
	  printf(" \n Stack Empty.");
	 else
	 {
	    x=A[top];
	    top=top-1;
	 }

	 return x;
    }

    int isempty()
    {
	if(top==-1)
	return 1;
	return 0;
    }

    char peek()
       {
	   char x=0;
	   if(top==-1)
	     printf("\n Stack Empty. ");
	   else
	     x=A[top];
	   return x;
       }
}Stack;




int isoperand(char ch)
{ 
   if(isalpha(ch))
     return 1;
   return 0;
}

int precedence(char ch)
{
    switch (ch)
    {
      case '+':
      case '-': 	return 1;

      case '*':
      case '/':         return 2;

      case '^':         return 3;
    }
    return -1;
}


char* InfixToPostfix(char* Expression)
{

    int i, k, n;

    char E[50]="",x;
    k=0;

    Stack Bstack;

    n=strlen(Expression);

    for (i=0; i<n; i++)
    {
	x=Expression[i];

	if(isoperand(x))
	  {
	    E[k]=x;
	    k++;
	  }

	else if (x=='(')
	     Bstack.push(x);

	else if (x== ')')
	{
	    while (!Bstack.isempty() && Bstack.peek() != '(')
	    {
		E[k]=Bstack.pop();
		k++;
	    }

	    if (!Bstack.isempty() && Bstack.peek() != '(')
		return E;

	    else
		Bstack.pop();
	}

	else
	{

	    while (!Bstack.isempty() && precedence(x) <= precedence(Bstack.peek()))
	       {
		 E[k]=Bstack.pop();
		 k++;
	       }
	    Bstack.push(x);
	}
    }

    while (!Bstack.isempty())
    {
	E[k]=Bstack.pop();
	k++;
    }

    E[k]='\0';
    return E;
}


void main()
{

    char expression[50],*s;

    clrscr();
    printf("Enter a expression : ");
    gets(expression);

    s=InfixToPostfix(expression);

    printf( "\n\n Postfix Expression  :  ");
    puts(s);

    getch();
}