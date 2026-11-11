/*
    3.Write a program which accept number from user
    and return the count of digits in between 3 and 7.

    Input:  2395
    Output: 1

    Input:  1018
    Output: 0
    
    Input:  4521
    Output: 2
    
    Input:  9922
    Output: 0
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////
//
//  Function Name   :   CountRange
//  Input           :   Integer
//  Output          :   Display count of digits in 
//                      between 3 and 7.
//  Description     :   Accept a number from user and 
//                      return the count of digits
//                      in between 3 and 7.
//  Date            :   11/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

int CountRange(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit > 3 && iDigit < 7)
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

    iRet = CountRange(iValue);

    printf("Count of digits is : %d",iRet);

    return EXIT_SUCCESS;
}