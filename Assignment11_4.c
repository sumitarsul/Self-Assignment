/* 4. Write a program which accept range from user and return addition of all even
numbers in between that range. (Range should contains positive numbers only)

Input : 23 30
Output : 108

Input: 10 18
Output : 70

Input : -10 2
Output : Invalid range  

nput : 98 18
Output : Invalid range  



*/



#include<stdio.h>
#include<stdlib.h>

int RangeSum(int iNo1, int iNo2)
{
    int iCnt = 0;
    int Addition = 0;

    if(iNo1 <= 0 )
    {
        printf("Invalid Range\n");

        return 0;
    }
    else if(iNo1 < iNo2)
    {
        for(iCnt = iNo1; iCnt<=iNo2; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
            Addition = Addition + iCnt;
            }
        }
        return Addition;
    }
    else
    {
        printf("Invalid Range\n");
    }
    return 0;
}

int main()
{
    int iValue1, iValue2 = 0;
    int iRet = 0;

    printf("Enter the Starting Number\n");
    scanf("%d",&iValue1);

    printf("Enter the Ending Number\n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    if(iRet != 0 )
    {
    printf("Addition of Range : %d\n",iRet);
    }


    return EXIT_SUCCESS;
}