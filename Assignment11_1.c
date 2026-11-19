/*1. Write a program which accept range from user and display all numbers in between
that range.

Input : 23 35
Outout : 23 24 25 26 27 28 29 30 31 32 33 34 35 

Input : 10 18
Output : 10 11 12 13 14 15 16 17 18

Input : 10 10
Outout: 10

Input : -10 2
Output : -10 - 9 -8 -7 -6 -5 - 4 -3 -2 - 1 2

Input : 90 18
Output : Invalid range 
*/



#include<stdio.h>
#include<stdlib.h>

void CheckRange(int iNo1, int iNo2)
{
    int iCnt = 0;

    if(iNo1 > iNo2)
    {
        printf("Invalid Rnage");
    }

    for(iCnt = iNo1; iCnt<=iNo2; iCnt++)
    {
        printf(" %d ",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue1, iValue2 = 0;

    printf("Enter the Starting Number\n");
    scanf("%d",&iValue1);

    printf("Enter the Ending Number\n");
    scanf("%d",&iValue2);

    CheckRange(iValue1,iValue2);


    return EXIT_SUCCESS;
}