/*5. Write a program which returns difference between Even factorial and odd factorial
of given number.
Input : 5
Output : -7 (8 - 15)

Input : -5
Output : -7 (8 - 15)

Input: 10
Output : 2895 (3840 - 945)

*/

#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEven,iOdd = 1; 

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEven = iEven * iCnt;
        }
        else if(iCnt % 2 != 0)
        {
            iOdd = iOdd * iCnt;
        }  
    }

    return iEven - iOdd;  
}

int main()
{
    int iValue = 0;
    int iRet =0 ;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);
    printf("Difference Between Even And Odd Factorial : %d\n",iRet);

    return EXIT_SUCCESS;
}