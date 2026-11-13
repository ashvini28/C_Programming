/*
    Write a program which accept number from user 
    and display all its non factors.

    Input:  12
    Output: 5 7 8 9 10 11

    Input:  13
    Output: 2 3 4 5 6 7 8 9 10 11 12

    Input:  10
    Output: 3 4 6 7 8 9
*/
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////
//
//  Function Name   :   NonFact
//  Input           :   Integer
//  Output          :   Display all its non factors.
//  Description     :   Accept number from user and 
//                      display all its non factors.
//  Date            :   12/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\t", iCnt);
        }
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
    scanf("%d",&iValue);

    NonFact(iValue);

    return EXIT_SUCCESS;
}