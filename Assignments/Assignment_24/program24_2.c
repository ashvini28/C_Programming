/*
    Write a program which accept string from user 
    and accept one character. Return frequency of
    that character.
    
    Input:      "Marvellous Multi OS"
                M

    Output:     2

    Input:      "Marvellous Multi OS"
                W

    Output:     0
*/
#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////
//
//  Function Name   :   CountChar
//  Input           :   string
//  Output          :   Display frequency of character.
//  Description     :   Accept string from user and 
//                      accept one character. Return 
//                      frequency of that character.    
//  Date            :   18/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }

        str++;
    }

    return iCount;
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

    iRet = CountChar(Arr, cValue);

    printf("Character frequency is : %d", iRet);

    return EXIT_SUCCESS;
}
