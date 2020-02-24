//1. Write a program to check whether a given number is postive or not.

#include<iostream.h>
#include<conio.h>

void main()
{
    int n;

    clrscr();

    cout << "Enter a number : ";
    cin >> n;

    if (n > 0)
      cout << n <<" is positive.";
    else
      cout << n << "is not positive.";

    getch();
}