/* 2. 5. Write a program which accept area in square feet and convert it into square
meter. (1 square feet = 0.0929 Square meter)

Input : 5
Output : 0.464515

Input : 7
Output : 0.650321

*/

#include<stdio.h>
#include<stdlib.h>

double SquareMeter(float fNo1)
{
    float Meter = (fNo1 * 0.0929);

    return Meter;
}

int main()
{
    float fValue1 = 0.0f;
    float fRet = 0.0f;

    printf("Enter the Area:\n");
    scanf("%f",&fValue1);

    

    fRet = SquareMeter(fValue1);
    printf("In Square Meters : %f\n",fRet);

    return EXIT_SUCCESS;
}