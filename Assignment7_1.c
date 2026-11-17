/*
1. Write a program which accept number from user and print that number of $ And *
onscreen .
Input : 5
Output : $ * $ * $ * $ $ *
Input : 3
Output : $ * $ * $ *
Input : -3
Output : $ *$ * $ *
*/

#include<stdio.h>
#include<stdlib.h>

void Dispaly(int iNo)
{
    int iCnt = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf(" $ * ");
    }
    printf("\n");
}

int main()
{

    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    Dispaly(iValue);

    return EXIT_SUCCESS;
}



