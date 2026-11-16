#include<stdio.h>

void Display(int iNo,int iCount)
{
    int i = 0;

    if(iCount<=0)
    {
        iCount = -iCount;
    }

    for(i=1;i<=iCount;i++)
    {
        printf(" %d ",iNo);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    int iFreqeuncy = 0;

    printf("Enter the Value\n");
    scanf("%d",&iValue);

    printf("Enter the freqeuncy\n");
    scanf("%d",&iFreqeuncy);

    Display(iValue,iFreqeuncy);

    return 0;
}