//5.Problem Statement: Accept two integers and determine which number is greater. If both numbers are equal,
//display an appropriate message.

//////////////////////////////////////////////
//                                          //
//    Input: 45 → Divisibel by 5            //
//    Input: 23 → Not Divisibel by 5.       //
//                                          //
//                                          //
//////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckDivisibel(int iNo)
{
    if(iNo % 5 == 0)
    {
        printf("Its Divisibel By 5\n");
    }
    else
    {
        printf("Its Not Divisibel By 5\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter The Age\n");
    scanf("%d",&iValue);

    CheckDivisibel(iValue);
    return EXIT_SUCCESS;
}

