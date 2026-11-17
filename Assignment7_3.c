/*
Write a program which accept number from user and print its numbers line.
Input : 4
Output : -4 -3 -2 -1 0 1 2 3 4

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
    for(iCnt=(-iNo);iCnt<=iNo;iCnt++)
    {
        printf(" %d ",iCnt);
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



