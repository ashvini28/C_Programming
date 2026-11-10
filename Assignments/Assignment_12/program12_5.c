/*
    4.Write a program which accept a number from user
    and count frequency of such a digits which are less
    than 6.

    Input:  2395
    Output: 3
            
    Input:  1018
    Output: 3
    
    Input:  9440
    Output: 3

    Input: 96672
    Output: 1

*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////
//
//  Function Name   :   count
//  Input           :   Integer
//  Output          :   Display frequency of such a 
//                      digits which are less than 6.
//  Description     :   Accept a number from user 
//                      and count frequency of such a
//                      digits which are less than 6.  
//  Date            :   10/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

int count(int iNo)
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

        if(iDigit < 6)
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

    iRet = count(iValue);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;    
}