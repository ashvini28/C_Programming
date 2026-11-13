/*
    Write a program which accept two numbers and 
    check whether numbers are equal or not.

    Input:  10 10 
    Output: Equal

    Input:  10 12
    Output: Not Equal

    Input:  10 -10
    Output: Not Equal

*/
#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////
//
//  Function Name   :   ChkEqual
//  Input           :   Integer, Integer
//  Output          :   Check whether numbers are equal 
//                      or not.
//  Description     :   Accept two numbers from user    
//                      and check whether numbers are 
//                      equal or not.
//  Date            :   13/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

BOOL ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return TRUE;
    }
    else{
        return FALSE;
    }
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    BOOL bRet = FALSE;

    printf("Please enter two numbers\n");
    scanf("%d %d", &iValue1,&iValue2);

    bRet = ChkEqual(iValue1,iValue2);

    if(bRet == TRUE)
    {
        printf("Equal\n");
    }
    else{
        printf("Not Equal\n");
    }

    return EXIT_SUCCESS;
}