//Problem Statement: Write a C program that accepts an integer from the user and determines whether the 
// entered number is positive, negative, or zero.

//////////////////////////////////////////////
//    Input: 24 → Even Number               //
//    Input: 17 → odd Number                //
//    Input: 0 → Zero                       //
//////////////////////////////////////////////

#include<stdio.h>

void Check(int iNo)
{
    if(iNo % 2== 0)
    {
        printf("Number Is Even\n");
    }
    else
    {
        printf("Number Is Odd\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    Check(iValue);

    return 0;
}