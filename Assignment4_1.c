//Problem Statement: Write a C program that accepts an integer from the user and determines whether the 
// entered number is positive, negative, or zero.

//////////////////////////////////////////////
//    Input: 15 → Positive Number           //
//    Input: -8 → Negative Number           //
//    Input: 0 → Zero                       //
//////////////////////////////////////////////

#include<stdio.h>

void Check(int iNo)
{
    if(iNo > 0)
    {
        printf("It is the Positive Number\n");
    }
    else if(iNo<0)
    {
        printf("It is the negative number\n");
    }
    else
    {
        printf("It is the zero\n");
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