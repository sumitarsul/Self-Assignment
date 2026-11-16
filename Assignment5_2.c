/* 2.Problem Statement: Accept a year and determine whether it is a leap year according to Gregorian calendar
rules. A year is a leap year if it is divisible by 400, or divisible by 4 but not by 100. Consider years less than
or equal to zero invalid.*/

#include<stdio.h>
#include<stdlib.h>

void CheckLeap(int iNo)
{
    if (iNo <= 0)
    {
        printf("Invalid year");
    }
    else if (iNo % 400 == 0)
    {
        printf("Leap year");
    }
    else if (iNo % 4 == 0 && iNo % 100 != 0)
    {
        printf("Leap year");
    }
    else
    {
        printf("Not a leap year");
    }


   
}

int main()
{
    int iYear = 0;

    printf("Ente The Year\n");
    scanf("%d",&iYear);

    CheckLeap(iYear);

    return EXIT_SUCCESS;
}