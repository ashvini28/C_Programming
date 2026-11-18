/*
    Write a program which accept string from 
    user and return difference between frequency
    of small characters and frequency of capital 
    characters.

    Input:  "MarvellouS"
    Output: 6   (8-2)
*/
#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////
//
//  Function Name   :   Difference
//  Input           :   string
//  Output          :   Display difference between small
//                      and Capital Letters
//  Description     :   Accept string from user and 
//                      Display difference between small
//                      and Capital Letters  
//  Date            :   19/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

int Difference(char *str)
{
    int iCountCapital = 0;
    int iCountSmall = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
           iCountSmall++;
        }

        if(*str >= 'A' && *str <= 'Z')
        {
           iCountCapital++;
        }
        
        str++;
    }

    if(iCountCapital > iCountSmall)
    {
        return (iCountCapital - iCountSmall);
    }
    else
    {
        return (iCountSmall - iCountCapital);
    }
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

    iRet = Difference(arr);

    printf("Difference is : %d", iRet);

    return EXIT_SUCCESS;
}