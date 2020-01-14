#include <iostream.h>
#include <conio.h>
#include <stdio.h>


int STRCMPI(char[], char[]); //Function Prototype
void main()
{
  char s1[80], s2[40];
  int k;

  clrscr();

  cout << "Enter a String 1 : ";
  gets(s1);

  cout << "Enter a String 2 : ";
  gets(s2);

  k = STRCMPI(s1, s2);

  if ( k == 0 )
    cout << "The Two Strings are equal.";
  else
    cout << "The two Strings are not equal."
  getch();
}

int STRCMPI(char x[], char y[])
{
  int i, j, c = 0, t1, t2, l1, l2;
  l1 = 0;

  while (x[l1]!='\0')
  {
    l1 = l1 + 1;
  }

  while (y[l2]!='\0')
  {
    l2 = l2 + 1;
  }

  for ( i = 0 ; i < l1 && j < l2; i++, j++)
  {
    t1 = tolower(x[i]);
    t2 = tolower(y[j]);
    c = t1 - t2;
    if (c!=0)
     break;
  }

  return c;
}
