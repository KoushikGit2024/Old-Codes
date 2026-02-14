#include<stdio.h>
#include<conio.h>
double fact(float a)
{
    double i,m=1;
    for(i=1;i<=a;i++)
    {
        m=m*i;
    }
    return m;
}
int main()
{
    double e=1;
    int j;
    for(j=1;j>0;j++)
    {
        e=e+1/fact(j);
        printf("\nThe val of e≈%.60lf\nj=%d",e,j);
        getch();
        clrscr();
    }
    return 0;
}