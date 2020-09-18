#include<iostream.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<dos.h>
#include<ctype.h>
#include<graphics.h>

void Line(int a , int b, int c , int d)
{
 for (int i = 15; i >= 1; i--)
 {
//	setcolor(color);
	int x1 = a;
	int y1 = b;
	int x2 = a + (c - a)/(i);
	int y2 = b + (d - b)/(i);
	line(x1,y1,x2,y2);
	delay(4);
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
 int a[10]={ x,    y+20,
						 x,    y+5,
						 x+5,  y,
						 x+10, y+5,
						 x+10, y+20
					 };
 for(int d=0;d<10;d++)
		 a[d]*=size;
 Line(a,5);
 delay(3);
 Line(size*x,size*(y+12),size*(x+10),size*(y+12));
}

void B(int x, int y,float size=1)
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

void C(int x, int y,float size=1)
{
 int c[12]={ x+10,  y,
						 x+5,   y,
						 x,     y+5,
						 x,     y+15,
						 x+5,   y+20,
						 x+10,  y+20
					 };

	for(int d=0;d<12;d++)
	c[d]*=size;
	Line(c,6);
}

void D(int x, int y,float size=1)
{
	int d[12]={ x,    y,
							x+5,  y,
							x+10, y+5,
							x+10, y+15,
							x+5,  y+20,
							x,    y+20
						};
	Line(x*size,y*size,x*size,(y+20)*size);
	for(int dd=0;dd<12;dd++)
	d[dd]*=size;

	Line(d,6);
}

void E(int x, int y,float size=1)
{
	int x1=x*size, y1=y*size,
			t=(x+10)*size,  u=(y+10)*size,
			w=(y+20)*size;
	Line(x1,y1,x1,w);
	Line(x1,y1,t,y1);
	Line(x1,u,t,u);
	Line(x1,w,t,w);
}

void F(int x, int y,float size=1)
{
	Line(x*size,y*size,x*size,(y+20)*size);
	Line(x*size,y*size,(x+10)*size,y*size);
	Line(x*size,(y+10)*size,(x+7)*size,(y+10)*size);
}

void G(int x, int y,float size=1)
{
 int g[18]={ x+10,  y+5,
						 x+10,  y,
						 x+5,   y,
						 x,     y+5,
						 x,     y+15,
						 x+5,   y+20,
						 x+10,  y+20,
						 x+10,  y+10,
						 x+5,   y+10
					 };
 for(int d=0;d<18;d++)g[d]*=size;
 Line(g,9);
}

void H(int x, int y,float size=1)
{
		Line(x*size,y*size,x*size,(y+20)*size);
		Line(x*size,(y+10)*size,(x+10)*size,(y+10)*size);
		Line((x+10)*size,y*size,(x+10)*size,(y+20)*size);
}

void I(int x, int y,float size=1)
{
		Line(x*size,y*size,(x+10)*size,y*size);
		Line((x+5)*size,y*size,(x+5)*size,(y+20)*size);
		Line(x*size,(y+20)*size,(x+10)*size,(y+20)*size);
}
void J(int x,int y,float size=1)
{
		Line(x,y,x+10,y);
		int j[8]={x+5,  y,
							x+5,  y+20,
							x,    y+20,
							x,    y+15
							};
		for(int d=0;d<8;d++)j[d]*=size;
		Line(j,4);
}
void K(int x,int y,float size=1)
{
		Line(x*size,y*size,x*size,(y+20)*size);
		Line((x+10)*size,y*size,x*size,(y+10)*size);
		Line(x*size,(y+10)*size,(x+10)*size,(y+20)*size);
}
void L(int x,int y,float size=1)
{
	int l[6]={x,y,
						x,y+20,
						x+10,y+20
					 };
	for(int g=0;g<6;g++)l[g]*=size;
	Line(l,3);
}
void M(int x,int y,float size=1)
{
	int m[10]={x,y+20,
						 x,y,
						 x+5,y+12,
						 x+10,y,
						 x+10,y+20};
	for(int g=0;g<10;g++)m[g]*=size;
	Line(m,5);
}
void N(int x, int y,float size=1)
{
 int n[8]={x,y+20,
					 x,y,
					 x+10,y+20,
					 x+10,y};
 for(int g=0;g<8;g++)n[g]*=size;
 Line(n,4);
}
void O(int x,int y,float size=1)
{
 int o[10]={x,y,
						 x,y+20,
						 x+10,y+20,
						 x+10,y,
						 x,y};
 for(int g=0;g<10;g++) o[g]*=size;
 Line(o,5);
}

void P(int x, int y,float size=1)
{
	Line(x*size,y*size,x*size,(y+20)*size);
	int p[8]={x,y,
						x+10,y,
						x+10,y+10,
						x,y+10};
	for(int g=0;g<8;g++)
	p[g]*=size;
	Line(p,4);
}

void Q(int x,int y,float size=1)
{ int q1[10]={x,y,
							x,y+15,
							x+10,y+15,
							x+10,y,
							x,y};
	int q2[6]={x+5,y+10,
						 x+5,y+20,
						 x+10,y+20};
	for(int g=0;g<10;g++)q1[g]*=size;
	for(g=0;g<6;g++)q2[g]*=size;
	Line(q1,5);Line(q2,3);
}
void R(int x, int y,float size=1)
{
	 Line(x*size,y*size,x*size,(y+20)*size);
	 int r[10]={x,y,
							x+10,y,
							x+10,y+10,
							x,y+10,
							x+10,y+20};
	 for(int g=0;g<10;g++)r[g]*=size;
	 Line(r,5);
}
void S(int x, int y,float size=1)
{
 int s[16]={x+10,y,
						x+5,y,
						x,y+5,
						x,y+10,
						x+10,y+10,
						x+10,y+15,
						x+5,y+20,
						x,y+20};
 for(int g=0;g<16;g++)
 s[g]*=size;
 Line(s,8);
}
void T(int x, int y,float size=1)
{
		Line(x*size,y*size,(x+10)*size,y*size);
		Line((x+5)*size,y*size,(x+5)*size,(y+20)*size);
}

void U(int x,int y,float size=1)
{
	int u[8]={x,y,
						x,y+20,
						x+10,y+20,
						x+10,y};
	for(int g=0;g<8;g++)u[g]*=size;
	Line(u,4);
}

void V(int x, int y,float size=1)
{
	int v[10]={x,y,
						 x,y+15,
						 x+5,y+20,
						 x+10,y+15,
						 x+10,y};
	for(int g=0;g<10;g++)
	v[g]*=size;
	Line(v,5);
}

void W(int x, int y,float size=1)
{
 int w[10]={x,y,
						x,y+20,
						x+5,y+12,
						x+10,y+20,
						x+10,y};
 for(int g=0;g<10;g++)
 w[g]*=size;
 Line(w,5);
}

void X(int x,int y,float size=1)
{
 Line(x*size,y*size,(x+10)*size,(y+20)*size);
 Line((x+10)*size,y*size,x*size,(y+20)*size);
}

void Y(int x,int y,float size=1)
{
	Line(x*size,y*size,(x+5)*size,(y+10)*size);
	Line((x+10)*size,y*size,x*size,(y+20)*size);
}

void Z(int x, int y,float size=1)
{
	 int z[8]={x,y,
						 x+10,y,
						 x,y+20,
						 x+10,y+20};
	 for(int g=0;g<=8;g++)
	 z[g]*=size;
	 Line(z,4);
}

int theight(int y,float size)
{
	return abs((((y+20)*size)-(y*size)));
}
int twidth(int x,float size)
{
	return abs((((x+10)*size)-(x*size)));
}

void myfont(int x,int y,float size1,char string[])
{
 int length=strlen(string),yt=y,xc=x;
 int ray;
 float s=size1;
 int af;
 int f=x,by;
 char t,u;
 for(ray=0;ray<length;ray++)
 {

		t=string[ray];
		u=t;
		t=toupper(t);

		if(t!=' ')
		{
			if(islower(u))
			{
				s=size1/2;
				by=20*s;
				yt=y+by;
			}
			else
			{
				s=size1;
				yt=y;
			 //	f-=10*s;
			}
		}
		else if(t==' ')
		{
			f+=7;
			settextstyle(77,0,7);
			outtextxy(xc,yt," ");
		}
 //		if(islower(u))
		xc=f;
	//	else
		//xc=f;


		switch(t)
		{
			case 'A': A(xc,yt,s);break;
			case 'B': B(xc,yt,s);break;
			case 'C': C(xc,yt,s);break;
			case 'D': D(xc,yt,s);break;
			case 'E': E(xc,yt,s);break;
			case 'F': F(xc,yt,s);break;
			case 'G': G(xc,yt,s);break;
			case 'H': H(xc,yt,s);break;
			case 'I': I(xc,yt,s);break;
			case 'J': J(xc,yt,s);break;
			case 'K': K(xc,yt,s);break;
			case 'L': L(xc,yt,s);break;
			case 'M': M(xc,yt,s);break;
			case 'N': N(xc,yt,s);break;
			case 'O': O(xc,yt,s);break;
			case 'P': P(xc,yt,s);break;
			case 'Q': Q(xc,yt,s);break;
			case 'R': R(xc,yt,s);break;
			case 'S': S(xc,yt,s);break;
			case 'T': T(xc,yt,s);break;
			case 'U': U(xc,yt,s);break;
			case 'V': V(xc,yt,s);break;
			case 'W': W(xc,yt,s);break;
			case 'X': X(xc,yt,s);break;
			case 'Y': Y(xc,yt,s);break;
			case 'Z': Z(xc,yt,s);break;

		}
				af=20*s;
		f+=af;

 }
}

void main()
{
int g=DETECT,Gm;
initgraph(&g,&Gm,"");
cleardevice();
gotoxy(5,5);


setcolor(YELLOW);
setlinestyle(0,1,3);
/*A(5,20,0.5);   B(20,0);  C(35,0);  D(50,0);  E(65,0);
F(80,0);  G(95,0);  H(15,0); I(125,0); J(140,0);
K(155,0); L(170,0); M(185,0); N(200,0); O(215,0);
P(230,0); Q(245,0); R(260,0); S(275,0); T(290,0);
U(305,0); V(320,0); W(335,0); X(350,0); Y(365,0);
Z(380,0);
*/
myfont(30,20,1.2,"THOUGHT FOR THE DAY");

setcolor(MAGENTA);
Line(10,60,630,60);

setcolor(LIGHTBLUE);
myfont(80,100,1,"ATTRACT WHAT YOU EXPECT");

setcolor(LIGHTRED);
myfont(80,200,1,"REFLECT WHAT YOU DESIRE");

setcolor(CYAN);
myfont(80,300,1,"BECOME WHAT YOU RESPECT");

setcolor(LIGHTGREEN);
myfont(90,400,1,"MIRROR WHAT YOU ADMIRE");


getch();
}
