/*
    Write a program which accept string from user 
    and accept one character. Return index of first
    occurrence of that character.
    
    Input:      "Marvellous Multi OS"
                M

    Output:     0

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
//  Function Name   :   FirstChar
//  Input           :   string
//  Output          :   Display index of first 
//                      occurrence of that character
//  Description     :   Accept string from user and 
//                      accept one character. Return 
//                      index of 1st occurrence of that
//                      character.    
//  Date            :   18/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

int FirstChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iCount;
        }
        
        iCount++;
        str++;
    }

    return -1;
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

    iRet = FirstChar(Arr, cValue);

    printf("Character location is : %d", iRet);

    return EXIT_SUCCESS;
}
