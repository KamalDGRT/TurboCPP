#include<stdio.h>
#include<conio.h>

void display(int[],int);
void MergeSort(int[],int,int);
void Merge(int[],int,int,int);

void main()
{
   int a[20],n,x,p,i;
   char uc;

   textbackground(BLUE);
   textcolor(WHITE);

do
{
   clrscr();

   do
   {
     printf(" Enter the Size of The Array : ");
     scanf("%d",&n);
   }while(n>20 || n<0); //bound checking

   printf("\n\n Now, Enter the Array Elements :  ");

   for(i=0;i<n;i++)
   {
       printf("\n Enter A[%d] : ",i);
       scanf("%d",&a[i]);
   }

   clrscr();

   printf("\n\nThe Array Status Before Sorting : \n");
   display(a,n);

   MergeSort(a,0,n-1);

   printf("\n\n The Array Status After Sorting : \n");
   display(a,n);


   printf("\n\n Do you want to Start again ? [Y/N] : ");
   uc=getch();

}while(uc=='y' || uc=='Y');

}


void MergeSort(int a[],int l,int u)
{
    int mid;

    if(l<u)
    {
	mid=(l+u)/2;

	MergeSort(a,l,mid);
	MergeSort(a,mid+1,u);
	Merge(a,l,mid,u);
    }
}

void Merge(int a[],int l,int m, int u)
{
    int temp[50];
    int i,j,k;

    i=l;
    j=m+1;
    k=0;

    while(i<=m && j<=u)
    {
	if(a[i]<a[j])
	  {
	     temp[k]=a[i];
	     k++;
	     i++;
	  }
	else
	  {
	    temp[k]=a[j];
	    k++;
	    j++;
	  }
    }

    while(i<=m)
       {
	   temp[k]=a[i];
	   k++;
	   i++;
       }

    while(j<=u)
      {
	temp[k]=a[j];
	k++;
	j++;
      }

    for(i=l,j=0;i<=u;i++,j++)
	a[i]=temp[j];
}

void display(int a[], int n)
{
   int i;

   for(i=0;i<n;i++)
   {
	if(i<(n-2))
	printf("%d , ",a[i]);
	else if (i<(n-1))
	printf("%d and ",a[i]);
	else if(i==(n-1))
	printf("%d .",a[i]);
   }

}
