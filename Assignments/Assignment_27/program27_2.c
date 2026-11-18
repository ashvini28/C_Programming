/*
    Write a program which accept string from 
    user and count number of small characters.

    Input:  "Marvellous"
    Output: 9
*/
#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////
//
//  Function Name   :   CountSmall
//  Input           :   string
//  Output          :   Display small characters count
//  Description     :   Accept string from user and 
//                      display small characters count  
//  Date            :   19/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

int CountSmall(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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
    int iRet;

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    iRet = CountSmall(arr);

    printf("Count is : %d", iRet);

    return EXIT_SUCCESS;
}