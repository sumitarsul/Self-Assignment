/* 5.Problem Statement: Accept an employee's monthly salary and completed years of service. Calculate the
bonus using these rules: more than 10 years of service earns a bonus of 15% of monthly salary; 5 to 10 years
earns 10%; less than 5 years earns 5%. Salary must be positive and years of service cannot be negative. 

• Input: 30000   12 → Bonus = 4500.00
• Input: 20000   7  → Bonus = 2000.00
• Input: 10000   2  → Bonus = 500.00

*/

#include<stdio.h>
#include<stdlib.h>


void CheckBonus(int Amount,int Year)
{
    float Bonus = 0.0f;

    if(Year > 10)
    {
        Bonus = Amount * 15/100;
        printf("Bonus %f\n",Bonus);
    }
    else if(Year >= 5 && Year <= 10)
    {
        Bonus = Amount * 10/100;
        printf("Bonus %f\n",Bonus);
    }
    else if(Year < 5 )
    {
        Bonus = Amount * 5/100;
        printf("Bonus %f\n",Bonus);
    }
    
}

int main()
{

    int Salary = 0;
    int Service = 0;


    printf("Enter The Monthly Salary\n");
    scanf("%d",&Salary);

   printf("Enter The Years of Service\n");
    scanf("%d",&Service);

    CheckBonus(Salary,Service);

return EXIT_SUCCESS;
}