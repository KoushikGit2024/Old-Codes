#include<stdio.h>

int main()
{   int m[3][3],M[3][3],s[3][3],i,j,row,colm;
    printf("||ADDITION OF TWO MATRIX||\n ~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n");
   
    printf("Enter the length of the row:");
    scanf("%d",&row);
    
    printf("\n\nEnter the length of the column:");
    scanf("%d",&colm);
    
    
     printf("\n\nEnter the values of the first matrix:---");
    printf("\n====================================\n\n");
   
    
    
    
    
     for(i=0; i<row; i++)
    {

        for(j=0; j<colm; j++)
        {
            printf("m[%d][%d]=",i,j);
            scanf("%d",&m[i][j]);
        }

    }

    printf("\n\nThe first matrix is ~~\n===================\n");


    for(i=0; i<row; i++)
    {
printf("|");
        for(j=0; j<colm; j++)
        {

            printf("%d\t",m[i][j]);
        }
        printf("|\n");
    }





printf("\n\n\nEnter the values of the second matrix:---");
    printf("\n=====================================\n\n");
    for(i=0; i<row; i++)
    {

        for(j=0; j<colm; j++)
        {
            printf("m[%d][%d]=",i,j);
            scanf("%d",&M[i][j]);
        }

    }

    printf("The second  matrix is ~~\n===================\n");


    for(i=0; i<row; i++)
    {
        printf("|");
        for(j=0; j<colm; j++)
        {

            printf("%d\t",M[i][j]);
        }
        printf("|\n");
    }






printf("\n\n\nThe sum of the matrixes is ~~\n====================\n");


    for(i=0; i<row; i++)
    {
         printf("|");
        for(j=0; j<colm; j++)
        {

            printf("%d\t",M[i][j]+m[i][j]);
        }
        printf("|\n");

     }





   
  

    return 0;
}