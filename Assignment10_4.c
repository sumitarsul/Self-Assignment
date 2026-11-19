/*4. Write a program which accept temperature in Fahrenheit and convert it into
celsius. (1 celsius = (Fahrenheit -32) * (5/9))

Input : 10
Output: -12.2222 (10 - 32) * (5/9)

Input : 34
Output: 1.11111 (34 - 32) * (5/9)

*/

#include<stdio.h>
#include<stdlib.h>

double CalculateTemperature(float iNo)
{
    float celsius =(iNo - 32) * (5.0/9.0);

    return celsius;
}

int main()
{
    float iValue = 0.0f;
   
    float fRet = 0.0f;

    printf("Enter the Tempecrature :\n");
    scanf("%f",&iValue);

    fRet = CalculateTemperature(iValue);
    printf("Celsius : %f\n",fRet);

    return EXIT_SUCCESS;
}