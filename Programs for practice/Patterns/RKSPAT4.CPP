#include<iostream.h>
#include<conio.h>

void main()
{
    clrscr();

    int i,j,k,n,s;

    cout<<"Enter the value of N : ";
    cin>>n;

    s=n*2;

    for(i=1;i<=n;i++)
    {
	for(k=1;k<=s;k++)
	cout<<" ";

	for(j=1;j<=i;j++)
	{
	    cout<<"*"<<" ";
	}

	for(j=i-1;j>=1;j--)
	   cout<<"*"<<" ";

	cout<<"\n";
	s-=2;
    }

    getch();
}
