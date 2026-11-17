/*
Write a program which accepts N from user and print all odd numbers up to N.
Input : 18
Output: 1 3 5 7 9 11 13

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
        if(iCnt % 2 != 0)
        {
            printf(" %d ",iCnt);
        }
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



