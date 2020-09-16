// Custom alphabets


#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>

void Line(int a , int b, int c , int d, int color=WHITE)
{
for (int i = 15; i >= 1; i--)
	{
	setcolor(color);
	int x1 = a;
	int y1 = b;
	int x2 = a + (c - a)/(i);
	int y2 = b + (d - b)/(i);
	line(x1,y1,x2,y2);
	delay(5);
	}
}

void Line(int a[],int n)
{
	int X,x,Y,y;
	x=a[0]; y=a[1];
	for(int i=2;i<2*n;i+=2)
	{
		X=a[i];Y=a[i+1];
		Line(x,y,X,Y);
		x=X;y=Y;
	}
}

void A(int x, int y,float size=1)
{
 int a[10]={ x,    y+15,
						 x,    y,
						 x+5,  y-5,
						 x+10, y,
						 x+10, y+15
					 };
 for(int d=0;d<10;d++)
		 a[d]*=size;
 Line(a,5);
 delay(10);
 Line(size*x,size*(y+7),size*(x+10),size*(y+7));
}

void B(int x, int y,int size=1)
{
 int b[18]={ x,    y,
						 x+5,  y,
						 x+10, y+5,
						 x+5,  y+10,
						 x,    y+10,
						 x+5,  y+10,
						 x+10, y+15,
						 x+5,  y+20,
						 x,    y+20
					 };
	for(int d=0;d<18;d++)
		 b[d]*=size;

 Line(x*size,y*size,x*size,(y+20)*size);
 Line(b,9);
}

void C(int x, int y)
{
 int c[12]={ x+10,  y-5,
						 x+5,   y-5,
						 x,     y,
						 x,     y+10,
						 x+5,   y+15,
						 x+10,  y+15
					 };
 Line(c,6);
}

void D(int x, int y)
{
	int d[12]={ x,    y,
							x+5,  y,
							x+10, y+5,
							x+10, y+15,
							x+5,  y+20,
							x,    y+20
						};
	Line(x,y,x,y+20);
	Line(d,6);
}

void E(int x, int y)
{
	Line(x,y,x,y+20);
	Line(x,y,x+10,y);
	Line(x,y+10,x+10,y+10);
	Line(x,y+20,x+10,y+20);
}

void F(int x, int y)
{
	Line(x,y,x,y+20);
	Line(x,y,x+10,y);
	Line(x,y+10,x+7,y+10);
}

void G(int x, int y)
{
 int g[18]={ x+10,  y,
						 x+10,  y-5,
						 x+5,   y-5,
						 x,     y,
						 x,     y+10,
						 x+5,   y+15,
						 x+10,  y+15,
						 x+10,  y+5,
						 x+5,   y+5
					 };
 Line(g,9);
}

void H(int x, int y)
{
		Line(x,y,x,y+20);
		Line(x,y+10,x+10,y+10);
		Line(x+10,y,x+10,y+20);
}

void I(int x, int y)
{
		Line(x,y,x+10,y);
		Line(x+5,y,x+5,y+20);
		Line(x,y+20,x+10,y+20);
}

void J(int x,int y)
{
		Line(x,y,x+10,y);
		int j[8]={x+5,  y,
							x+5,  y+20,
							x,    y+20,
							x,    y+15
							};
		Line(j,4);
}

void K(int x,int y)
{
		Line(x,y,x,y+20);
		Line(x+10,y,x,y+10);
		Line(x,y+10,x+10,y+20);
}

void L(int x,int y)
{
	int l[6]={x,y,
						x,y+20,
						x+10,y+20
					 };
	Line(l,3);
}

void M(int x,int y)
{
	int m[10]={x,+20,
						 x,y,
						 x+5,y+12,
						 x+10,y,
						 x+10,y+20};
	Line(m,5);
}

void N(int x, int y)
{
 int n[8]={x,y+20,
					 x,y,
					 x+10,y+20,
					 x+10,y};
 Line(n,4);
}

void O(int x,int y)
{
 int o[10]={x,y,
						 x,y+20,
						 x+10,y+20,
						 x+10,y,
						 x,y};
 Line(o,5);
}

void P(int x, int y)
{
	Line(x,y,x,y+20);
	int p[8]={x,y,
						x+10,y,
						x+10,y+10,
						x,y+10};
	Line(p,4);
}

void Q(int x,int y)
{ int q1[10]={x,y,
							x,y+15,
							x+10,y+15,
							x+10,y,
							x,y};
	int q2[6]={x+5,y+10,
						 x+5,y+20,
						 x+10,y+20};
	Line(q1,5);Line(q2,3);
}

void R(int x, int y)
{
	 Line(x,y,x,y+20);
	 int r[10]={x,y,
							x+10,y,
							x+10,y+10,
							x,y+10,
							x+10,y+20};
	 Line(r,5);
}

void S(int x, int y)
{
 int s[16]={x+10,y-5,
						x+5,y-5,
						x,y,
						x,y+5,
						x+10,y+5,
						x+10,y+10,
						x+5,y+15,
						x,y+15};
 Line(s,8);
}

void T(int x, int y)
{
		Line(x,y,x+10,y);
		Line(x+5,y,x+5,y+20);
}

void U(int x,int y)
{
	int u[8]={x,y,
						x,y+20,
						x+10,y+20,
						x+10,y};
	Line(u,4);
}

void V(int x, int y)
{
	int v[10]={x,y,
						 x,y+15,
						 x+5,y+20,
						 x+10,y+15,
						 x+10,y};
	Line(v,5);
}

void W(int x, int y)
{
 int w[10]={x,y,
						x,y+20,
						x+5,y+12,
						x+10,y+20,
						x+10,5};
 Line(w,5);
}

void X(int x,int y)
{
 Line(x,y,x+10,y+20);
 Line(x+10,y,x,y+20);
}

void Y(int x,int y)
{
	Line(x,y,x+5,y+10);
	Line(x+10,y,x,y+20);
}

void Z(int x, int y)
{
	 int z[8]={x,y,
						 x+10,y,
						 x,y+20,
						 x+10,y+20};
	 Line(z,4);
}

void main()
{
int g=DETECT,Gm;
initgraph(&g,&Gm,"");
cleardevice();
gotoxy(5,5);
cout<<"Graphics Driver = "<<g<<"  Graphics Mode = "<<Gm;
setcolor(BLUE);

A(5,5);   B(20,0);  C(35,5);  D(50,0);  E(65,0);
F(80,0);  G(95,5);  H(110,0); I(125,0); J(140,0);
K(155,0); L(170,0); M(185,0); N(200,0); O(215,0);
P(230,0); Q(245,0); R(260,0); S(275,5); T(290,0);
U(305,0); V(320,0); W(335,0); X(350,0); Y(365,0); Z(380,0);

getch();
}
