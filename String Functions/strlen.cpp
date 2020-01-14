#include <iostream.h>
#include <conio.h>
#include <stdio.h>

int STRLEN(char[]); //Function Prototype

void main()
{
  char s[80];
  int l;

  clrscr();

  cout << "Enter a String : ";
  gets(s);

  l = STRLEN(s);

  cout << "Length = " << l;

  getch();
}

int STRLEN(char b[])
{
  int a = 0;
  while (b[a] != '\0')
  {
    a = a + 1;  // I know, a++ could have been here.
  }

  return a;
}
