//Problem Statement: Accept two integers and determine which number is greater. If both numbers are equal,
//display an appropriate message.

//////////////////////////////////////////////
//    Input: 10 20 → 20 is Greter           //
//    Input: 50 30 → 50 is Greter           //
//    Input: 50 50 → Both areequal          //
//                                          //
//////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iNo1,int iNo2)
{
    if(iNo1>iNo2)
    {
        printf("%d Number is Greater\n",iNo1);
    }
    else if(iNo1<iNo2)
    {
        printf("%d Number is Greater\n",iNo2);
    }
    else
    {
        printf("Both Numbers Are Equal\n");
    }
}


int main()
{
    int iValue1, iValue2 = 0;

    printf("Enter the First Number\n");
    scanf("%d",&iValue1);

    printf("Enter the Second Number\n");
    scanf("%d",&iValue2);

    CheckNumber(iValue1,iValue2);

    return EXIT_SUCCESS;
}