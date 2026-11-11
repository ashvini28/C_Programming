/*
    1.Write a program which accept a number from user
    and return the count of even digits.

    Input:  2395
    Output: 1
            
    Input:  1018
    Output: 2
    
    Input: -1018
    Output: 2
    
    Input:  8462
    Output: 4

*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////
//
//  Function Name   :   DisplayDigit
//  Input           :   Integer
//  Output          :   Display given number digits in
//                      reverse order.
//  Description     :   Accept a number from user 
//                      and display given number digits
//                      in reverse order.
//  Date            :   11/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);
    
    iRet = CountEven(iValue);

    printf("Count of even digits is : %d",iRet);

    return EXIT_SUCCESS;    
}