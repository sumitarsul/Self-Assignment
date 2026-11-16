//1. Write a program which accept one number from user and print that number of even numbers on screen .

#include<stdio.h>

void CheckEven(int iNo)
{
    int iCnt = 0;
    int Even = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    iCnt=1;
    while(iCnt<=iNo*2)
    {
        if(iCnt % 2==0)
        {
        printf(" %d ",iCnt);
        }
        iCnt++;
    }
    printf("\n");
}
int main()
{

    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    CheckEven(iValue);

    return 0;
}