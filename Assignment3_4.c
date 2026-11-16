//4. Accept one character from user and convert case of that character.
//Input : a       Output : A
//Input : D       Output : d

///////////////////////////////
//          Not solve       //
//////////////////////////////

#include<stdio.h>

void DisplayChar(char Cvalue)
{
  
    if(Cvalue <= 'a' && Cvalue >= 'z')
    {
        printf("%c",Cvalue-32);

    }
    else if(Cvalue <= 'A' && Cvalue >= 'Z')
    {
        printf("%c",Cvalue+32);
    }
}

int main()
{

    char cValue ='\0';

    printf("Enter the Character\n");
    scanf("%c",&cValue);

    DisplayChar(cValue);

    return 0;
}