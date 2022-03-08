#include <stdio.h>
/*
    Name: Parham Khodadi
    Total Weighted Score = (average assignment scores) * 40% + (midterm score) * 30% + (final exam score) * 30%
*/

int main()
{
    int Continue = 0;
    while(Continue==0)
    {
        /* Define variables */
        float Score1, Score2, Score3, AverageScore, Midterm, Final, Total;

        /* Introduction */
        printf("\n=================");
        printf("\nWelcome to the Total Weighted Score calculator!\nWe require scores for 3 assignments, midterm, and final exam.\nPlease enter each score out of 100 when prompted.\n=================\n");

        /* Prompt and assign/store each variable */
        printf("First assignment: ");
        scanf("%f", &Score1);
        printf("Second Assignment: ");
        scanf("%f", &Score2);
        printf("Third Assignment: ");
        scanf("%f", &Score3);
        printf("Midterm Score: ");
        scanf("%f", &Midterm);
        printf("Final Exam Score: ");
        scanf("%f", &Final);

        /* Calculations */
        AverageScore = (Score1 + Score2 + Score3) / 3;
        Total = (AverageScore * 0.4) + (Midterm * 0.3) + (Final * 0.3);

        /* Give calculated result */
        printf("=================\nYour Total Weighted Score is %f\n", Total);

        /* Ask if they want to repeat */
        printf("Would you like to use the calculator again? (please use 0 for yes and 1 for no)\n");
        scanf("%i", &Continue);
        printf("\n");
    }

    system("pause");
    return 0;
}