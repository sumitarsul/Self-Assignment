//4.Problem Statement: Accept an integer and determine whether it is divisible by both 3 and 5, only 3, only 5,
//or neither.



#include<stdio.h>
#include<stdlib.h>

void CheckDivisibel(int iNo)
{
    if(iNo % 3 == 0 && iNo % 5 == 0)
    {
        printf("Divisebel By Both\n");
    }
    else if(iNo % 3 == 0)
    {
        printf("Divisebel Only By Three\n");
    }
    else if(iNo % 5 == 0)
    {
        printf("Divisebel Only By Five\n");
    }
    else
    {
        printf("Divisebel By neither\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter The Number\n");
    scanf("%d",&iValue);

    CheckDivisibel(iValue);

    return EXIT_SUCCESS;
}