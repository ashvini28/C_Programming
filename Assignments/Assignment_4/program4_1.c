/*
    1. Check whether a Number is Positive or Negative

    Problem statement:
    Write a C program that accepts an integer from the user and 
    determines whether the entered number is positive, negative 
    or zero.

    Expected Output:
    1. Input: 15 -> Positive Number
    2. Input: -8 -> Negative Number
    3. Input: 0  -> Zero
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   CheckNumber 
//  Input           :   Integer
//  Output          :   Number is Positive or Negative
//  Description     :   Check whether Number is 
//                      Positive or Negative
//  Date            :   22/10/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////

void CheckNumber(int iNo)
{
    if(iNo > 0)
    {
        printf("Positive Number");
    }
    else if(iNo < 0)
    {
        printf("Negative Number");
    }
    else{
        printf("Zero");
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

    printf("Enter number: ");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}