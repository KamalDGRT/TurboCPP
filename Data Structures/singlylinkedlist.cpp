#include<stdio.h>
#include<conio.h>
#include<alloc.h>


//self-referential structure
typedef struct Node
{
    int data;

    struct Node *Next;

}Node;

//bare necessities
int nsize=sizeof(Node);
Node *Head=NULL;

//prototype of the operations that will be performed
void InsAtBeg(int);
void InsAtEnd(int);
void InsAtPos(int,int);
int Count();
void Search(int);
void Delete(int); //By value
void Delete1(int);
void Display();
void Insert();



void main()
{

   char mc,ic,dc;

   clrscr();

   printf("\t\t Operations on a Singly Linked List \n");
   printf("\t\t ---------- -- - ------ ------ ---- \n");


   printf("\n\n\t 1. Insert \n");
   printf("\t 2. Delete \n");
   printf("\t 3. Count \n");
   printf("\t 4. Search \n");
   printf("\t 5. Display \n");
   printf("\n\t  Enter your choice :  ");

   mc=getch();

   switch(mc)
   {
      case '1' :  Insert();   break;
      case '2' :  Delete();   break;
      case '3' :  Count(); break;
      case '4' :  Searc(); break;
      case '5' :  Display(); break;

   }


   InsAtBeg(12);
   InsAtBeg(13);
   InsAtBeg(14);
   Display();
   printf("\n");
   InsAtEnd(12);
   InsAtEnd(16);


   InsAtPos(1,55);

   Display();
   printf("\n");

   Delete1(3);
   Display();
   printf("\nNo of nodes : %d",Count());


   getch();


}

int Count()
{
      int c=0;
      Node *T=Head;

      while(T!=NULL)
	{
	   c=c+1;
	   T=T->Next;
	}
      return c;
}

void InsAtBeg(int x)
{
    Node *N=(Node*)malloc(nsize);
    N->data=x;

    if(Head==NULL)
      N->Next=NULL;
    else
      N->Next=Head;

    Head=N;
}

void InsAtEnd(int x)
{
    Node *N=(Node*)malloc(nsize);

    N->data=x;
    N->Next=NULL;

    if(Head==NULL)
	Head=N;
    else
    {
	Node *T=Head;

	while(T->Next!=NULL)
	      T=T->Next;

	T->Next=N;
    }
}

void InsAtPos(int p, int x)
{

    int size=Count(),i;

    if(p<1 || p>size+1)
      printf("\n\nInvalid Position.");
    else
    {
	Node *N = (Node*)malloc(nsize),*T;

	N->data=x;
	N->Next=NULL;

	if(p==1)
	{
	    N->Next=Head;
	    Head=N;
	}
	else
	{
	   T=Head;

	   for(i=2; i<=(p-1); i++)
	       T=T->Next;

	   N->Next=T->Next;
	   T->Next=N;
	}
    }
}

void Display()
{

    if(Head==NULL)
	printf("\n\t There are no Nodes.");

    else
    {
	Node *i=Head;

	while(i!=NULL)
	{
	   printf("\n\t %d",i->data);

	   i=i->Next;
	}
    }
}

void  Search(int x)
{
   int f=0;

   Node *i=Head;

   while(i!=NULL)
   {
	if(i->data==x)
	{
	   f=1;
	   break;
	}

	i=i->Next;
   }

   if(f)
     printf("\n\t %d is present in the List.");

   else
     printf("\n\t %d is not present in the List.");

}

void Delete(int x)
{
    Node *t2=Head->Next,*t1=Head;

    int f=0;

    if(Head->data==x)
     {

	Head=Head->Next;
	free(t1);
	f=1;
	printf("A Node has been deleted.");
     }

    else
    {
      while(t2!=NULL)
      {
	  if(t2->data==x)
	  {
	      t1->Next=t2->Next;
	      free(t2);
	      f=1;
	      printf("A Node has been deleted.");
	  }
	  else
	  {
	       t1=t2;
	       t2=t2->Next;
	  }
      }
    }
}


void Delete1(int position)
{
   Node *p,*q;
   int i;

   p=Head;
   q=Head;

   for(i=1;i<position-1;i++)
    p=p->Next;

   q=p->Next;
   p->Next=q->Next;
   free(q);
}
