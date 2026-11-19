/*1. 1. Write a program which accept radius of circle from user and calculate its area.
Consider value of PI as 3.14. (Area = PI * Radius * Radius)
Input : 5.3
Output : 88.2026

Input : 10.4
Output : 339.6224

*/

#include<stdio.h>
#include<stdlib.h>

double DisplayRadius(float fNo)
{
    float Area = 0.0f;
    if(fNo < 0)
    {
        fNo = -fNo;
    }

    Area = (3.14 * fNo * fNo);

    return Area;
}

int main()
{
    float fValue = 0.f;
    float fRet =0.f;

    printf("Enter the number :\n");
    scanf("%f",&fValue);

    fRet = DisplayRadius(fValue);
    printf("Area : %f\n",fRet);

    return EXIT_SUCCESS;
}