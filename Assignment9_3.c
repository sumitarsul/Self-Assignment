/*
3. Write a program to find even factorial of given number.
Input: 5 (4 * 2)
Output: 8

Input : -5 (4 * 2)
Output : 8

Input : 10 (10 * 8 * 6 * 4 * 2)
Output : 3840

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
            if(iCnt % 2 ==0)
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