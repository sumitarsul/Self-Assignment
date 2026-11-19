/*
 1. Write a program which accept number from user and display below pattern.
Input : 5
Output : *  *   *   *   *   #   #   #   #   #

Input : 6
Output :*  *   *   *   *    *   #   #   #   #   #   #

Input :-5
Output : *  *   *   *   *   #   #   #   #   #

Input : 2
Output : *  *   #   #

*/

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
    {
        int iCnt = 0;
        int iStar = 0;
        for(iCnt = 1;iCnt <= iNo;iCnt++)
        {
            printf(" * ");
        }
        for(iStar=1;iStar<=iNo;iStar++)
        {
            printf(" # ");
        }
        printf("\n");
    }



int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    Display(iValue);
    return EXIT_SUCCESS;  
}