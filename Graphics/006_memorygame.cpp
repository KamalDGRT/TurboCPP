#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
#include<stdlib.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
char c[2],d[11];


for(int i=1;i<=8;i++)
{
  setfillstyle(11,BLUE);
  for(int m=0;m<i;m++)
  bar(80*m+30,193,80*(m+1),270);
  char a[20];
  char b[40]={' '};

  randomize();
  for (m=0;m<i;m++)
  a[m]=random(10)+48;
  a[m]=0;

  int x=20,d1=0;
  settextstyle(7,0,6);

  for(int x1=0;a[d1];x1+=2)
  b[x1]=a[d1++];
  b[x1]=0;

  setcolor(YELLOW);
  setfillstyle(11,BLUE);
  for (int i1=0;b[i1];i1+=2)
     {
	moveto(40*i1+40,190);
	c[0]=b[i1];
	c[1]=0;
	outtext(c);
	delay(250);
	x+=50;
     }
  delay(1500);

  settextstyle(4,HORIZ_DIR,6);
  setcolor(YELLOW);
  for(m=0;m<i;m++)
  bar(80*m+25,193,80*(m+1),270);
  settextstyle(7,0,6);
  for (i1=0;i1<2*i;i1+=2)
     {
	moveto(40*i1+40,190);
	d[i1/2]=getch();
	c[0]=d[i1/2];
	c[1]=0;
	outtext(c);
	delay(250);
	x+=50;
     }
  d[i1/2]=0;

  if ( strcmpi(a,d) != 0)
    {
       cout<<"type properly";
       break;
    }
  else
  continue;
}

getch();
}
