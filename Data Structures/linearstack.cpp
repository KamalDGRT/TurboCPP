#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void box(int x,  int y,  int z);

typedef struct Stacks {
    int A[10], top;
    void Push();
    void Pop();
    void Display();

    Stacks()  {  //contructor
        top = -1;
    }
} Stacks;

void main() {
    int mc, x;
    char uc;
    Stacks Stack;

    do {
        clrscr();
        gotoxy(27, 2);
        printf("OPERATIONS ON LINEAR STACK");
        gotoxy(27, 3);
        printf("---------- -- ------ -----");

        printf("\n\n");

        printf("\n\t 1. Push an Element Into The Stack.\n");
        printf("\n\t 2. Pop An Element From The Stack.\n");
        printf("\n\t 3. Display The Stack Status.\n");

        printf("\n\t User,  Enter Your Choice : ");
        scanf("%d", &mc);

        switch(mc) {
            case 1 :    clrscr();
                        gotoxy(23, 2);
                        printf("Pushing An Element Into The Stack\n\n");
                        Stack.Push();
                        break;

            case 2 :    clrscr();
                        gotoxy(23, 2);
                        printf("Popping An Element From The Stack\n\n");
                        Stack.Pop();
                        break;

            case 3 :    clrscr();
                        gotoxy(34, 2);
                        printf("Stack Status.");
                        Stack.Display();
                        break;

            default: printf("\n\n\t INVALID OPTION ENTERED.");
        } // Swtich Case

        printf("\n\n To Continue With The Stack Operations,  Press [y/Y].");
        uc = getch();

    } while(tolower(uc )== 'y');

}

void box(int x , int y,  int z) {
    gotoxy(x, y);
    printf("%c%c%c%c%c%c", 201, 205, 205, 205, 205, 187);
    gotoxy(x, y + 1);
    printf("%c", 186);
    gotoxy(x + 5, y + 1);
    printf("%c", 186);
    gotoxy(x + 2, y + 1);
    printf("%d", z);
    gotoxy(x, y + 2);
    printf("%c%c%c%c%c%c", 200, 205, 205, 205, 205, 188);
}

void Stacks::Push() {
    if(top==9)
        printf("\n\t\t STACK IS FULL.");
    else {
        top++;
        printf("\n\t Enter The Element To Be Inserted : ");
        scanf("%d", &A[top]);
        printf("\n\n\t%d Has Been Sucessfully Inserted Into The Stack", A[top]);
    }
}

void Stacks::Display() {
    int i, x, y;

    if(top < 0)
    printf("\n\n\t STACK HAS NO ELEMENTS IN IT.");
    else {
        for( i = top, y = 3, x = 10; i >= 0; i--, y += 3) {
            box(x, y, A[i]);
            if(i==top)  {
                gotoxy(20, 4);
                printf(" < ------ Topmost Element");
            }
        }

        y =3 * top + 2;
        for(i=0;i < =y;i++) {
            gotoxy(7, 3+i);
            printf("%c", 186); 
            gotoxy(17, 3+i);
            printf("%c", 186);
        }

        gotoxy(7, 3+i);
        printf("%c%c%c%c%c%c%c%c%c%c%c", 200, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188);
    }
}

void Stacks::Pop() {
    if(top == -1)
        printf("\n\t\tSTACK IS EMPTY.");

    else {
        printf("\n\n\t The Deleted Element is : %d", A[top]);
        top--;
    }
}
