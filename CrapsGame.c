#include <stdio.h>
#include <stdlib.h>
/*
    name: Parham Khodadi
    class: CS 50 (1237)
    professor: Abbas Dehkhoda
    date: July 17, 2021
    NOTE:
    I tried everything I could think of! I tried using a strucutre, I tried using arrays, etc. Nothing worked.
    I had to use the simplest way I knew for it to finally work.
*/
void gameContinue(int a);

int main()
{
    int num1, num2, total, points;

    /* Intro */
    printf("Parham Khodadi - Project 4: Craps\n");
    srand(time(0));

    /* First roll */
    num1 = (rand() % 6) + 1;
    num2 = (rand() % 6) + 1;
    total = num1 + num2;
    printf("\nYou rolled %d + %d = %d", num1, num2, total);


    /* First roll win, lose, or continue? */
    switch (total)
    {
        case 7:
        case 11:printf("\n\nYou win! :D\n\nParham Khodadi - End of Project 4\n");
                break;
        case 2:
        case 3:
        case 12:printf("\n\nYou lose! :(\n\nParham Khodadi - End of Project 4\n");
                break;
        default:gameContinue(total);
                break;
    }
    return 0;
}

void gameContinue(int a)
{
    int x, y, z;
    printf("\n\n%d points, so the game continues:\n", a);
    do
    {
        x = (rand() % 6) + 1;
        y = (rand() % 6) + 1;
        z = x + y;
        printf("\nYou rolled %d + %d = %d", x, y, z);
    } while (z != 7 && a);

    if (z == 7)
    {
        printf("\n\nYou lose! :(\n\nParham Khodadi - End of Project 4\n");
    }
    else
    {
        printf("\n\nYou win! :D\n\nParham Khodadi - End of Project 4\n");
    }
}