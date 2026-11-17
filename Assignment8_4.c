/*4.Write a program which accept number from user and display its table.
Input: 2
utput : 2 4 6 8 10 12 14 16 18 20
Input: 5
Output: 5 10 15 20 25 30 35 40 45 50
Input : -5
Output : 5 10 15 20 25 30 35 40 45 50
*/

#include<stdio.h>

void DisplayRevers(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt =0;
    int tabel =0;

    for(iCnt=1;iCnt<=10;iCnt++)
    {
        tabel = iNo * iCnt;
        printf("%d ",tabel);
    }
    printf("\n");

}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    DisplayRevers(iValue);

    return 0;
}