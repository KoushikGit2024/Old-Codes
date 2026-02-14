#include<stdio.h>
#include<conio.h>
long int n1,n2,sum,a[50],b[50],s[50],c[50],bitn1,bitn2,bitn3, greater,i=0,j;
void cal_bit();
int not(int p);
void or(int m,int n,int o);
void flow_FA();
void main()
{
//clrscr();
    printf(" The sequencial work of F.A\n==============================");
    do {
        printf("\nEnter the first number(>=0): ");
        scanf("%ld",&n1);
        if(n1<0)
            printf("\n[The Number Must Be Positive]");
    } while(n1<0);
    do {
        printf("\nEnter the second number(>=0): ");
        scanf("%ld",&n2);
        if(n2<0)
            printf("\n[The Number Must Be Positive]");
    } while(n2<0);
    for(j=0; j<50; j++)
    {
        a[j]=0;
        b[j]=0;
        s[j]=0;
    }
    cal_bit();
    printf("your numbers are:-\n%d\t\t%d",n1,n2);
    printf("\nAnd their equivalent binary numbers are:-\n");
    for(j=bitn1-1; j>=0; j--)
        printf("%ld",a[j]);
    printf("\n");
    for(j=bitn2-1; j>=0; j--)
        printf("%ld",b[j]);
    if(bitn1>bitn2)
        greater=bitn1;
    else
        greater=bitn2;
    or(a[i],b[i],0);
    printf("\nThe block diagram is:-\n\n");
    printf("\nA[%ld]=%ld",i,a[i]);
    printf("\n| B[%ld]=%ld",i,b[i]);
    printf("\n| |");
    printf("\n| |  |----------|");
    printf("\n| +--| H.A=>%ld |---->S[%ld]=%ld",i,i,s[i]);
    printf("\n+----|----------|");
    if(i==greater-1)
    {
        s[greater]=c[greater-1];
        printf("\n    |");
        printf("\n |");
        printf("\n S[%d]=%d", greater,s[greater]);
    }
    for(i=1; i<greater; i++)
        flow_FA();
    if(s[i]==1)
        bitn3=i;
    else
        bitn3=i-1;
    printf("\n\n The finalized result is:=>\n");
    printf("Number(1)= \t ");
    if(s[greater]==1&&bitn1<bitn2)
    {
        for(j=0; j<=bitn2-bitn1+1; j++)
            printf(" ");
    }
    if(s[greater]==0&&bitn1<bitn2)
    {
        for(j=0; j<bitn2-bitn1; j++)
            printf(" ");
    }
    for(j=bitn1-1; j>=0; j--)
        printf("%ld",a[j]);
    printf(" = %ld",n1);
    printf("\nNumber(2)= \t+");
    if(s[greater]==1&&bitn2<bitn1)
    {
        for(j=0; j<bitn1-bitn2; j++)
            printf(" ");
    }
    if(s[greater]==0&&bitn2<bitn1)
    {
        for(j=0; j<bitn1-bitn2; j++)
            printf(" ");
    }
    for(j=bitn2-1; j>=0; j--)
        printf("%ld",b[j]);
    printf(" = %ld",n2);
    printf("\n\t\t");
    for(j=0; j<=greater; j++)
        printf("-");
    printf("\nSum=\t\t ");
    for(j=bitn3; j>=0; j--)
        printf("%ld",s[j]);
    printf(" = %ld",n1+n2);
}
void cal_bit()
{
    int i1,nn;
    nn=n1;
    for(i1=0; nn>0; i1++)
    {
        a[i1]=nn%2;
        nn=nn/2;
    }
    bitn1=i1;
    nn=n2;
    for(i1=0; nn>0; i1++)
    {
        b[i1]=nn%2;
        nn=nn/2;
    }
    bitn2=i1;
}
void or(int m,int n,int o)
{
    sum=m+n+o;
    if(sum==0)
    {
        s[i]=0;
        c[i]=0;
    }
    else if(sum==1)
    {
        s[i]=1;
        c[i]=0;
    }
    else if(sum==2)
    {
        s[i]=0;
        c[i]=1;
    }
    else if(sum==3)
    {
        s[i]=1;
        c[i]=1;
    }
}
void flow_FA()
{

    if(i!=greater)
    {
        if(i<10)
        {
            or(a[i],b[i],c[i-1]);
            printf("\n |");
            printf("\n |");
            printf("\nA[%ld]=%ld ↓ C[%ld]=%ld",i,a[i],i-1,c[i-1]);
            printf("\n| B[%ld]=%ld |",i,b[i]);
            printf("\n| | |");
            printf("\n| | |----------|");
            printf("\n| +--| F.A=>%ld |---->S[%ld]=%ld",i,i,s[i]);
            printf("\n+----|----------|");
        }
        else if(i>=10)
        {
            or(a[i],b[i],c[i-1]);
            printf("\n |");
            printf("\n |");
            printf("\nA[%ld]=%ld ↓ C[%ld]=%ld",i,a[i],i-1,c[i-1]);
            printf("\n| B[%ld]=%ld |",i,b[i]);
            printf("\n| | |");
            printf("\n| | |-----------|");
            printf("\n| +--| F.A=>%ld |---->S[%ld]=%ld",i,i,s[i]);
            printf("\n+----|-----------|");

        }
    }
    if(i==greater-1)
    {
        s[greater]=c[greater-1];
        printf("\n |");
        printf("\n |");
        printf("\n S[%d]=%d", greater,s[greater]);
    }
}