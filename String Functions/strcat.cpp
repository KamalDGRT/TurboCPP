#include <iostream.h>
#include <conio.h>
#include <stdio.h>

int STRCAT(char[], char[]); //Function Prototype

void main()
{
  char s1[80], s2[40];

  clrscr();

  cout << "Enter a String 1 : ";
  gets(s1);

  cout << "Enter a String 2 : ";
  gets(s2);

  STRCAT(s1, s2);

  cout <<"\n\n The concatenated string is : " << s1;

  getch();
}

int STRCAT(char x[], char y[])
{
  int i, j;
  i = 0;

  while (x[i]!='\0')
  {
    i = i + 1;
  }

  for ( j = 0; y[j] != '\0'; i++, j++)
  {
    x[i] = y[j];
  }
  x[i] = '\0';  // x[i] = 0; also works 

}
