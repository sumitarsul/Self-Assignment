// 1.Problem Statement: Accept three integers and determine the greatest number among them. The program
//must also work correctly when two or all three numbers are equal.

#include<stdio.h>
#include<stdlib.h>

void CheckGreater(int iNo1,int iNo2,int iNo3)
{
    if(iNo1 < iNo2 && iNo2 < iNo3)
    {
        printf("%d Is Greater\n",iNo3);
    }
    else if (iNo1 < iNo2 && iNo2 > iNo3)
    {
         printf("%d Is Greater\n",iNo2);
    }
    else
    {
         printf("%d Is Greater\n",iNo1);
    }
}

int main()
{

    int iValue1, iValue2, iValue3 = 0;

    printf("Enter the First Number\n");
    scanf("%d",&iValue1);

    printf("Enter the Second Number\n");
    scanf("%d",&iValue2);

    printf("Enter the Therd Number\n");
    scanf("%d",&iValue3);

    CheckGreater(iValue1,iValue2,iValue3);

    return EXIT_SUCCESS;
}