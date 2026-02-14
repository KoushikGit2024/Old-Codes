#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *ptr;
};
struct node *head,*p,*temp,*prvs,*curnt;
int a,i=0,opt,val;
void create()
{
    if(head==NULL)
    {
        printf("\n(New List created)");
        head=malloc(sizeof(struct node));
        printf("\nEnter your value: ");
        scanf("%d",&head->data);
        head->ptr=NULL;
    }
    else
        printf("\n(Already Created)");
}
void insfnt(int dt)
{
    p=head;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=dt;
    temp->ptr=head;
    head=temp;
    printf("\n(Data Inserted at Front)");
}
void insmid(int dt)
{
    char opt,abc;
    int psn=0;
    p=head;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=dt;
    while(p->ptr!=NULL&&abc!='z')
    {
        printf("|%d[%u]|-->%d",p->data,p->ptr,psn);
        psn++;
        printf("\n(Enter after this)\nIf yes prees [Y]\nIf you want to exit this option press [E]");
        opt=getch();
        printf("\n1");
        p=p->ptr;
        if(opt=='y'||opt=='Y'||opt=='e'||opt=='E')
        {
            abc='z';
            /*printf("\npsn=%d",psn);
            psn++;
            printf("\npsn=%d",psn);
            printf("\n2");*/
            
            
        }
        if(p->ptr==NULL)
            printf("\nIt is the last node.");
    }
    if(opt=='y'||opt=='Y')
    {          
        p=head;
        while(psn!=1)
        {
            p=p->ptr;
            psn--;
        }
        temp->ptr=p->ptr;
        p->ptr=temp;
        printf("\n1");
        printf("\n(Data Inserted at Middle)");
    }
    
}
void insend(int dt)
{
    p=head;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=dt;
    temp->ptr=NULL;
    while(p->ptr!=NULL)
        p=(p->ptr);
    p->ptr=temp;
    printf("\n(Data Inserted at End)");
}
void insert()
{
    do{
        clrscr();
        printf("\nInsert at:-\n1)Front\t\t2)Middle\t3)End");
        printf("\nEnter the number: ");
        scanf("%d",&opt);     
        if(opt>0&&opt<4)
        {
            printf("\nEnter the value: ");
            scanf("%d",&val);
        }
        switch(opt)
        {
            case 1:
                insfnt(val);
            break;
            case 2:
                insmid(val);
            break;
            case 3:
                insend(val);
            break;
            default:
                printf("\n[The number is out of range\\Please enter again]");
       }
    } while(opt<1||opt>3);
}
void delfnt()
{
    temp = head->ptr;
    free(head);
    head=temp;
    printf("\n(front element deleted)");
}
void delmid()
{
    char opt,abc;
    int psn=0;
    prvs=head;
    curnt=head;
    printf("curnt=%u",curnt);
    printf("\nHead Node is:\n--->|0[%u]|-->%d",curnt,psn);
    while(p->ptr!=NULL&&abc!='z')
    {
        psn++;
        opt=getch();
        printf("\nPresent Node is:\n--->|%d[%u]|-->%d\nCurrent=%u",curnt->data,curnt->ptr,psn,temp);
        printf("\n(Delete this node)\nIf yes prees [Y]\nIf you want to exit this option press [E]");
        temp=prvs;
        prvs=curnt;
        curnt=curnt->ptr;
        if(opt=='y'||opt=='Y'||opt=='e'||opt=='E')
        {
            abc='z';
        }
        if(p->ptr==NULL)
            printf("\nIt is the last node.");
    }
    if(opt=='y'||opt=='Y')
    {          
        while(psn!=1)
        {
            temp->ptr=prvs;
            printf("\ntempptr=%u||prvsptr=%u",temp,prvs);
            free(prvs->ptr);
        }
        temp->ptr=p->ptr;
        p->ptr=temp;
        printf("\n1");
        printf("\n(Data Deleted at Middle)");
    }
}
void delend()
{
    p=head;
    for(i=0;p->ptr!=NULL;i++)
    {
        temp=p;
        p=p->ptr;
        printf("\np=%u,temp=%u",p,temp);
    }
    temp->ptr=NULL;
    free(p);
    printf("(last element deleted)");
}
void delete()
{
    do{
        clrscr();
        printf("\nDelete at:-\n1)Front\t\t2)Middle\t3)End");
        printf("\nEnter the number: ");
        scanf("%d",&opt);     
       /* if(opt>0&&opt<4)
        {
            printf("\nEnter the value: ");
            scanf("%d",&val);
        }*/
        switch(opt)
        {
            case 1:
                delfnt(val);
            break;
            case 2:
                delmid(val);
            break;
            case 3:
                delend(val);
            break;
            default:
                printf("\n[The number is out of range\\Please enter again]");
       }
    } while(opt<1||opt>3);
}
void dspl()
{
    p=head;
    printf("\nDisplaying the link list:\n");
    while(p!=NULL)
    {
        printf("|%d[%u]|-->",p->data,p->ptr);
        p=(p->ptr);
    }
}
main()
{
    double a=75789.5858598;
    printf("%1f",a);
/*logo:
    printf("\nEnter your choice:-\n1) Create\t2) Insert\n3) Edit\t\t4) Delete\n5) Display\t6) Exit");
    printf("\nEnter the number: ");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:
            create();
            printf("\nE:");
    scanf("%d",&a);
    insend(a);
    printf("\nE:");
    scanf("%d",&a);
    insfnt(a);
    printf("\nE:");
    scanf("%d",&a);
    insend(a);
    printf("\nE:");
    scanf("%d",&a);
    insfnt(a);
    printf("\nE:");
    scanf("%d",&a);
    insend(a);
    printf("\nE:");
    scanf("%d",&a);
    insfnt(a);
    dspl();
    printf("\nE:");
    scanf("%d",&a);
    insfnt(a);
    dspl();
    printf("\nE:");
    scanf("%d",&a);
    insend(a);
        break;
        case 2:
            insert();
        break;
        case 3:
        
        break;
        case 4:
            delete();
            /*clrscr();
            printf("\nDelete at:-\n1)Front\t\t2)Middle\t3)End");
            printf("\nEnter the number: ");
            scanf("%d",&opt);
            switch(opt)
            {
                case 1:
                    fnt();
                break;
                case 2:
                    mid();
                break;
                case 3:
                    end();
                break;
                default:
                    printf("\n[The number is out of range\\Please enter again]");
            }*
        break;
        case 5:
            dspl();
        break;
        case 6:
            exit(0);
        break;
        default:
            printf("\n[The number is out of range\\Please enter again]");
    }
goto logo;
    /*
    create();
    printf("\nE:");
    scanf("%d",&a);
    insend(a);
    printf("\nE:");
    scanf("%d",&a);
    insfnt(a);
    printf("\nE:");
    scanf("%d",&a);
    insend(a);
    printf("\nE:");
    scanf("%d",&a);
    insfnt(a);
    printf("\nE:");
    scanf("%d",&a);
    insend(a);
    printf("\nE:");
    scanf("%d",&a);
    insfnt(a);
    dspl();
    printf("\nE:");
    scanf("%d",&a);
    insmid(a);
    dspl();
    printf("\nE:");
    scanf("%d",&a);
    insmid(a);
    dspl();
    /*create();
    while(i<3)
    {
        scanf("%d",&a);
        insend(a);
        i++;
    }
    */
}