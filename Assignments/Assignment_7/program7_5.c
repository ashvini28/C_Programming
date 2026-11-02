/*
    Write a program which accept N from user and print 
    first 5 multiples of N.

    Input   :   4
    Output  :   4   8   12  16  20

*/
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
//
//  Function Name   :   MultipleDisplay 
//  Input           :   Integer
//  Output          :   Display first 5 multiples of N
//  Description     :   Accept N from user and print 
//                      first 5 multiples of N.
//  Date            :   1/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {     
        printf("%d\t",iCnt * iNo); 
    }
}

///////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}