/*
    Write a program which accept number from user and print 
    that number of $ and * on screen.

    Input   :   5
    Output  :   $   *   $   *   $   *   $   *   $   *

    Input   :   3
    Output  :   $   *   $   *   $   *

    Input   :   -3
    Output  :   $   *   $   *   $   *

*/
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
//
//  Function Name   :   Pattern 
//  Input           :   Integer
//  Output          :   Display required pattern
//  Description     :   Accept number from user and print 
//                      that number of $ and * on screen
//  Date            :   1/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    { 
        printf("$\t*\t");   
    }
    printf("\n\n");
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

    Pattern(iValue);

    return EXIT_SUCCESS;
}