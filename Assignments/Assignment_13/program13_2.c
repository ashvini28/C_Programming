/*
    2.Write a program which accept number from user
    and return the count of odd digits.

    Input:  2395
    Output: 3

    Input:  1018
    Output: 2
    
    Input: -1018
    Output: 2
    
    Input:  8462
    Output: 0
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////
//
//  Function Name   :   CountOdd
//  Input           :   Integer
//  Output          :   Display count of odd digits in
//                      given number.
//  Description     :   Accept a number from user and 
//                      return the count of odd digits.
//  Date            :   11/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) != 0)
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
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("Count of odd digits is : %d",iRet);

    return EXIT_SUCCESS;
}