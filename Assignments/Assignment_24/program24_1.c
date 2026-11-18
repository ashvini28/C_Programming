/*
    Write a program which accept string from user 
    and accept one character. Check whether that character
    is present in string or not.
    
    Input:      "Marvellous Multi OS"
                e

    Output:     TRUE

    Input:      "Marvellous Multi OS"
                w

    Output:     FALSE
*/
#include <stdio.h>
#include <stdlib.h>
 
#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////////
//
//  Function Name   :   ChkChar
//  Input           :   string
//  Output          :   Display if character found or 
//                      not found.
//  Description     :   Accept string from user and 
//                      accept one character. Check 
//                      if that character is present
//                      in string or not.
//  Date            :   18/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

BOOL ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }

        str++;
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
    char Arr[20];
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter string : ");
    scanf("%[^'\n']s", Arr);

    printf("Enter character : ");
    scanf(" %c", &cValue);

    bRet = ChkChar(Arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return EXIT_SUCCESS;
}
