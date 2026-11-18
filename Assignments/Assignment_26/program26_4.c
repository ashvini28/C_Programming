/*
    Accept character from user and check whether it is
    special symbol or not(!,@,#,$,%,^,&,*)
    
    Input:  %
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
//  Function Name   :   ChkSpecial
//  Input           :   character
//  Output          :   Display whether special character
//                      or not. 
//  Description     :   Accept character from user and 
//                      check whether it is special symbol
//                      or not(!,@,#,$,%,^,&,*)
//  Date            :   18/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

BOOL ChkSpecial(char ch)
{
    if(ch == '!' || ch == '@' || ch == '#' || ch == '$' || 
        ch == '%' || ch == '^' || ch == '&' || ch == '*' )   
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
    scanf(" %c", &cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is Special Character\n");
    }
    else
    {
        printf("It is not a Special Character\n");
    }

    return EXIT_SUCCESS;
}

