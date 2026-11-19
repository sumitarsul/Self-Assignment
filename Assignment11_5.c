/* 5.. Write a program which accept accept range from user and display all numbers in
between that range in reverse order

Input : 23 35
Output : 35 34 33 32 31 30 2 9 28 27 26 25 24 23

Input : 10 18
Output : 18 17 16 15 14 13 12 11 10

Input : 10 10
Output : 10

Input : -10 2
Output: 2 1 0 -1 -2 -3 -4 -5 - 6 -7 -8 -9 -10

Input: 90 18
Output : Invalid range

*/

#include<stdio.h>
#include<stdlib.h>

void RangeDisplayRev(int iNo1,int iNo2)
{
    int iCnt = 0;

    if(iNo1 <= 0 )
    {
        printf("Invalid Range\n");

    }
    else if(iNo1 < iNo2)
    {
        for(iCnt = iNo2; iCnt >= iNo1; iCnt--)
        {
            printf("%d ",iCnt);
        }
        printf("\n");
    }
    else
    {
        printf("Invalid Range\n");
    }

}

int main()
{
    int iValue1, iValue2 = 0;

    printf("Enter the Starting Number\n");
    scanf("%d",&iValue1);

    printf("Enter the Ending Number\n");
    scanf("%d",&iValue2);
    
    RangeDisplayRev(iValue1,iValue2);
    
    return EXIT_SUCCESS;
}