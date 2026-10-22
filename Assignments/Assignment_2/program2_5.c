/*
    Accept number from user and check whether number 
    is even or odd
*/
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////
//
//  Function Name   :   ChkEven 
//  Input           :   Integer
//  Output          :   Display Even or Odd based 
//                      on input number
//  Description     :   Display Even or Odd based 
//                      on input number
//  Date            :   21/10/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////

BOOL ChkEven(int iNo)
{
    if((iNo % 2) == 0)
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
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    //Display result
    if(bRet == TRUE)
    {
        printf("Even number\n");
    }
    else
    {
        printf("Odd number\n");
    }

    return EXIT_SUCCESS;
}