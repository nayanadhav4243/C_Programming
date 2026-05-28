#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a Number :\n");
    scanf("%d",&iValue);
    printf("\n");
    Accept(iValue);
    return 0;
}


//  Description   :    Given Number From User and print that number of *
//  Test Cases Successfully Handeld by This Application
  
//  Input   :   3       Output  :   * * *
//  Input   :   5       Output  :   * * * * *
//  Input   :   0       Output  :   Terminate The Application
//  Input   :  -3       Output  :   Terminate The Application
