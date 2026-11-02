/*
    3.Write a program to find factorial of given number.

    Input   :   5
    Output  :   120    (5*4*3*2*1)

    Input   :   -5
    Output  :   120    (5*4*3*2*1)

    Input   :   4
    Output  :   24    (4*3*2*1)
*/

///////////////////////////////////////////////////////
//
//  Function Name   :   Factorial
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Write a program to find 
//                      factorial of given number.
//  Date            :   2/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int Factorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
 
    int iCnt = 0, iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is : %d\n",iRet);

    return EXIT_SUCCESS;
}