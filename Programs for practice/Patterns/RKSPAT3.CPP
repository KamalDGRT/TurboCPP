#include<iostream.h>
#include<conio.h>

void main()
{
  clrscr();

  int i,j,n;

  cout<<"Enter the value of N : ";
  cin>>n;

  for(i=1;i<=n;i++)
  {
     for(j=1;j<=i;j++)
     cout<<"*"<<" ";
     cout<<"\n";
  }
  getch();
}
