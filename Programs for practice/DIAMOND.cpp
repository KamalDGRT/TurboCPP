//This program takes in a string and prints it in a diamond shape.

#include<conio.h>
#include<iostream.h>
#include<string.h>


void main()
{
    char s[20];
    int i, j, k, l, m, n = 5, x , y = 3;

    clrscr();
		cout<<"Enter a Name : ";
  	gets(s);

    n = strlen(s);

		for(i = 1; i <= n; i++, y++)         //upper portion
    {
				x = 40;
				for(k = i-1; k>=0; k--)       //upper-left
				{
	   			gotoxy(x,y);
	   			cout<<s[k];
	   			x -= 2;
				}

				x=42;
				for(k=i-2;k>=0;k--)      //upper-right
	   			gotoxy(x,y);
					{
	   			cout<<s[k];
	   			x+=2;
				}
  	}

     m=n;

    for(i = 1; i <= (n-1); i++, y++, m--)         //Down
    {
				x = 40;
				for(k = m-2; k >=0 ; k--)  // Lower left
				{
	   			gotoxy(x,y);
	   			cout<<s[k];
	   			x -= 2;
				}

				x=42;

				for(k= m-3; k>=0; k--) // lower right
				{
	   			gotoxy(x,y);
	   			cout<<s[k];
	   			x += 2;
				}
    }

    getch();
}
