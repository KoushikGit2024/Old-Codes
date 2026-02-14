#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int count=0,brd[8][7],won=0,win=0,wrong=0,pre,hell1,gen;
char name[10],temp[10]="",temp2[10]="\n";
void intro();
void press1();
void press();
void prestory();
void rules();
void trap();
void board();
void row(int n);
void input();
void timer(int t);
void protector();
void timer(int t);
void heaven();
int ques(int n,i);
void hell();
int main()
{
    int stln,flag=0,flag2,i,j,x;
    heaven();
    /*for(i=1;i>0;i++)
    {
    printf("%d\n",i);
    //printf("%d\n",time(0));
    //printf("%d",srand(time(0)));
    //getchar();
    }*/
    char gen1;
    intro();
    press1();
    do{
    flag=0;
    flag2=0;
    printf("\nEnter the name of the player: ");
    fgets(name,10,stdin);
        stln=strcmp(name,temp);
        flag2=strcmp(name,temp2);
        for(i=0;i<strlen(name);i++)
            if(name[i]=='\b'||name[i]=='\t'||name[0]==' ')
            {
            flag=1;
            }
        if(name[i]=='\b'||name[i]=='\t'||stln==0||name[0]==' ')
            printf("\n(Enter again not sufficient for memory)");
    } while(flag==1||stln==0||flag2==0);
    printf("\nEnter your gender male(1)\nfemale(2)");
    do{
        printf("\nEnter the respective number: ");
        scanf("%s",&gen1);
        gen=gen1-48;
        if(gen<1||gen>2)
        printf("\n[Invalid number]");
    } while(gen<1||gen>2);
    prestory();
    press1();
    rules();
    trap();
    input();
    if(hell1==1)
    goto last;
    heaven();
    last:
    {}
    press1();
    printf("\nThanks for playing came again\nsoon.??????");
}
void rules()
{
    clrscr();
    printf("\n\n\t[('\"'RULES'\"')]\n===============================\n\n");
    printf("\n1) Don't use space in player name.");
    printf("\n2) Only enter the respective gender number.(In Gender Option)");
    printf("\n3) Read the whole story to understand the game.");
    press1();
    printf("\n4)    ABOUT THE ROAD\n");
    printf("\nIn the road their are 8 rows and 7 columns you have to cross all of them to reach your goal,the HEAVEN.If you failed you will fall in hell and by calculating your life time works the next decision for your soul's will be taken.");
    printf("\nThe used notations are:-\n");
    printf("\n  i)?    Tile");
    printf("\n ii)??    Correct Tile");
    printf("\niii)?   Wrong Tile");
    printf("\n iv)??    Your Current Position");
    printf("\n  v)??    Stepped Wrong Tile");
    printf("\n vi)??   Previously Stepped Tile");
    press1();
    printf("\n\n\n\n\t[([(LET'S GOOO)])]");
}
void intro()
{
    printf("\n\n\n==============================\n|WELCOME TO THE GAME WORLD OF|\n|\t    KOUSHIK\t     |\n==============================\n\n\n\n\t\t--Concept Of Me\n\t\t   & made by Me\n\t\t  (KOUSHIK KAR)\n\n  ??   [THE ROAD TO THE]  ??\n  ??????  [HEAVEN]   ??????\n          ????????");
}
void press1()
{
    printf("\n[Press Enter To Continue]");
    getchar();
    clrscr();
}
void press()
{
    printf("\n[Press Enter To Continue]");
    getchar();
    getchar();
    clrscr();
}
void prestory()
{
    clrscr();
    printf("\n\t\t??");
    printf("\nYour name is %s.You was a citizen of Serampore. One day you are going for a urgent meeting-\n",name);
    if(gen==1)
        printf("\t\t??");
    else if(gen==2)
        printf("\t\t?????");
    printf("\n-------------------------------");
    press();
    printf("\n\t\t??");
    printf("\nBut suddenly a incident happened.");
    printf("\n    ??\t");
    if(gen==1)
        printf("\t\t??");
    else if(gen==2)
        printf("\t\t?????");
    printf("\n-------------------------------");
    press1();
    printf("\n\t\t??");
    printf("\nYou died in a dangerous car accident.\n\n\nNow you are at the entrance of heaven and hell and infront of you there is the decision road.\n[Good Luck! May God Bless You]");
}
void trap()
{
    int cnt=1,t,i,j,flag,x[11];
    clrscr();
    for(i=0; i<8; i++)
        for(j=0; j<7; j++)
            brd[i][j]=0;    
    for(cnt=0; cnt<8; cnt++)
    {
            i=0;
        do {
            do {
                flag=0;
                x[i]=rand()%8;
                for(j=1; j<i-1; j++)
                {
                   if(x[i]==x[j])
                      flag=1;
                }  
            }
            while(flag==1);
            i++;
               
        }
        while(i<6);
        if(cnt<2)
            t=3;
        else if(cnt<4)
            t=4;
        else if(cnt<6)
            t=5;
        else if(cnt<8)
            t=6;
        for(i=0; i<t; i++)
        {
            brd[cnt][x[i]]=1;
        }
    }
    for(i=0; i<8; i++)
    {
        for(j=0; j<7; j++)
            printf(" %d",brd[i][j]);
        printf("\n");
    }
    board();
}
void board()
{
    int i,j;
    printf("\n\n   THE ROAD TO THE HEAVEN");
    printf("\n  ÷×÷×÷×÷×÷×÷++÷×÷×÷×÷×÷×÷");
    if(count==8)
    {
        printf("\n        ??-|__??");
    
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
void input()
{
    char m;
    int n,i;
    if(count<8)
    {
    for(i=0; i<7; i++)
    {
        printf(" %d",brd[count][i]);
    }
    if(count>0)
        brd[count-1][pre]=2;
    do {
        printf("\n%s,Enter your next step no: ",name);
        scanf("%s",&m);
        n=m-49;
        if(m<'1'||m>'7')
            printf("\n(Invalid Input-Enter Again)");
    } while(m<'1'||m>'7');
    if(brd[count][n]==0)
    {
        brd[count][n]=3;
        pre=n;
        count=count+1;
        board();
        input();
    }
    else
    {   
        brd[count][n]=4;
        count++;
        board();
        printf("(Oh nooo!You have stepped on a wrong tile.)\n\n\n");
        press();
        hell();
    }
    }
}
void timer(int t)
{
    int x,y=5,z,alpha=0;
    for(alpha=0;(x-y)<=t;alpha++)
    {
        x=time(0)%100;
        if(alpha==0)
            y=x;
        alpha=1;
        printf("\n%d",(x-y));
    }
}
void heaven()
{
    int i,j,x;
    printf("\n😊:>Finally the gate appears.      (⛩️)");
    press();
    printf("\n😳:>Once a minute who is he?");
    press1();
    for(j=0;j<6;j++)
    {
    clrscr();
    if(j<5)
    {
        printf("\n        ☁️☁️-|______|-☁️☁️\n         ☁️-|------|-☁️\n           |      |\n           |______|");
        for(int ab=0;ab<(5-j);ab++)
            printf(" ");
        printf("👿");
    }
    else
        printf("\n        ☁️☁️-|______|-☁️☁️\n         ☁️-|------|-☁️\n           |      |\n           |__👿__|");
    printf("\n_____________________________");
    row(7);
        printf("\n_____________________________");
    row(6);
        printf("\n_____________________________");
    row(5);
        printf("\n_____________________________");
    printf("\n(press enter)");
    getchar();
    }
    clrscr();
    printf("[To see the conversation press]\n      [enter every time]");
    printf("\n??:>Who are you?");
    getchar();
    printf("\n\tI am Xavier,protector\n\t       of the gate.<:👿");
    getchar();
    printf("\n??>What do you want?");
    getchar();
    printf("\n\t\tI don't let \n\t\t you to go.<:👿\n\tIf you wouldn't give\n\t      answers of my\n\t    three questions.");
    getchar();
    printf("\n??:>I don't want to \n   give any answer.");
    getchar();
    printf("\n\t     Then you will\n\t      fall in hell.<:👿\n\t Ofcourse you also\n\t       fall if you \n\tanswered any wrong.");
    getchar();
    printf("\n??:>Ok! I am ready.");
    getchar();
    printf("\n\t\t Very Good!<:👿");
    for(i=1;i<4 && wrong==0;i++)
    {
    x=rand()%10;
    printf("\n\t(Question no. %d)",i);
    ques(x,i);
    }
    if(wrong==0)
    {
        clrscr();
        printf("\t\t😈\n I think you are not a bad fellow.");
        press();
        printf("\t\t✨");
        press1();
        printf("\t\t👼\nGo JESUS is waiting for you");
        press1();
        printf("\n      ??????????????????\n     ????????????????????\n  ????     (-----)      ????\n ??????   (  ^_^  )    ??????\n  ????     (-----)      ???? \n     ????????????????????\n      ??????????????????");
        printf("\n    [Now you are in heaven]\n  [among angels and flowers]\n       [and with JESUS]");
        printf("\n       +--(hello!)");
        printf("\n    ????        ??    ??");
        printf("\n   ??????---(hello)");
    }
    else
    {
        printf("??:>I'm sorry but it is not your place.");
        press();
        hell();
    }
}
int ques(int n,i)
{
    int right=0,opt;
    if(n==0)
    {
    
    }
    else if(n==1)
    {
    
    }
    else if(n==2)
    {
        printf("\nWhat is the next term of the given series\n2,12,36,80,150,?");
        printf("\n1)342\t2)244\n3)252\t4)336");
    }
    else if(n==3)
    {
        printf("\nHow many maximum lines can be drawn by 7 points");
        printf("\n1)21\t2)22\n3)23\t4)24");
    }
    else if(n==4)
    {
    
    }
    else if(n==5)
    {
    
    }
    else if(n==6)
    {
        printf("\nWhat is the temperature of the centre of a black hole");
        printf("\n1)-175.90°C\t2)+123.45°C\n3)-252.08°C\t4)-273.15°C");
    }
    else if(n==7)
    {
        
    }
    else if(n==8)
    {
    
    }
    else if(n==9)
    {
    
    }
    do{
        printf("\nEnter your option: ");
        scanf("%d",&opt);
        if(opt<1||opt>4)
        printf("\n[Invalid option]");
    } while(opt<1||opt>4);
    if(n==0&&opt==0)
        right=1;
    else if(n==0&&opt==0)
        right=1;
    else if(n==2&&opt==3)
        right=1;
    else if(n==3&&opt==1)
        right=1;
    else if(n==0&&opt==0)
        right=1;
    else if(n==0&&opt==0)
        right=1;
    else if(n==6&&opt==4)
        right=1;
    else if(n==7&&opt==3)
        right=1;
    else if(n==0&&opt==0)
        right=1;
    else if(n==0&&opt==0)
        right=1;
    else
        wrong=1;
    if(i==1&& right==1)
    printf("\n(😈:>Smart)");
    else if(i==2&& right==1)
    printf("\n(😈:>Brilliant)");
    else if(i==3&& right==1)
    printf("\n(😈:>Excellent)");
}
void hell()
{
    int a=0,b=0,c,i,z,tm=0;
    clrscr();
    printf("\n[NOW YOU ARE IN THE DARK WORLD]");
    printf("\n           [?? HELL?? ]\n\n");
    printf("\n| Welcome My Friend |");
    printf("\n|You Are Now In Hell|");
    printf("\n     |      ????-(Punish Him!)");
    printf("\n     |    ??????-(Punish Him!)");
    printf("\n    👹           +-{!!!Why???}");
    printf("\n  ??????        ");
    if(gen==1)
    printf("??");
    else if(gen==2)
    printf("??");   
    printf("\n");
    press1();
    printf("[To see the conversation press]\n      [enter every time]");
    printf("\n\n??:> Due to your sins.");
    getchar();
    printf("\n\t  I hadn't done any<:??\n\t     sin in my life.");
    getchar();
    printf("\n??:>Oh really!");
    getchar();
    printf("\n\t\t\tYes<:??");
    getchar();
    printf("\n??:>Then I will show your\n    life calculation.");
    getchar();
    printf("\n\t\t I also want\n\t\t  to see it<:??");
    getchar();
    while(a<100000000)
        a=rand()%1000000000;
    while(b<100000000)
        b=rand()%1000000000;
    if(a<b)
    {
        c=b;
        b=a;
        a=c;
    }
    logo:
    clrscr();
    printf("\n??:>Here it is\n\n    {Fate Calculator}\n|----------------------|\n|Bad works  | %d|\n|Good works | %d|\n|----------------------|\n|Total works| ",a,b);
    z=a-b;
    for(i=0;i<8;i++)
    {
        if(z/10==0)
        printf(" ");
        z/=10;
    }
    printf("%d|(Bad)\n|----------------------|",a-b);
    if(tm==0)getchar();
    printf("\n\tI'm sorry for that\n\t please forgive me.<:??");
    if(tm==0)getchar();
    printf("??:>No way!\n   You will be punished.");
    if(tm==0)getchar();
    printf("\n\t\t   Noooooo!<:??");
    if(tm==0)
    printf("\n?????????????");
    else if(tm==1)
    printf("\n??                ??");
    else if(tm==2)
    {
    clrscr();
    printf("\n??:>[Bring The Next Suspect]");   
    }
    getchar();
    if(tm==0)
    {
        tm=1;
        goto logo;
    }
    ++tm;
    if(tm==2)
    goto logo;
    hell1=1;
}
/*
👺👹👿
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
*/