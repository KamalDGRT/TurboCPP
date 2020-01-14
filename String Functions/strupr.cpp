#include <iostream.h>
#include <conio.h>
#include <stdio.h>

void STRUPR(char[]); //Function Prototype

void main()
{
  char s[80];
  int l;

  clrscr();

  cout << "Enter a String : ";
  gets(s);

  STRUPR(s);

  cout << "The new string is :  " << s;

  getch();
}

void STRUPR(char b[])
{
    int i;
    char x;

    for(i=0; b[i]!='\0';i++)
    {
      x = b[i];
      if(x>='a' && x<='z')
         b[i] += 32;
    }
}
