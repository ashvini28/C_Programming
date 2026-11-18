/*
    Accept character from user and check 
    whether it is alphabet or not (A-Z a-z).

    Input:  F
    Output: TRUE

    Input:  &
    Output: FALSE
*/
#include <stdio.h>
#include <stdlib.h>
 
#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////////
//
//  Function Name   :   ChkAlpha
//  Input           :   character
//  Output          :   Check if it character or not.
//  Description     :   Accept character from user and
//                      check whether it is alphabet or
//                      not (A-Z a-z).
//  Date            :   18/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

BOOL ChkAlpha(char ch)
{
   if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is Character\n");
    }
    else
    {
        printf("It is not a Character\n");
    }

    return EXIT_SUCCESS;
}
