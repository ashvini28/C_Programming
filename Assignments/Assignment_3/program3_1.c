/*
    Write a program which accepts one number from 
    user and prints that number of even numbers on 
    screen.
    
    Input:  7
    Output:  2   4   6   8   10   12   14
*/
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   PrintEven 
//  Input           :   Integer
//  Output          :   Print even numbers
//  Description     :   Print even numbers on 
//                      screen as per given count.
//  Date            :   22/10/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    int iCnt1 = 0;
    for (iCnt1 = 1; iCnt1 <= iNo; iCnt1++)
    {
        printf("%d ", iCnt1 * 2);
       
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

    printf("Enter number");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;
}
