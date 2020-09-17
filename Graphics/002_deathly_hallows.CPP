//Deathly Hallows

#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>

#define Root_3 sqrt(3)


struct Point {
    int x, y;
};

int distance(int x1, int y1, int x2, int y2) {
    int x = fabs(x2-x1), y = (y2 - y1);
    int x_square = x * x, y_square = y * y;
    int d = sqrt(x_square + y_square);
    return d;
}

void Line(int a , int b, int c , int d, int color = WHITE) {
    for (int i = 15; i >= 1; i--) {
        setcolor(color);
        int x1 = a;
        int y1 = b;
        int x2 = a + (c - a) / (i);
        int y2 = b + (d - b) / (i);
        line(x1, y1, x2, y2);
        delay(90);
    }
}

void circle(int x, int y, int radius, int color) {

    float x1, y1;
    float i = 0;

    while(i <= 360) {
        x1 = x + radius * cos(i);
        y1 = y + radius * sin(i);
        putpixel(x1, y1, color);
        i += 0.125;
        delay(1);
    }
}

void Deathly_Hollow(int x, int y, int a)
{
    Line(x - a / 2, y +(Root_3 * a / 2), x, y);
    Line(x, y, x + a/2, y + (Root_3 * a / 2));
    Line(x + a / 2, y + (Root_3 * a / 2), x - a / 2, y + (Root_3 * a / 2));
    Line(x, y, x, (Root_3 * a / 2));
    circle(x, Root_3 / 3 * a, Root_3/ 6 * a);
}

void main()
{
    int graphicsDriver = DETECT, graphicsMode;
    initgraph(&graphicsDriver, &graphicsMode,"");
    cleardevice();
    Deathly_Hollow(240,0,240);
    getch();
}
