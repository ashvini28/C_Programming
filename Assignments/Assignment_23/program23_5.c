/*
    Write a program which accept string from user 
    and count number of white spaces.
    
    Input:      "Marvellous"

    Output:     0

    Input:      "MarvellouS Infosystems"

    Output:     1
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////
//
//  Function Name   :   CountWhite
//  Input           :   string
//  Output          :   Display count of white spaces
//  Description     :   Accept string from user and                       
//                      count number of white spaces
//  Date            :   17/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
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
    char arr[20];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s", arr);

    iRet = CountWhite(arr);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}