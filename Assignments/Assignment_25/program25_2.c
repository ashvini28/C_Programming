/*
    Accept character from user and check 
    whether it is capital or not (A-Z).

    Input:  F
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
//  Function Name   :   ChkCapital
//  Input           :   character
//  Output          :   Check if it capital character 
//                      or not.
//  Description     :   Accept character from user and
//                      check whether it is capital or
//                      not (A-Z).
//  Date            :   18/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

BOOL ChkCapital(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital Character\n");
    }
    else
    {
        printf("It is not a Capital Character\n");
    }

    return EXIT_SUCCESS;
}
