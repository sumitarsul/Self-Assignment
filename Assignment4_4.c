//Problem Statement: Accept two integers and determine which number is greater. If both numbers are equal,
//display an appropriate message.

//////////////////////////////////////////////
//                                          //
//    Input: 21 → Eligible for Voting       //
//    Input: 16 → Not Eligible for Voting   //
//    Input: -5 → Invalid Age               //
//                                          //
//////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckEligiblity(int iNo)
{
    if(iNo < 0)
    {
        printf("Invalid Age\n");
    }
    else if(iNo>=18)
    {
        printf("Eligible for voting\n");
    }
    else
    {
        printf("Not Eligible for voting\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter The Age\n");
    scanf("%d",&iValue);

    CheckEligiblity(iValue);
    return EXIT_SUCCESS;
}

