/*
    1.write a program which accept number from user and 
    display below pattern

    Input : 5
    Output: * * * * * # # # # #

    Input : -5
    Output: * * * * * # # # # #

    Input : 3
    Output: * * *  # # # 
*/

///////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Input           :   Integer
//  Output          :   Display pattern
//  Description     :   Accept number from user and 
//                      display below pattern
//  Date            :   2/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        printf("*\t");
    }

    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        printf("#\t");
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

    printf("Enter number : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}