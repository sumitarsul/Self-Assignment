/*
3. Write a program which accept number from user and count frequency of 2 in it.

Input : 2395
Output : 0

Input: 1018
Output :0

Input : 9440
Output : 0

Input : 922432
Output :1

*/

#include<stdio.h>
#include<stdlib.h>



int CheckFrequncy(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
        return iCount;
}





int main ()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = CheckFrequncy(iValue);
    printf("Frequncy of four is : %d\n",iRet);
    


    return EXIT_SUCCESS;
}