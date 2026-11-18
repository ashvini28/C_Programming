/*
    Accept character from user and check 
    whether it is small case or not (0-9).

    Input:  g
    Output: TRUE

    Input:  D
    Output: FALSE
*/
#include <stdio.h>
#include <stdlib.h>
 
#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////////
//
//  Function Name   :   ChkSmall
//  Input           :   character
//  Output          :   Check if character is small 
//                      case or not.                      
//  Description     :   Accept character from user and
//                      check whether it is small case 
//                      or not (a-z).
//  Date            :   18/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

BOOL ChkSmall(char ch)
{
    if(ch >= 'a' && ch <= 'z')
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

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small case Character\n");
    }
    else
    {
        printf("It is not a Small case Character\n");
    }

    return EXIT_SUCCESS;
}
