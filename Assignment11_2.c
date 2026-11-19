/*2.  . Wite a program which accept range from user and display al even numbers in
between that range.

Input : 23 35
Output : 24 26 28 30 32 34

Input: 10 18
Output : 10 12 14 16 18

Input : 10 10
Output : 10

Input: -10 2
Output : -10 -8 -6 -4 -2 0 2

Input: 90 18
Output : Invalid range

*/



#include<stdio.h>
#include<stdlib.h>

void CheckEvenRange(int iNo1, int iNo2)
{
    int iCnt = 0;

    if(iNo1 > iNo2)
    {
        printf("Invalid Rnage");
    }

    for(iCnt = iNo1; iCnt<=iNo2; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d ",iCnt);
        }
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

    CheckEvenRange(iValue1,iValue2);


    return EXIT_SUCCESS;
}