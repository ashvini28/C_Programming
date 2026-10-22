/*
    1. Check Even or Odd Number

    Problem statement:
    Accept an integer from the user and determine whether 
    it is even or odd. An even number is completely divisible by 2

    Expected Output:
    1. Input: 24 -> Even Number
    2. Input: 17 -> Odd Number
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
//
//  Function Name   :   CheckEvenOdd 
//  Input           :   Integer
//  Output          :   Number is even or odd
//  Description     :   Check whether Number is 
//                      even or odd
//  Date            :   22/10/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////////

void CheckEvenOdd(int iNo)
{
    if((iNo % 2) ==  0)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number");
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

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}