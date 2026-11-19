/* 2. Write a program which accept width & height of rectangle from user and calculate
its area. (Area = Width * Height)

Input: 5.3  9.78
Output : 51.834

*/

#include<stdio.h>
#include<stdlib.h>

double CalculateArea(float fNo1,float fNo2)
{
    float Area = fNo1 * fNo2;
    return Area;
}

int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    float fRet = 0.0f;

    printf("Enter the Width :\n");
    scanf("%f",&fValue1);

    printf("Enter the Height :\n");
    scanf("%f",&fValue2);

    fRet = CalculateArea(fValue1,fValue2);
    printf("Area : %f\n",fRet);

    return EXIT_SUCCESS;
}