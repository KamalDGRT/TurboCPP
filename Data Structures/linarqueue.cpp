#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void box(int, int, int);

typedef struct Queue
{
   int Q[8];
   int Front,Rear;

   Queue()    //constructor
   {
      Front=-1;
      Rear=-1;
   }
   void Insert();
   void Remove();
   void Display();

} Queue;

void main()
{
    Queue QUEUE;

    int mc;
    char uc;

    do
    {
	     clrscr();
	     gotoxy(27,2);
	     printf("OPERATIONS ON LINEAR QUEUE");
	     gotoxy(27,3);
	     printf("---------- -- ------ -----");

	     printf("\n\n\t 1. Insert Into the Queue");
	     printf("\n\n\t 2. Remove From the Queue");
	     printf("\n\n\t 3. Display the Queue");
	     printf("\n\n\t User, Enter Your Choice : ");

	     scanf("%d",&mc);

	     switch(mc)
	     {
	        case 1  : QUEUE.Insert();  break;
	        case 2  : QUEUE.Remove();  break;
	        case 3  : QUEUE.Display(); break;
	        default : printf("\n\n\t Invalid Option Entered.");
	     }

	     printf("\n\n\t To Continue With The Queue Operations Press [y/Y]. :");
	     uc=getch();

    }    while(tolower(uc)=='y');


}

void Queue::Insert()
{
   clrscr();
   printf("\t\t\t Insertion of Element \n\n");

   if(Rear==7)
       printf("\n\tQUEUE IS FULL.");
   else
   {
       if(Rear==-1)
	  Front++;

       Rear++;

       printf("\n\t Enter a number to Insert : ");
       scanf("%d",&Q[Rear]);

   }

}

void Queue::Remove()
{
   clrscr();
   printf("\t\t\t Removal of an Element \n\n");

   if(Front==-1)
       printf("\n\t QUEUE IS EMPTY.");

   else
   {
       printf("\n\n\t %d Has Been Deleted.",Q[Front]);

       if(Front==Rear)
	  {
	     Front=-1;
	     Rear=-1;
	  }
       else
	 Front++;
   }
}

void Queue::Display()
{
   int k=0,x,i;

   clrscr();

   if(Front==-1)
      printf("\n\n\t QUEUE IS EMPTY.");
   else
   {
      printf("\n\t The Queue Status Is : ");

      for(i=Front,x=6; i<=Rear; i++,x+=7)
	      {
	          box(x,5,Q[i]);
	           k++;
	       }

      gotoxy(0,9);
      printf("\n\t^\n\t|\n\t|\n      Front");

      if(k>=1)
      {
	       gotoxy((k*7)+7,6);
	       printf("<---- Rear");
	       gotoxy(5,10);
      }

   }
}

void box(int x, int y ,int z)
{
    gotoxy(x,y);
    printf("%c%c%c%c%c%c%c",201,205,205,205,205,205,187);

    gotoxy(x,y+1);
    printf("%c",186);
    gotoxy(x+6,y+1);
    printf("%c",186);
    gotoxy(x+2,y+1);
    printf("%d",z);

    gotoxy(x,y+2);
    printf("%c%c%c%c%c%c%c",200,205,205,205,205,205,188);

}
