//5.Problem Statement: Accept a single character and determine whether it is an uppercase alphabet, lowercase
//alphabet, digit, or special character. Use character comparisons without using library character-classification functions.

//  Expected Output:
//  Input: A → Uppercase Alphabet
//  Input: m → Lowercase Alphabet
//  Input: 7 → Digit
//  Input: @ → Special Character


/////////////////////
//     NOT SOLVE  //
///////////////////


#include<stdio.h>
#include<stdlib.h>

void DisplayChar(char ichar)
{

    if(ichar >= 'A' && ichar <= 'Z')
    {
        printf("Uppercase Alphabet\n");
    }
    else if(ichar >= 'a' && ichar <= 'z')
    {
        printf("Lowercase Alphabet\n");
    }
    else if(ichar >= '0' && ichar <= '9')
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special Character\n");
    }
}


int main()
{
    char ch = '\0';

    printf("Enter The Charecter\n");
    scanf("%c",&ch);

    DisplayChar(ch);

}