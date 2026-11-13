/*
    Write a program which accept number from user 
    and return summation of all its non factors.

    Input:  12
    Output: 50

    Input:  10
    Output: 37
*/
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////
//
//  Function Name   :   SumNonFact
//  Input           :   Integer
//  Output          :   Display summation of all its
//                      non factors.
//  Description     :   Accept range from user and 
//                      display summation of all
//                      its non factors.
//  Date            :   12/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int sum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            sum = sum + iCnt;
        }
    }

    return sum;
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("Summation of all non factors : %d", iRet);

    return EXIT_SUCCESS;
}