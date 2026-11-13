/*
    Write a program which accept number from user 
    and display its factors in descending order.

    Input:  12
    Output: 6 4 3 2 1

    Input:  13
    Output: 1

    Input:  10
    Output: 5 2 1
*/
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////
//
//  Function Name   :   FactRev
//  Input           :   Integer
//  Output          :   Display factors in descending  
//                      order.
//  Description     :   Accept range from user 
//                      and Display factors in descending  
//                      order.
//  Date            :   12/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt = 0;
    int iFact = 0;
    iFact = 1;

    for(iCnt = iNo / 2 ; iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
           printf("%d\t",iCnt);
        }
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

    printf("Enter number\n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return EXIT_SUCCESS;
}