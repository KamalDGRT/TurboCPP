#include <iostream.h>
#include <conio.h>
#include <stdio.h>

void STRLWR(char[]); //Function Prototype

void main()
{
  char s[80];
  int l;

  clrscr();

  cout << "Enter a String : ";
  gets(s);

  STRLWR(s);

  cout << "The new string is :  " << s;

  getch();
}

void STRLWR(char b[])
{
    int i;
    char x;

    for(i=0; b[i]!='\0';i++)
    {
      x = b[i];
      if(x>='A' && x<='Z')
         b[i] += 32;
    }
}
