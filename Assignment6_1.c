//1.Problem Statement: Accept the number of electricity units consumed and calculate the total bill using the
//following slab-wise rates. Each slab rate applies only to units within that slab.

#include<stdio.h>

void DisplayBill(int iNo)
{
    float fBill = 0;
    if(iNo>=0 && iNo<=100)
    {
        fBill = 5 * iNo;
        printf("Bill %f\n",fBill);
    }
    else if(iNo>100 && iNo<=200)
    {
        fBill = 7 * iNo;
        printf("Bill %f\n",fBill);
    }
    else if(iNo>200)
    {
        fBill = 10 * iNo;
        printf("Bill %f\n",fBill);
    }
    
}

int main()
{
    int iUnit = 0;

    printf("Enter the Unit\n");
    scanf("%d",&iUnit);

    DisplayBill(iUnit);

    return 0;
}
