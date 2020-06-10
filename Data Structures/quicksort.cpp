#include<stdio.h>
#include<conio.h>

void display(int[20], int);
void swap(int*, int*);
void Quick_Sort(int[20], int, int);

void main() {
    int a[20], n, x, p, i;
    char uc;

    textbackground(BLUE);
    textcolor(WHITE);

    do {
        clrscr();

        do {
            printf(" Enter the Size of The Array : ");
            scanf("%d", &n);
        }while(n>20 || n<0); //bound checking

        printf("\n\n Now,  Enter the Array Elements :  ");

        for(i = 0; i < n; i++) {
            printf("\n Enter A[%d] : ", i);
            scanf("%d", &a[i]);
        }

        clrscr();

        printf("\n\nThe Array Status Before Sorting : \n");
        display(a, n);

        Quick_Sort(a, 0, n-1);

        printf("\n\n The Array Status After Sorting : \n");
        display(a, n);


        printf("\n\n Do you want to Start again ? [Y/N] : ");
        uc=getch();
    }while(uc=='y' || uc=='Y');
}


void display(int a[20],  int n) {
    int i;

    for(i = 0; i < n; i++) {
        if(i < (n - 2))
            printf("%d ,  ", a[i]);
        else if (i < (n - 1))
            printf("%d and ", a[i]);
        else if(i == (n - 1))
            printf("%d .", a[i]);
    }
}

void swap(int* a, int* b) {
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

void Quick_Sort(int a[20], int first,  int last) {
    int pivot, i, j, x, t;


    if(first < last) {
        pivot = first;
        i = first;
        j = last;

        while(i < j) {
            while((a[i]<=a[pivot]) && (i<last))
                i++;
            while(a[j]>a[pivot])
                j++;
            if(i < j) {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }

        t = a[pivot];
        a[pivot] = a[j];
        a[j]=t;

        Quick_Sort(a, first, j - 1);
        Quick_Sort(a, j + 1, last);
    }
}
