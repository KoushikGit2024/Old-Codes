#include<stdio.h>
#include<conio.h>
void sum()
{
    float a,b,c;
    printf("Function Type: No Argument No Return");
    printf("\nEnter the numbers to add: ");
    scanf("%f %f",&a,&b);
    c=a+b;
    printf("\nThe value is: %f",c);
}
void sub(float a,float b)
{
    float c;
    c=a+b;
    printf("\nThe value is: %f",c);
}
float mul()
{
    float a,b,c;
    printf("Function Type: No Argument With Return");
    printf("\nEnter the numbers to multiply: ");
    scanf("%f %f",&a,&b);
    c=a+b;
    return c;
}
float div(float a,float b)
{
    float c;
    c=a+b;
    return c;
}
void main()
{
    int opt;
    float x,y,z;
    str:
    clrscr();
    do{
        printf("\nEnter your choice:");
        printf("\n(1) for Addition\t(2) for Substraction\n(3) for Multiplication\t(4) for Division");
        printf("\nEnter number: ");
        scanf("%d",&opt);
        printf("\n\n\n");
        switch(opt)
        {
            case 1:
                sum();
            break;
            case 2:
                printf("Function Type: With Argument No Return");
                printf("\nEnter the numbers to substract: ");
                scanf("%f %f",&x,&y);
                sub(x,y);
            break;
            case 3:
                z=mul();
                printf("\nThe value is: %f",z);
            break;
            case 4:
                printf("Function Type: With Argument With Return");
                printf("\nEnter the numbers to divide: ");
                scanf("%f %f",&x,&y);
                z=div(x,y);
                printf("\nThe value is: %f",z);
            break;
            default:
                printf("\n(Invalid Number)");
        }
    } while(opt<1||opt>4);
    getch();
    getch();
    goto str;
}