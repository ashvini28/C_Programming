/*
    2.Write a program which accept a number from user
    and check whether it contains 0 in it or not.

    Input:  2395
    Output: There is no zero
            
    Input:  1018
    Output: It Contains Zero 
    
    Input:  9000
    Output: It Contains Zero

    Input: 10687
    Output: It Contains Zero

*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////////
//
//  Function Name   :   ChkZero
//  Input           :   Integer
//  Output          :   Display message whether number
//                      contains 0 in it or not.
//  Description     :   Accept a number from user 
//                      and check whether it contains
//                      0 in it or not.
//  Date            :   10/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            return TRUE;
        }

        iNo = iNo / 10;
    }
    
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number\n");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero\n");
    }else{
        printf("There is no Zero\n");
    }

    return EXIT_SUCCESS;    
}