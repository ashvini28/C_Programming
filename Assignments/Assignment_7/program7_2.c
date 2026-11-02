/*
    Write a program which accept number from user and print 
    numbers till that number.

    Input   :   8
    Output  :   1   2   3   4   5   6   7   8

*/
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
//
//  Function Name   :   Display 
//  Input           :   Integer
//  Output          :   Display required pattern
//  Description     :   Accept number from user and print 
//                      numbers till that number.
//  Date            :   1/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        printf("Invalid Input");
        return;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    { 
        printf("%d\t",iCnt);   
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

    Display(iValue);

    return EXIT_SUCCESS;
}