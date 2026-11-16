//3.Problem Statement: Accept the total purchase amount and calculate the final payable amount after applying
//the following discount. Negative purchase amounts are invalid.
   
/*     

        Purchase Amount          Discount                

        Below 1000                 0%
        1000 to below 75000       10%
        75000 and above            20% 
*/


#include<stdio.h>
#include<stdlib.h>

void CheckDiscount(int pValue)
{
    float fDisc = 0.0f;
    float fFinal = 0.0f;

  

    if (pValue<=1000 && pValue >0)
    {
        fDisc = pValue * 0/100.0;
        fFinal = pValue - fDisc;
        printf("Payabel Amount %f\n",fFinal);
    }
    else if (pValue<=5000 && pValue>1000)
    {
        fDisc = pValue * 10 /100.0;
        fFinal = pValue - fDisc;
        printf("Payabel Amount %f\n",fFinal);
    }
    else if (pValue>5000)
    {
        fDisc = pValue * 20/100.0;
        fFinal = pValue - fDisc;
        printf("Payabel Amount %f\n",fFinal);
    }
}

int main()
{
    int iAmount = 0;
    
    printf("Enter the Total Purches Amount\n");
    scanf("%d",&iAmount);

    CheckDiscount(iAmount);

    return EXIT_SUCCESS;
}