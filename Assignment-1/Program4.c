#include<stdio.h>
#include<stdbool.h>


bool Check(int iNo)
{
    if((iNo % 5) == 0)
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
    printf("Enter a Number : ");
    scanf("%d",&iValue);

    bool bRet = 0;

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("%d is Divisible by 5",iValue);
    }
    else
    {
        printf("%d is not Divisible by 5",iValue);
    }
    return 0;
}

//  Test Cases Successfully Handeld by This Application
//  
//  Input   :   3       Output  :   3 is not Divisible by 5.
//  Input   :   1       Output  :   1 is not divisible by 5.
//  Input   :   0       Output  :   0 is Divisible by 5.
//  Input   :   5       Output  :   5 is Divisible by 5.
//
