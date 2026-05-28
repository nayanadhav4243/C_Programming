#include<stdio.h>

void Display(int iNo)
{
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    while (iNo > 0)
    {
        printf("*\t");
        iNo--;
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter a number :\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}




//  Description   :    Given Number From User andprint that number of *
//  Test Cases Successfully Handeld by This Application
//  
//  Input   :   3      Output  :   * * *
//  Input   :  -3      Output  :   * * *
//  Input   :   6      Output  :   * * * * * *
//  Input   :   0      Output  :   Terminate The Application
