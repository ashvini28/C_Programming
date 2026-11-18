/*
    Write a program which accept string from 
    user and count number of capital characters.

    Input:  "Marvellous Multi OS"
    Output: 4
*/
#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////
//
//  Function Name   :   CountCapital
//  Input           :   string
//  Output          :   Display Capital characters count
//  Description     :   Accept string from user and 
//                      Display Capital characters count  
//  Date            :   18/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

int CountCapital(char *str)
{
    int iCount = 0;

    //Filter

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
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

    iRet = CountCapital(arr);

    printf("Count is : %d", iRet);

    return EXIT_SUCCESS;
}