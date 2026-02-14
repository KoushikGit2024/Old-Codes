#include <stdio.h>
#define ROW 10
#define COL 10

int main()
{
    int board[ROW][COL];
    int i, j, u, v, bombs, score = 0;

    /* Initializing board with zeros */
    for(i=0; i<ROW; ++i)
        for(j=0; j<COL; ++j)
            board[i][j] = 0;

    /* Setting up bombs randomly on the board */
    for(bombs=0; bombs<15; ++bombs)
    {
        i = rand() % ROW;
        j = rand() % COL;
        board[i][j] = 1;
    }

    /* Playing game */
    while(1)
    {
        printf("Enter row and column number: ");
        scanf("%d %d", &u, &v);

        /* Handling invalid input */
        if(u >= ROW || u < 0 || v >= COL || v < 0)
            printf("Invalid input. Try again.\n");
        else
        {
            /* Detonating bomb */
            if(board[u][v] == 1)
            {
                printf("You hit a bomb! Game over. Your score is %d.\n", score);
                break;
            }
            /* Marking cell as visited */
            else if(board[u][v] == 2)
                printf("You have already visited this cell.\n");
            /* Exploding cell */
            else
            {
                board[u][v] = 2;
                score++;
                if(u > 0 && board[u-1][v] == 1)
                    score++;
                if(u < ROW-1 && board[u+1][v] == 1)
                    score++;
                if(v > 0 && board[u][v-1] == 1)
                    score++;
                if(v < COL-1 && board[u][v+1] == 1)
                    score++;
                printf("Boom! Your score is now %d.\n", score);
            }
        }
    }

    return 0;
}


