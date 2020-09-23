#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
#define and &&

struct Point
{
	int x, y;
};

void Circle(int h, int k, int r, int xxx, int yyy,int direction, int color,int dtime=0)
{
	int Quadrant;
	float a,b,c,d,x,i;
	Point P,P1,P2,P3,P4,Q1,Q2,Q3,Q4;
	P.x=xxx; P.y=yyy;
	P1.x = h+r; P1.y=k;
	P2.x = h;   P2.y=k-r;
	P3.x = h-r; P3.y=k;
	P4.x = h;   P4.y=k+r;

	switch(direction)
	{
		case 1 : if((P.x>=P2.x  and P.x<P1.x) and (P.y>=P2.y and P.y<P1.y))
						 Quadrant=1;
						 else if((P.x<=P1.x  and P.x>P4.x) and (P.y>=P1.y and P.y<P4.y))
						 Quadrant=4;
						 else if((P.x<=P4.x  and P.x>P3.x) and (P.y<=P4.y and P.y>P3.y))
						 Quadrant=3;
						 else if((P.x>=P3.x  and P.x<P2.x) and (P.y<=P3.y and P.y<P2.y))
						 Quadrant=2;

						 switch(Quadrant)
						 {
							 case 1 : Q1=P1; Q2=P4; Q3=P3; Q4=P2;
												for(i=P.y;i<=Q1.y;i+=0.125)
												{
													 a=pow((i-k),2); b=pow(r,2); c=b-a;
													 d=sqrt(c);      x=h+d;
													 putpixel(x,i,color);  delay(dtime);
												}
												for(i=Q1.y;i<=Q2.y;i+=0.125)
												{
													 a=pow((i-k),2); b=pow(r,2); c=b-a;
													 d=sqrt(c);      x=(h+d);
													 putpixel(x,i,color);  delay(dtime);
												}
												for(i=Q2.y;i>=Q3.y;i-=0.125)
												{
													 a=pow((i-k),2); b=pow(r,2); c=b-a;
													 d=sqrt(c);      x=(h-d);
													 putpixel(x,i,color);  delay(dtime);
												}
												for(i=Q3.y;i>=Q4.y;i-=0.125)
												{
													 a=pow((i-k),2); b=pow(r,2); c=b-a;
													 d=sqrt(c);      x=(h-d);
													 putpixel(x,i,color);  delay(dtime);
												}
												for(i=Q4.y;i<=P.y;i+=0.125)
												{
													 a=pow((i-k),2); b=pow(r,2); c=b-a;
													 d=sqrt(c);      x=h+d;
													 putpixel(x,i,color);  delay(dtime);
												}

												break;
							 case 2 : Q1=P2; Q2=P1; Q3=P4; Q4=P3; break;
							 case 3 : Q1=P3; Q2=P2; Q3=P1; Q4=P4; break;
							 case 4 : Q1=P4; Q2=P3; Q3=P2; Q4=P1; break;
						 }








	}

}

void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"");
 setcolor(LIGHTGREEN);
 outtextxy(280,240,"My Circle");
 Circle(320,240,200,320,40,1,YELLOW,1);
 getch();
}