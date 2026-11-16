//2.Problem Statement: A student is eligible for admission if the student's marks are at least 60 and age is at
//least 17 years. Accept both values and determine eligibility. Negative age or marks outside 0-100 must be treated as invalid input.

/*      Expected Output:
        Input: 75 18 → Eligible for Admission
        Input: 55 19 → Not Eligible
        Input: 80 16 → Not Eligible      */


#include <stdio.h>
#include<stdlib.h>

void CheckEgibility(int sMarks,int sAge)
{
    if (sMarks <= 0 || sAge <= 0)
    {
        printf("Invalid Input\n");
    }
    else if(sMarks >= 60 && sMarks <= 100 && sAge >= 17 && sAge <= 100 )
    {
        printf("Eligible for Admission\n");
    }
    else
    {
        printf("Not Eligible\n");
    }
}

int main()
{
    int iMarks = 0;
    int iAge = 0;

    printf("Enter the Marks\n");
    scanf("%d",&iMarks);

    printf("Enter the Age\n");
    scanf("%d",&iAge);

    CheckEgibility(iMarks,iAge);

    return EXIT_SUCCESS;
}