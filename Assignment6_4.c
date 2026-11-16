// 4.Problem Statement: Accept three integer values representing the lengths of the sides of a triangle. Determine
//whether they can form a valid triangle. All sides must be positive, and the sum of any two sides must be greater than the third side
   
/*   
 
Expected Output:
• Input: 3 4 5 → Valid Triangle
• Input: 1 2 3 → Invalid Triangle
• Input: 0 4 5 → Invalid Triangle

*/


#include<stdio.h>
#include<stdlib.h>

void CheckTrangel(int iNo1,int iNo2,int iNo3)
{
    if(iNo1<=0 || iNo2 <= 0 || iNo3<=0)
    {
        printf("Invalid Trangel\n");
    }
    else if(iNo1 + iNo2 > iNo3 && iNo2 + iNo3 > iNo1 && iNo3 + iNo1 > iNo2)
    {
        printf("It is Valid Trangel\n");
    }
    else
    {
        printf("Invalid Trangel\n");
    }
}

int main()
{
    int iAmount = 0;

    int iSide1, iSide2, iSide3 = 0;
    
    printf("Enter the length of Trangels Sides\n");
    scanf("%d %d %d",&iSide1,&iSide2,&iSide3);

    CheckTrangel(iSide1,iSide2,iSide3);

    return EXIT_SUCCESS;
}