/*
    2. Check Leap Year

    Problem statement:
    Accept a year and determine whether it is a leap year 
    according to Gregorian calender rules. A year is leap 
    year if it is divisible by 400 or divisible by 4 but 
    not by 100. Consider years less than or equal to zero
    invalid.

    Expected Output:
    1. Input: 2024 -> Leap Year
    2. Input: 1900 -> Not a Leap Year
    3. Input: 2000 -> Leap Year
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
//
//  Function Name   :   CheckLeapYear 
//  Input           :   Integer
//  Output          :   Display year is Leap Year or not
//  Description     :   Check Leap Year
//  Date            :   22/10/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////////

void CheckLeapYear(int iYear)
{
    //Input filter
    if(iYear <= 0)
    {
        printf("Invalid Input");
        return;
    }

    if(((iYear % 400) == 0) || (((iYear % 4) == 0) && !((iYear % 100) == 0)))
    {
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
}
///////////////////////////////////////////////////////////

//
//  Entry point of the application
//
///////////////////////////////////////////////////////////

int main()
{
    int iYear = 0;

    printf("Enter year: ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}