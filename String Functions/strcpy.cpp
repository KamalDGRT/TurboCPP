#include <iostream.h>
#include <conio.h>
#include <stdio.h>


int STRCPY(char[], char[]); //Function Prototype

void main()
{
  char s1[80], s2[40];
  int k;

  clrscr();

  cout << "Enter a String 1 : ";
  gets(s1);

  cout << "Enter a String 2 : ";
  gets(s2);

  STRCPY(s1, s2);

  cout << "\n Now, string 2 will be copied in String 1.\n";

  cout << "String 1 : " << s1 << endl;
  cout << "String 2 : " << s2 << endl;

}

void STRCPY(char x[], char y[])
{
  int l1 = 0;

  while (y[l1]!='\0')
  {
    x[l1] = y[l1];
    l1++;
  }
  x[l1]='\0';
}
