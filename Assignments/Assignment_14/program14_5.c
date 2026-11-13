/*
    Write a program which accept number from user 
    and return difference between summation of all its 
    factors and non factors.

    Input:  12
    Output: -34 (16 - 50)

    Input:  10
    Output: -29 (8 - 37)

*/
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////
//
//  Function Name   :   FactDiff
//  Input           :   Integer
//  Output          :   Display difference between 
//                      summation of all its factors 
//                      and non factors.
//  Description     :   Accept range from user and 
//                      display difference between
//                      summation of all its factors
//                      non factors.
//  Date            :   12/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;
    int iDff = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) == 0 && iCnt <= (iNo/2))
        {
            iSumFact = iSumFact + iCnt;
        }
        else if((iNo % iCnt) != 0)
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }

    iDff = iSumFact - iSumNonFact;

    return iDff;
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

    iRet = FactDiff(iValue);

    printf("Difference between summation of all non factors : %d", iRet);

    return EXIT_SUCCESS;
}