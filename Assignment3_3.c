// 3. Write a program which accept number from user and print even factors of that number.

#include<stdio.h>

void CheckFactor(int iNo)
{
    int iCnt = 0;
    if(iNo<=0)
    {
        iNo = -iNo;
    }

    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo % iCnt == 0 && iCnt % 2 == 0)
        {
        printf(" %d ",iCnt);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    CheckFactor(iValue);

    return 0;
}