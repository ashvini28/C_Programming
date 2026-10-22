/*
    1. Find the Greater of Two Numbers

    Problem statement:
    Accept two integer and determine which number is greater.
    If both numbers are equal, display an apprpriate message.

    Expected Output:
    1. Input: 10  20 -> 20 is Greater 
    2. Input: 50  30 -> 50 is Greater
    3. Input: 15  15 -> Both Numbers are Equal
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
//
//  Function Name   :   FindGreater 
//  Input           :   Integer, Integer
//  Output          :   Number is Greater or Both Numbers 
//                      are Equal
//  Description     :   Find the Greater of Two Numbers
//  Date            :   22/10/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////////

void FindGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("%d is Greater", iFirst);
    }
    else if(iSecond > iFirst)
    {
        printf("%d is Greater", iSecond);
    }
    else if (iFirst == iSecond) 
    {
        printf("Both Numbers are Equal");     
    }
}

///////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two number: ");
    scanf("%d %d", &iValue1, &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}