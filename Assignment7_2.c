/*
Write a program  which accept number from user and print numbers till that number
Input : 8
Output : 1 2 3 4 5 6 8 9

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



