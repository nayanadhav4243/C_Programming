#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt =1; iCnt<iNo; iCnt++)
    {
        if((iNo % iCnt == 0) && (iCnt % 2 == 0))
        {
            printf("%d\t",iCnt);
        }
    }

}

int main()
{
    int iValue = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);
    return 0;
}



//  Description   :    Given Number From User and Display Factor Numbers
//  Test Cases Successfully Handeld by This Application
//  
//  Input   :   24      Output  :   2 4 6 8 12
//  Input   :  -24      Output  :   2 4 6 8 12
//  Input   :   12      Output  :   2 4 6
//  Input   :   33      Output  :   Terminate The Application
//  Input   :           Output  :   Terminate The Application
