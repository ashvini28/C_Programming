/*
    Accept character from user and check 
    whether it is digit or not (0-9).

    Input:  7
    Output: TRUE

    Input:  d
    Output: FALSE
*/
#include <stdio.h>
#include <stdlib.h>
 
#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////////
//
//  Function Name   :   ChkDigit
//  Input           :   character
//  Output          :   Check if it digit or not.                      
//  Description     :   Accept character from user and
//                      check whether it is digit or
//                      not (0-9).
//  Date            :   18/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

BOOL ChkDigit(char ch)
{
    if(ch >= '0' && ch <= '9')
    {
        return TRUE;
    }

    return FALSE;
}

///////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : ");
    scanf("%c", &cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is Digit\n");
    }
    else
    {
        printf("It is not a Digit\n");
    }

    return EXIT_SUCCESS;
}
