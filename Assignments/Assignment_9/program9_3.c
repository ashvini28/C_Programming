/*
    3.Write a program to find even factorial of given 
      number.

    Input :5
    Output:8  (4*2)

    Input :-5
    Output:8  (4*2)

    Input :10
    Output:3840  (10*8*6*4*2)
*/

///////////////////////////////////////////////////////
//
//  Function Name   :   EvenFactorial
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Write a program to find even 
//                      factorial of given number.
//  Date            :   2/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0 , iFact=1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }                        
    if((iNo % 2)!=0)
    {
        iNo--;
    }
    for(iCnt=iNo ;iCnt>=2 ;iCnt = iCnt - 2 )
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

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is : %d",iRet);

    return EXIT_SUCCESS;
}