//3.Problem Statement: Accept the marks of a student out of 100 and display the grade according to the
//following criteria. Marks outside 0-100 are invalid.

///////////////////////////////
//  Marks       Grade       //
//  90-100        A         //
//  75-89         B         //
//  60-74         C         //
//  40-59         D         //
//  Below 40     Fail       //
//////////////////////////////


#include<stdio.h>

void CheckGread(float iNo)
{
    if(iNo<=100 && iNo>=90)
    {
        printf("A Gread\n");
    }
    else if (iNo<=89 && iNo>=75)
    {
        printf("B Gread\n");
    }
    else if(iNo<=74 && iNo>=60)
    {
        printf("C Gread\n");
    }
    else if(iNo<=59 && iNo>=40)
    {
        printf("D Gread\n");
    }
    else if(iNo<40)
    {
        printf("Fail\n");
    }
}

int main()
{
    float iMarks = 0.0f;

    printf("Enter the Marks\n");
    scanf("%f",&iMarks);

    CheckGread(iMarks);


    return 0;
}
