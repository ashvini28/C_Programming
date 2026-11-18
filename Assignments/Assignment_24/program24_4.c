/*
    Write a program which accept string from user 
    and accept one character. Return index of last
    occurrence of that character.
    
    Input:      "Marvellous Multi OS"
                M

    Output:     11

    Input:      "Marvellous Multi OS"
                W

    Output:     -1

    Input:      "Marvellous Multi OS"
                e

    Output:     4
*/
#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////
//
//  Function Name   :   LastChar
//  Input           :   string
//  Output          :   Display index of last 
//                      occurrence of that character
//  Description     :   Accept string from user and 
//                      accept one character. Return 
//                      index of last occurrence of the
//                      character.    
//  Date            :   18/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

int LastChar(char *str, char ch)
{
    int iCount = 0;
    int iIndex = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iIndex = iCount;
        }
        
        iCount++;
        str++;
    }

    return iIndex;
}

///////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    char cValue;
    int iRet;

    printf("Enter string : ");
    scanf("%[^'\n']s", Arr);

    printf("Enter character : ");
    scanf(" %c", &cValue);

    iRet = LastChar(Arr, cValue);

    printf("Character location is : %d", iRet);

    return EXIT_SUCCESS;
}
