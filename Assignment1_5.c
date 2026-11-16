#include<stdio.h>

void Check(int iNo)
{
    int iCnt = 0;

    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        printf(" * ");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Check(iValue);
    return 0;
}