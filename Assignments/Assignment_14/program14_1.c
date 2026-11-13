/*
    Write a program which accept number from user 
    and display its multiplication of factors.

    Input:  12
    Output: 144 (1 * 2 * 3 * 4 * 6)

    Input:  13
    Output: 1   (1)

    Input:  10
    Output: 10  (1 * 2 * 5)
*/
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////
//
//  Function Name   :   MultFact
//  Input           :   Integer
//  Output          :   Display multiplication of 
//                      factors.
//  Description     :   Accept range from user 
//                      and multiplication of factors.
//  Date            :   12/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 0;
    iMult = 1;

    for(iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
           iMult = iMult * iCnt;
        }
    }
    return iMult;
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

    iRet = MultFact(iValue);

    printf("Multiplication of factors is : %d", iRet);

    return EXIT_SUCCESS;
}