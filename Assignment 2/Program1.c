#include<stdio.h>


void Display(int iNo)
{
    int iCnt = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    while(iCnt < iNo)
    {
        printf("*\t");
        iCnt++;
    }
}


int main()
{
    int iValue = 0;
    
    printf("Enter a number for Printing '*' : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}


//  Description   :    Given Number From User and print that number of *
//  Test Cases Successfully Handeld by This Application
//  Input   :   6       Output  :   * * * * * *
//  Input   :   3       Output  :   * * *
//  Input   :  -3       Output  :   * * *
//  Input   :   0       Output  :   Terminate The Application
