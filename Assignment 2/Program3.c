#include<stdio.h>


void Display(int iNo)
{
    if(10 > iNo)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter a number : \n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}

//  Description   :    Given Number From User if number is less than 10 
//  Test Cases Successfully Handeld by This Application
//  Input   :   11      Output  :   Hello
//  Input   :  -24      Output  :   Demo
//  Input   :    0      Output  :   Demo
