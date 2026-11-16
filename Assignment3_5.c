// 5.Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not.

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckVowel(char ch)
{
    if(ch == 'a' ||ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{

    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the charetcter\n");
    scanf("%c",&cValue);

    bRet=CheckVowel(cValue);

    if(bRet==TRUE)
    {
        printf("It is the vowel\n");
    }
    else
    {
        printf("It is the not vowel\n");
    }

    return 0;
}