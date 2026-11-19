/*
4. Write a program to find odd factorial of given number.

Input :5
Output :15 (5 * 3 * 1)

Input : -5
Output :15 (5 * 3 * 1)

Input : 10
Output : 945 ( 9 * 7 * 5 * 3 * 1)

*/

#include<stdio.h>
#include<stdlib.h>

int EvenFactorial(int iNo)
    {
        int iCnt = 0;
        int iFactorial = 1;

        if(iNo<0)
        {
        iNo = -iNo;
        }
        for(iCnt = 1; iCnt<=iNo; iCnt++)
        {
            if(iCnt % 2 != 0)
            {
             iFactorial = iFactorial * iCnt;
            }
        }
        return iFactorial;

        printf("\n");
    }
    



int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

   iRet =  EvenFactorial(iValue);
   printf("Factorial of Even Numbers : %d\n",iRet);

   return EXIT_SUCCESS;  
}