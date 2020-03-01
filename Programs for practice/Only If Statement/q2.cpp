//2. Read three numbers from the user and find the biggest of three using simple (multiple) if statements.

#include <iostream.h>
#include <conio.h>

void main()
{
    int a, b, c;    
    clrscr();

    cout << "Enter 3 numbers : ";
    cin >> a >> b >> c;

    if (a > b && a > c)
      cout << a << " is the greatest. ";
    
    if (b > a && b > c)
      cout << b << " is the greatest. ";
    
    if (c > a && c > b)
      cout << c << " is the greatest. ";
    
    getch();
}