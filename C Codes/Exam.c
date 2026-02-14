#include<stdio.h>
#include<conio.h>
#include<string.h>
/*Section-C:=>(ques) 
i)Make a folder on desktop.
ii)Make a file using MSpaint
iii)Save the file on the folder
[Marks:1+2+2]
*/
void prime10();
void school();
void main()
{
    printf("\tSchool Practical Exam 2023\n\n\n\n");
    prime10();
    school();
}
/*Section-B:=>(ques) Input 10 numbers and find the prime numbers among them using fot loop*/
/*Mark [5]*/
void prime10()
{
    int i,j,flag,n;
    //clrscr();
    printf("\n[Enter ten numbers to check if they are prime or not]\n");
    for(i=0;i<10;i++)
    {
        printf("\nEnter number (%d): ",(i+1));
        scanf("%d",&n);
        if(n<4)
            printf("\n%d is a prime number.",n);
        else
        {
            flag=0;
            for(j=2;j<n;j++)
            {
                if(n%j==0)
                    flag=1;
            }
            if(flag==0)
                printf("\n%d is a prime number.",n);
            else
                printf("\n%d is not a prime number.",n);
        }
/*
                     {Output}
[Enter ten numbers to check if they are prime or not]

Enter number (1): 76

76 is not a prime number.
Enter number (2): 68

68 is not a prime number.
Enter number (3): 89

89 is a prime number.
Enter number (4): 55

55 is not a prime number.
Enter number (5): 34

34 is not a prime number.
Enter number (6): 43

43 is a prime number.
Enter number (7): 4

4 is not a prime number.
Enter number (8): 3

3 is a prime number.
Enter number (9): 18

18 is not a prime number.
Enter number (10): 103

103 is a prime number.
(The output is generated as madam's requirement)
*/          
    }
    getchar();
}
/*Section-C:=>(ques) Input your school's name in three parts and output using only a string*/
/*[Mark:10]*/
void school()
{
    char f[30],s[10],t[10],c[2]=" ";
    //clrscr();
    printf("\nEnter your school name's:-");
    printf("\nFirst part: ");
    scanf("%s",&f);
    printf("\nSecond part: ");
    scanf("%s",&s);
    printf("\nThird part: ");
    scanf("%s",&t);
    strcat(f,c);/*The string c is declared when madam asked to add space between the words*/
    strcat(f,s);
    strcat(f,c);
    strcat(f,t);
    printf("\nThe full name of your school is: %s.",f);
    getchar();
/*
       {Output}
Enter your school name's:-
First part: Serampore

Second part: Union

Third part: Institution

The full name of your school is: Serampore n Institution.
*/
}