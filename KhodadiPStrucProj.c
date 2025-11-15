#include <stdio.h>
/*
    name: Parham Khodadi
    class: CS 50 (1237)
    professor: Abbas Dehkhoda
    date: July 24, 2021
    NOTE: I spent 7 hours trying to figure out what I'm doing wrong in this assignment. I couldn't finish it.
*/
struct StudentRecord
{
    int studentNum;
    int quiz1;
    int quiz2;
    int midterm;
    int final;
    float numAve;
    char grade;
} student[5];

void input(struct StudentRecord * student);
void computeGrade(struct StudentRecord * student);
void output(const struct StudentRecord student);

int main()
{
    int i;
    for (i = 1; i < 5; i++)
    {
        input(student[i]);
        computeGrade(student[i]);
    }
    for (i = 1; i < 5; i++)
    {
        output(student[i]);
    }
    return 0;
}

void input(struct StudentRecord * student)
{
    int studNum;
    printf("\nEnter the student's number: ");
    scanf("%d", studNum);
    student[studNum].studentNum = studNum;
    printf("\nEnter two of the student's 10 point quizzes's grades:\n");
    scanf("%d%d", student[studNum].quiz1, student[studNum].quiz2);
    printf("\nEnter the student's grade out of 100 points for the midterm then the final exam:\n");
    scanf("%d%d", student[studNum].midterm, student[studNum].final);
}

void computeGrade(struct StudentRecord * student)
{
    student.numAve = (0.5 * student.final) + (0.25 * student.midterm) + (0.25 * (student.quiz1 + student.quiz2));
    if (student.numAve >= 90)
    {
        student.grade = 'A';
    } else if (student.numAve >= 80)
    {
        student.grade = 'B';
    } else if (student.numAve >= 70)
    {
        student.grade = 'C';
    } else if (student.numAve >= 60)
    {
        student.grade = 'D';
    } else
    {
        student.grade = 'F';   
    }
}

void output(const struct StudentRecord student)
{    
    printf("\nRecord for student number %d", student.studNum);
    printf("\nThe quiz grades are %d and %d", student.quiz1, student.quiz2);
    printf("\nThe midterm grade is %d and %d", student.quiz1, student.quiz2);
    printf("\nThe numeric average grade is %f percent", student.numAve);
    printf("\nand the letter grade is %c", student.grade);
}