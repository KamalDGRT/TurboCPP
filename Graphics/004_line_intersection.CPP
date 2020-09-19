#include<stdio.h>
#include<math.h>
#include<graphics.h>
#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();

	float m1,c1,m2,c2,x1,y1,x2,y2,dx,dy,X_Intersection,Y_Intersection;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	cout<<"Program to find the intersecting point of two lines\n";
	cout<<"Enter Line 1 X1 , Y1 : ";cin>>x1>>y1;
	cout<<"Enter Line 1 X2 , Y2 : ";cin>>x2>>y2;
	line(x1,y1,x2,y2);
	dx=x2-x1;
	dy=y2-y1;
	m1=dy/dx;

	//y=mx+c ==> Intercept c = Y-mx
	c1=y1-m1*x1; // which is same as y2-slope*x2
	cout<<"Enter Line 2 X1 , Y1 : ";cin>>x1>>y1;
	cout<<"Enter Line 2 X2 , Y2 : ";cin>>x2>>y2;
	line(x1,y1,x2,y2);
	dx=x2-x1;
	dy=y2-y1;
	m2=dy/dx;
	//y=mx+c ==> c=y-mx
	c2=y1-m2*x1;//which is same as y2-slope* x2
	cout<<"\nEquation of Line 1 : Y = "<<m1<<"x";
	(c1<0)?cout<<' '<<c1:cout<<'+'<<c1;
	cout<<"\nEquation of Line 2 : Y = "<<m2<<"x";
	(c2<0)?cout<<' '<<c2:cout<<'+'<<c2;

	if((m1-m2)==0)
	cout<<"No Intersection between the lines :";
	else
	{
		 X_Intersection=(c2-c1)/(m1-m2);
		 Y_Intersection=m1*X_Intersection+c1;
		 cout<<"\n\tIntersecting point : "<<X_Intersection<<","<<Y_Intersection;
		 circle(X_Intersection,Y_Intersection,5);
	}
	getch();

}