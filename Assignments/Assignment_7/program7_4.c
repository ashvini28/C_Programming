/*
    Write a program which accept N from user and print all
    odd numbers upto N.

    Input   :   18
    Output  :   1   3   5   7   9   11  13

*/
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
//
//  Function Name   :   OddDisplay 
//  Input           :   Integer
//  Output          :   Display odd numbers 
//  Description     :   Accept N from user and print all
//                      odd numbers upto N.
//  Date            :   1/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    { 
       if((iCnt % 2) != 0)
       {
            printf("%d\t",iCnt); 
       } 
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

    OddDisplay(iValue);

    return EXIT_SUCCESS;
}