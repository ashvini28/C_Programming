/*
    1.Write a program which accept a number from user
    and display its digits in reverse order.

    Input:  2395
    Output: 5
            9
            3
            2
            
    Input:  1018
    Output: 8
            1
            0
            1
    
    Input: -1018
    Output: 8
            1
            0
            1
    
    Input:  9000
    Output: 0
            0 
            0
            9

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
//  Date            :   10/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
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

    printf("Enter number\n");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return EXIT_SUCCESS;    
}