/*
2. Accept amount in US dollar and return its corresponding value in Indian currency.
Consider 1$ as 70 rupees.

Input : 3
Output : 210

Input : 1200
Output : 84000

*/

#include<stdio.h>
#include<stdlib.h>

int Displaydollar(int iNo)
    {
        int iCnt = 0;
        int Dollar = 0;

        if(iNo<0)
        {
        iNo = -iNo;
        }
        for(iCnt = 1; iCnt<=iNo; iCnt++)
        {
            Dollar = iCnt * 70;
        }
        return Dollar;

        printf("\n");
    }
    



int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

   iRet =  Displaydollar(iValue);
   printf("Indian currancy : %d\n",iRet);

   return EXIT_SUCCESS;  
}