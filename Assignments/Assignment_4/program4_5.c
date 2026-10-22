/*
    5. Check Disibility by 5

    Problem statement:
    Accept an integer and determine whether it is divisible
    by 5 without leaving any remainder. 

    Expected Output:
    1. Input: 45 -> Divisible by 5 
    2. Input: 23 -> Not Divisible by 5
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
//
//  Function Name   :   CheckDivisibility 
//  Input           :   Integer
//  Output          :   Number is Divisible by 5 or
//                      Number is Not Divisible by 5 
//  Description     :   Check Disibility by 5
//  Date            :   22/10/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////////

void CheckDivisibility(int iValue)
{
    if((iValue % 5) == 0)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");     
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

    printf("Enter a number:");
    scanf("%d", &iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}