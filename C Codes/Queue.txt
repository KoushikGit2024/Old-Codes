#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int q[10],fnt=0,rr=-1;
void insert()
{
    int val;
    if(rr==9)
        printf("\n[Queue is full no more element can be added]");
    else
    {
        printf("\nEnter your value: ");
        scanf("%d",&val);
        rr++;
        q[rr]=val;
        printf("\n(Data Saved)");
    }
}
void del()
{
    if((rr+1)==fnt)
        printf("\n[Queue is underflow, no more element can be deleted]");
    else
    {
        fnt++;
        printf("\n[Element Deleted]");
    }
}
void dspl()
{
    int i;
    if(fnt==(rr+1))
        printf("\n[Queue is empty nothing to display]");
    else
    {
        printf("\n");
        for(i=fnt;i<=rr;i++)
            printf("---");
        printf("\n|");
        for(i=fnt;i<=rr;i++)
            printf("%d|",q[i]);
        printf("\t Front=%d,Rear=%d\n",fnt,rr);
        for(i=fnt;i<=rr;i++)
            printf("---");
    }
}
void main()
{
    int opt;
    str:
    clrscr();
    do{
        printf("\nEnter your choice:");
        printf("\n(1) for Insert\t(2) for Delete\n(3) for Display\t(4) for Exit");
        printf("\nEnter number: ");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
                insert();
            break;
            case 2:
                del();
            break;
            case 3:
                dspl();
            break;
            case 4:
                exit(0);
            break;
            default:
                printf("\n(Invalid Number)");
        }
    } while(opt<1||opt>4);
    getch();
    getch();
    goto str;
}