//1. Get a number from user. If the number is less than or equal to 10, print the message "Good".

#include<iostream.h>
#include<conio.h>

void main()
{
    int n;
    clrscr();

    cout << "Enter a number : ";
    cin >> n;

    if ( n <= 10)
      cout << "Good";

    getch();
}