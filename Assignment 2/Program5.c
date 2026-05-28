#include<stdio.h>
#include<stdbool.h>

bool Display(int iNo)
{
    if( iNo %2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter a Number : \n");
    scanf("%d",&iValue);

    bool bRet = 0;
    bRet = Display(iValue);

    if(bRet == true)
    {
        printf("%d is Even Number \n",iValue);
    }
    else
    {
        printf("%d is Odd Number \n",iValue);
    }
    return 0;
}



//  Description   :    Given Number From User and Check That Number is Even or Odd
//  Test Cases Successfully Handeld by This Application  
//  Input   :   12      Output  :   12 is Even Number
//  Input   :  -24      Output  :   -24 is Even Number
//  Input   :   11      Output  :   11 is Odd Number
