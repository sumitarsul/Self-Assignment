/* 3. Write a program which accept distance in kilometre and convert it into meter. (1
kilometre = 1000 Meter)

Input : 5
Output : 5000

Input : 12
Output : 12000

*/

#include<stdio.h>
#include<stdlib.h>

int CalculateDistance(int iNo)
{
    int iMeters = 0;

    iMeters = iNo * 1000;

    return iMeters;
}

int main()
{
    int iValue = 0;
   
    int fRet = 0.;

    printf("Enter the Distance in KM :\n");
    scanf("%d",&iValue);

    fRet = CalculateDistance(iValue);
    printf("Distance in Meters : %d\n",fRet);

    return EXIT_SUCCESS;
}