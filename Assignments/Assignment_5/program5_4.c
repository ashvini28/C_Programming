/*
    4. Check Divisibility by 3 and 5

    Problem statement:
    Accept an integer and determine whether it is divisible 
    by both 3 and 5, only 3, only 5 or neither.

    Expected Output:
    1. Input: 15 -> Divisible by both
    2. Input: 9  -> Divisible by 3 only
    3. Input: 10 -> Divisible by 5 only
    3. Input: 7  -> Not Divisible by either
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
//
//  Function Name   :   CheckMultipleDivisibility 
//  Input           :   Integer
//  Output          :   Display Divisible by both or
//                      Divisible by 3 only
//                      Divisible by 3 only
//                      Not Divisible by either
//  Description     :   Check Divisibility by 3 and 5
//  Date            :   22/10/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////////

void CheckMultipleDivisibility(int iValue)
{
    if((iValue % 3 == 0) && (iValue % 5 == 0))
    {
        printf("Divisible by both 3 and 5");
    }
    else if((iValue % 3 == 0) && !(iValue % 5 == 0))
    {
        printf("Divisible by 3 only");
    }
    else if(!(iValue % 3 == 0) && (iValue % 5 == 0))
    {
        printf("Divisible by 5 only");
    }
    else
    {
        printf("Not Divisible by Either");
    }
}
///////////////////////////////////////////////////////////

//
//  Entry point of the application
//
///////////////////////////////////////////////////////////

int main(void)
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}