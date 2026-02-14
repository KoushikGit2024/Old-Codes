#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int stack[10],top=0;
void push();
void pop();
void dspl();
void del();
void main()
{
    int opt;
    char dis;
    clrscr();
start:
    printf("\nEnter your choice:");
    printf("\n(1)Push\t\t(2)Pop\n(3)Display\t(4)Delete\n(5)Quit");
    do {
        printf("\nEnter your number: ");
        scanf("%d",&opt);
        if(opt<1||opt>5)
            printf("\n(Invalid Number||Enter again)");
    } while(opt<1||opt>5);
    
    switch(opt)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        dspl();
        break;
    case 4:
        del();
        break;
    case 5:
        exit(0);
        break;
    }
    getch();
    getch();
        goto start;
    end:
      clrscr();
}
void push()
{
    int val;
    if(top<10)
    {
        if(top==0)
        {
            printf("\n[Stack is empty enter element]");
        }
        printf("\nEnter the value: ");
        scanf("%d",&val);
        stack[top]=val;
        top++;
        printf("\n(Data Saved)");
    }
    else
        printf("\nStack is full no more element will be pushed.");
}
void pop()
{
    char dis;
    if(top==0)
        printf("\n[Stack is underflow, nothing to pop.]");
    else
    {
        printf("\nDo you really want to pop the top element");
        printf("\nEnter Y for Yes N for No\n");
        do {
            printf("\n=>");
            scanf("%s",&dis);
            if(dis!='Y'&&dis!='N')
                printf("The statement is not clear.(Follow the above instruction)");
        } while (dis!='Y'&&dis!='N');
        clrscr();
        if(dis=='Y')
        {
            top=top-1;
            printf("\n(Element Poped)");
        }
    }
}
void dspl()
{
    int i;
    if(top!=0)
    {
        printf("\nPresent Stack is:");
        printf("\n\t\t--------");
        for(i=top-1; i>=0; i--)
            printf("\n\t\t|  %d\n\t\t-------",stack[i]);
        printf("\tTop=%d",top-1);
    }
    else
        printf("Stack is empty, nothing to display.");
    getch();
}
void del()
{
    char dis;
    if(top==0)
        printf("\n[Stack is underflow, nothing to delete.]");
    else
    {
        printf("\nDo you really want to delete the top element");
        printf("\nEnter Y for Yes N for No\n");
        do {
            printf("\n=>");
            scanf("%s",&dis);
            if(dis!='Y'&&dis!='N')
                printf("The statement is not clear.(Follow the above instruction)");
        } while (dis!='Y'&&dis!='N');
        clrscr();
        if(dis=='Y')
        {
            top=top-1;
            printf("\n(Element Deleted)");
        }
    }
}






    