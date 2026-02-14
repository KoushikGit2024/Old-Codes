#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

int count=0, brd[8][7], won=0, wrong=0, pre, hell1=0, gen;
char name[30];

void clearScreen() { system(CLEAR); }
void press() { printf("\n[Press Enter]"); getchar(); getchar(); clearScreen(); }
void press1() { printf("\n[Press Enter]"); getchar(); clearScreen(); }

void board();
void row(int n);
void input();
void heaven();
void hell();
int ques(int n,int i);

int main()
{
    int i;
    char gen1;

    srand(time(NULL));
    clearScreen();

    printf("=================================\n");
    printf("   THE ROAD TO HEAVEN (GAME)\n");
    printf("=================================\n");

    printf("\nEnter Player Name: ");
    fgets(name,30,stdin);
    name[strcspn(name,"\n")] = 0;

    do{
        printf("\nGender Male(1) Female(2): ");
        scanf(" %c",&gen1);
        gen = gen1 - '0';
    }while(gen<1||gen>2);

    clearScreen();
    printf("\nYou died in a mysterious accident...");
    press1();

    /* Generate board */
    for(i=0;i<8;i++)
    {
        int correct = rand()%7;
        for(int j=0;j<7;j++)
            brd[i][j] = (j==correct)?0:1;
    }

    board();
    input();

    if(hell1==0)
        heaven();

    printf("\nThanks for playing. Come again!\n");
    return 0;
}

void board()
{
    clearScreen();
    printf("\n========== THE ROAD ==========\n");
    printf("| 1 | 2 | 3 | 4 | 5 | 6 | 7 |\n");
    printf("-------------------------------\n");

    for(int i=7;i>=0;i--)
    {
        if(i>=count)
            printf("| 🟪 | 🟪 | 🟪 | 🟪 | 🟪 | 🟪 | 🟪 |\n");
        else
            row(i);
        printf("-------------------------------\n");
    }
}

void row(int n)
{
    printf("|");
    for(int i=0;i<7;i++)
    {
        if(brd[n][i]==0)
            printf(" ✅|");
        else if(brd[n][i]==1)
            printf(" ❌|");
        else if(brd[n][i]==2)
            printf(" 👣|");
        else if(brd[n][i]==3)
            printf(" ⚜️|");
        else if(brd[n][i]==4)
            printf(" ☠️|");
    }
    printf("\n");
}

void input()
{
    char m;
    int n;

    if(count<8)
    {
        if(count>0)
            brd[count-1][pre]=2;

        do{
            printf("\n%s, choose tile (1-7): ",name);
            scanf(" %c",&m);
        }while(m<'1'||m>'7');

        n=m-'1';

        if(brd[count][n]==0)
        {
            brd[count][n]=3;
            pre=n;
            count++;
            board();
            input();
        }
        else
        {
            brd[count][n]=4;
            count++;
            board();
            printf("\nWrong Tile! You fell!\n");
            press();
            hell();
        }
    }
}

void heaven()
{
    int i,x;

    clearScreen();
    printf("\nGATE OF HEAVEN APPEARS...\n");
    printf("   /\\__HEAVEN__/\\\n");
    printf("   |            |\n");
    printf("   |            |\n");
    printf("   |____________|\n");

    press1();

    printf("\nGuardian: Answer 3 questions correctly.\n");

    for(i=1;i<=3 && wrong==0;i++)
    {
        x=rand()%4;
        ques(x,i);
    }

    if(wrong==0)
    {
        clearScreen();
        printf("\nYou are worthy.\n");
        printf("WELCOME TO HEAVEN!\n");
        printf("  ***************\n");
        printf("  *   (^_^)      *\n");
        printf("  ***************\n");
    }
    else
    {
        printf("\nGuardian: You failed.\n");
        press();
        hell();
    }
}

int ques(int n,int i)
{
    int opt,right=0;

    if(n==0)
    {
        printf("\nWhat is 5 + 7?\n1)10 2)12 3)14 4)11\n");
        if(scanf("%d",&opt),opt==2) right=1;
    }
    else if(n==1)
    {
        printf("\nHow many lines from 7 points?\n1)21 2)22 3)23 4)24\n");
        if(scanf("%d",&opt),opt==1) right=1;
    }
    else if(n==2)
    {
        printf("\nNext term: 2,12,36,80,150,?\n1)342 2)244 3)252 4)336\n");
        if(scanf("%d",&opt),opt==3) right=1;
    }
    else
    {
        printf("\nTemperature of black hole?\n1)-175 2)+123 3)-252 4)-273\n");
        if(scanf("%d",&opt),opt==4) right=1;
    }

    if(right)
        printf("Correct!\n");
    else
    {
        printf("Wrong!\n");
        wrong=1;
    }

    return 0;
}

void hell()
{
    clearScreen();
    printf("\n*** YOU ARE IN HELL ***\n");
    printf("\nDevil: Due to your sins...\n");
    printf("\n<<<< YOU ARE DRAGGED AWAY >>>>\n");
    hell1=1;
}

/*
0 1 0 0 0 0 1
1 1 0 0 1 1 0  
0 0 1 1 1 0 1
1 0 0 0 0 1 1
1 1 1 1 0 0 1
1 1 1 1 0 0 0
1 1 0 0 0 1 1
1 0 1 1 1 1 1
*/
/*
    int i,j,n,a;
    scanf("%d",&n);
    clrscr();
    for(i=0;i<n;i++)
    {
        a=1;
        for(j=0;j<=i;j++)
        {
            if(i==1)
            {
                printf("%d ",(a+1)%2);
            }
            else
            {
                printf("%d ",a%2);
            }
            a++;
        }
        printf("\n");
    }
    getch();    
        printf("__|-??\n          -|-----|-\n           |     |\n           |_____|");
    }
    printf("\n| 1 | 2 | 3 | 4 | 5 | 6 | 7 |");
    printf("\n_____________________________");
    for(i=8;i>0;i--)
    {
    if(count<i)  
        printf("\n| 🟪 | 🟪 | 🟪 | 🟪 | 🟪 | 🟪 | 🟪 |");
    else
        row(i-1);
    printf("\n_____________________________");
    }
    printf("\n        ???");
    if(count==0)
        printf("?? ");
    else
        printf("??");
    printf("???\n        ???????\n");
    printf("\ncount=%d\n", count);
}
void row(int n)
{
    int i1;
    printf("\n|");
    for(i1=0; i1<7; i1++)
    {
        if(brd[n][i1]==0)
            printf(" ✅|");
        else if(brd[n][i1]==1)
            printf(" ❌|");
        else if(brd[n][i1]==2)
            printf(" 👣|");
        else if(brd[n][i1]==3)
            printf(" ⚜️ |");
        else if(brd[n][i1]==4)
            printf(" ☠️|");  
    }
}
*/