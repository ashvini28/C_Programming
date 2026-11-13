/*
    Write a program which accept total marks and obtained
    marks from user and calculate percentage.

    Input:  1000 745 
    Output: 74.5%

*/
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////
//
//  Function Name   :   percentage
//  Input           :   Integer, Integer
//  Output          :   Display percentage.
//  Description     :   Accept total marks and obtained
//                      marks from user and calculate 
//                      percentage.
//  Date            :   13/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

float percentage(float iNo1, float iNo2)
{
    float fAns = 0.0f;

    if(iNo1 <= 0 || iNo1 <= 0)
    {
        printf("Invalid Input\n");

        return EXIT_FAILURE;
    }
    
    fAns = (iNo2 / iNo1)*100;

    return fAns;
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    float fRet = 0.0f;

    printf("Please enter total marks\n");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks\n");
    scanf("%d", &iValue2);

    fRet = percentage(iValue1,iValue2);

    printf("Percentage is : %.1f%%", fRet);

    return EXIT_SUCCESS;
}