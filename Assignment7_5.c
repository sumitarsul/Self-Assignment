/*
5. Write a program which accept N and print first 5 multiples of N.
Input : 4
Output : 4 8 12 16 20

*/

#include<stdio.h>
#include<stdlib.h>

void Dispaly(int iNo)
{
    int iCnt = 0;
    int Multi = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt=1;iCnt<=5;iCnt++)
    {
      Multi = iNo * iCnt;
        printf(" %d ",Multi);
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



