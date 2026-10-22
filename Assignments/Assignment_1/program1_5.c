/*
    5. Accept one number from user and print that 
    number of * on screen.
*/
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Accept 
//  Input           :   Integer
//  Output          :   -
//  Description     :   Display pattern 
//  Date            :   21/10/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
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
    iValue = 5;

    Accept(iValue);
    return EXIT_SUCCESS;
}