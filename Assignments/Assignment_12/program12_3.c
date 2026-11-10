/*
    2.Write a program which accept a number from user
    and count frequency of 2 in it.

    Input:  2395
    Output: 1
            
    Input:  1018
    Output: 0
    
    Input:  9000
    Output: 0

    Input: 922432
    Output: 3

*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////
//
//  Function Name   :   countTwo
//  Input           :   Integer
//  Output          :   Display frequency of 2 
//                      in given number.
//  Description     :   Accept a number from user 
//                      and count frequency of 2 in it.
//  Date            :   10/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

int countTwo(int iNo)
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

        if(iDigit == 2)
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

    iRet = countTwo(iValue);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;    
}