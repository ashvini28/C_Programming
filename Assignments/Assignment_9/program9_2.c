/*
    2.Accept amount in us dollar and return its 
    corresponding value in indian currency. 
    Consider 1$ as 70 rupees.

    Input : 10
    Output: 700

    Input : 3
    Output: 270

    Input : 1200
    Output: 84000
*/

///////////////////////////////////////////////////////
//
//  Function Name   :   Number
//  Input           :   Integer
//  Output          :   Display result in indian currency
//  Description     :   Accept amount in us dollar and return its 
//                      corresponding value in indian currency. 
//                      Consider 1$ as 70 rupees.
//  Date            :   2/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int Number(int iNo)
{
    int iAns = 0;
    iAns = iNo * 70;
    return iAns;  
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}