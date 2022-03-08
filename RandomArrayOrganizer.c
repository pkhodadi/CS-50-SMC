#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
    Parham Khodadi
    Project 3
    7/10/2021
    7/10/2021
*/
#define ARRAY_SIZE 20
#define UPPER_LIMIT 20
#define LOWER_LIMIT 12
#define DATA_UPPER_LIMIT 90
#define DATA_LOWER_LIMIT 10

int parhamSamples[ARRAY_SIZE];
int parhamSampleSize;
void Introduction(void);
void Randomize(int [], int );
void PrintArray(int [], int );
void FindMaxMin(int [], int );
void FindAverage(int [], int );
void SortArrayBubble(int [], int );
void FindMedian(int [], int );

int main()
{
    Introduction();

    /* Randomly generates a number between the upper limit of 20 and lower limit of 12 to use for array size*/
    srand(time(NULL));
    parhamSampleSize = LOWER_LIMIT + rand() % ((UPPER_LIMIT - LOWER_LIMIT) + 1);

    /* all the functions running in order of: randomly generating an array, finding the max/min, finding the average, organizing the array by the bubble method, and finding the value of the median element. */
    Randomize(parhamSamples, parhamSampleSize);
    FindMaxMin(parhamSamples, parhamSampleSize);
    FindAverage(parhamSamples, parhamSampleSize);
    SortArrayBubble(parhamSamples, parhamSampleSize);
    FindMedian(parhamSamples, parhamSampleSize);

    return 0;
}

/* Introduces the project and I */
void Introduction()
{
    printf("Parham Khodadi - Project 3\n");
}

/* Prints the array */
void PrintArray(int samples[], int sampleSize)
{
    int index;
    printf("\n");
    for (index = 0; index < sampleSize; index++)
    {
        printf("%d ", samples[index]);
    }
}

/* Randomly picks the elements inside the array given the array size */
void Randomize(int samples[], int sampleSize)
{
    int index;

    printf("\nSample Size: %d\n", sampleSize);

    printf("\nArray Elements:");
    for (index = 0; index < sampleSize; index++)
    {
        samples[index] = 10 + rand() % (DATA_UPPER_LIMIT - DATA_LOWER_LIMIT);
    }
    PrintArray(samples, sampleSize);
}

/* Find and print maximum and minimum values */
void FindMaxMin(int samples[], int sampleSize)
{
    int max = samples[0];
    int min = samples[0];
    int index;

    for (index = 0; index < sampleSize; index++)
    {
        if (max < samples[index])
        {
            max = samples[index];
        }
        if (min > samples[index])
        {
            min = samples[index];
        }
    }

    printf("\n\nMaximum = %d, Minimum = %d\n", max, min);
}

/* Find and print the average */
void FindAverage(int samples[], int sampleSize)
{
    int sum = 0;
    int average, index;
    for (index = 0; index < sampleSize; index++)
    {
        sum = sum + samples[index];
    };
    
    average = sum / sampleSize;
    printf("\nAverage = %d\n", average);
}

/* Sort and print the array as you sort it*/
void SortArrayBubble(int samples[], int sampleSize)
{
    int sorted = 0;
    int index;
    
    printf("\nSorting...");
    while(sorted == 0)
    {
        sorted = 1;
        for(index = 0; index < sampleSize; index++)
        {
            if(samples[index] > samples[index + 1])
            {
                int temp = samples[index];
                samples[index] = samples[index + 1];
                samples[index + 1] = temp;
                sorted = 0;
                PrintArray(samples, sampleSize);
            };
        };
    };
    printf("\nSorted Final:");
    PrintArray(samples, sampleSize);
}

/* Find and print the median */
void FindMedian(int samples[], int sampleSize)
{
    int median;
    if (sampleSize == 13 || sampleSize == 15 || sampleSize == 17 || sampleSize == 19)
    {
        median = sampleSize / 2;
        printf("\n\nMedian: %d\n", samples[median]);
    }
    else
    {
        median = sampleSize / 2;
        printf("\n\nMedian: %d\n", ((samples[median] + samples[median - 1]) / 2));
    }
}