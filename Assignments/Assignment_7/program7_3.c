/*
    Write a program which accept number from user and print 
    its numbers line.

    Input   :   4
    Output  :   -4  -3  -2  -1  0   1   2   3   4

*/
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
//
//  Function Name   :   Display 
//  Input           :   Integer
//  Output          :   Display required pattern
//  Description     :   Accept number from user and print 
//                      its numbers line.
//  Date            :   1/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
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