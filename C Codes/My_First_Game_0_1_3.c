#include <conio.h>
#include <stdio.h>
#include <ctype.h>
int a,b,pln=1,count=1,j,p,y=1,z=1,n;
char square[9],square1[9]={'1','2','3','4','5','6','7','8','9'},pl1,pl2,pl11,pl22,s1,s2,c[2]={'O','X'},mark;
void scpln();
void board();
void choice();
void checkwin();
void replay();
void wincheck();
void main()
{
    logo:       
    count=z;
    for(n=0;n<9;n++)    
    square[n]=square1[n];
    if(y==1)    
    {
    printf("\n\n\n\n**WELCOME TO THE GAME WORLD OF KOUSHIK**\ncontent of INDRONIL LAHA\n\t\t-----made by KOUSHIK KAR\n\n\t\tTIK TAK TOW\n\n\n\n\t\tLET'S GO");    
    printf("\n\t[press enter to continue]");
    getchar();
    }
    else
    printf("👍👍 Welcome to play again 👍👍\n\n\n");
    y++;
    scpln();
    scpln();   
    if(a%2==0)
    {
    pl1=pl22;
    pl2=pl11;
    s2=c[0];    
    s1=c[1];
    }
    else
    {
    pl1=pl11;
    pl2=pl22;
    s1=c[0];    
    s2=c[1];
    }
    board();
    choice();
    if(j==1)
    goto logo;
}
//to check who is winner
void wincheck()
{
      if(count%2==0)
        {
        printf("\n\n\n\n   🎆🎆🎆🎆🎆Yah Hooooo🎆🎆🎆🎆🎆\n\t%c have won the match",pl1);        
        }
      else if(count%2!=0)
        {
        printf("\n\n\n\n   🎆🎆🎆🎆🎆Yah Hooooo🎆🎆🎆🎆🎆\n\t%c have won the match",pl2);        
        }   
        replay();
}
/*==================================
  for taking input of the player's 
  name and calculating their numbers 
  ==================================*/
void scpln()
{
    if(pln%2!=0)
    {
    printf("\nEnter first player name:  ");  
    scanf("%s",&pl11); 
    printf("Enter a number: ");
    scanf("%d",&a);
    }
    else 
    {
    printf("\nEnter second  player name:  ");  
    scanf("%s",&pl22); 
    printf("Enter a number: ");
    scanf("%d",&b);
    }    
    pln++;
}
/*======================
  print the game table
  ======================*/
void board()
{
    //clrscr();
    printf("\n\nThe symbols of %c is(%c) and %c is (%c)",pl1,s1,pl2,s2);  
    printf("\n     ===Tik Tak Tow===");
    printf("\n\t %c | %c | %c\n\t-----------\n\t %c | %c | %c\n\t-----------\n\t %c | %c | %c\n\t",square[0],square[1],square[2],square[3],square[4],square[5],square[6],square[7],square[8]);
}
void checkwin() 
{
  if(square[0] == square[1] && square[1] == square[2])
    {
      wincheck();
    }//1st horizontal
 else if(square[3] == square[4] && square[4] == square[5])
    {
      wincheck();
    }//2nd horizontal 
 else if(square[6] == square[7] && square[7] == square[8])
    {
      wincheck();
    }//3rd horizontal 
 else if(square[0] == square[3] && square[3] == square[6])
    {
      wincheck();
    }//1st vertical
 else if(square[1] == square[4] && square[4] == square[7])
    {
      wincheck();
    }//2nd vertical
 else if(square[2] == square[5] && square[5] == square[8])
    {
      wincheck();
    }//3rd vertical
 else if(square[0] == square[4] && square[4] == square[8])
    {
      wincheck();
    }//1st diagonal
 else if(square[2] == square[4] && square[4] == square[6])
    {
      wincheck();
    }//2nd diagonal
  else
    { if(count==10)
      {
          printf("😅😅😅Oh no!!!!Draw match😅😅😅");
          replay();
      }
      else
      choice();
    }
}//close 
/*if the player wants to replay*/
void replay()
    {
        //printf("\n[press enter to continue]");
        //getchar();  
        printf("\nIf you want to replay press(1) else (0)");
       do{printf("\nEnter your number:  ");
          scanf("%d",&j);
          if(j!=0&&j!=1)
          printf("(Invalid number please retry)");
         }while(j!=0&&j!=1);
        // if(j==1)
        // {
        // //clrscr();              
        // }
        // else
        // //clrscr();
    }
/*{{{{{{{{{{}}}}}}}}}}
  players squre codes
  {{{{{{{{{{}}}}}}}}}}*/
void choice()
{
if(count<=9)
  {
    if(count%2!=0)
    {
     do{
        printf("\n%c's turn, Enter your square number:  ",pl1);
        scanf("%d",&p);
        mark=s1;       
        if (p>9||p<1)
        {printf("\nInvalid square number[Enter again]");}
        if (isalpha(square[p-1]))
        printf("\n(The square is previously chosen)");
       }while (p>9||p<1||isalpha(square[p-1]));
/*invalid if greater than 9 or less than 1*/
    }
    else if(count%2==0)
    {
     do{
        printf("\n%c's turn, Enter your square number:  ",pl2);
        scanf("%d",&p);
        mark=s2; 
        if (p<1||p>9)
        {printf("\nInvalid square number[Enter again]");}
        if (isalpha(square[p-1]))
        printf("\n(The square is previously chosen)");
       }while (p<1||p>9||isalpha(square[p-1]));
    }
    count++;
    square[p-1]=mark;
    board();
/*to chech any match is done digonal or horizontal */
    if(count>4)
    {
    checkwin();   
    }
    else
    {   
    choice();
    }
  }
//finaly end
}