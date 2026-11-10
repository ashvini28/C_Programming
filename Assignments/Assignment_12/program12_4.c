/*
    4.Write a program which accept a number from user
    and count frequency of 4 in it.

    Input:  2395
    Output: 0
            
    Input:  1018
    Output: 0
    
    Input:  9440
    Output: 2

    Input: 922432
    Output: 1

*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////
//
//  Function Name   :   countFour
//  Input           :   Integer
//  Output          :   Display frequency of 4 
//                      in given number.
//  Description     :   Accept a number from user 
//                      and count frequency of 4 in it.
//  Date            :   10/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

int countFour(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 4)
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

    iRet = countFour(iValue);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;    
}