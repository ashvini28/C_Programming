/*
    Write a program which accept string from user 
    and convert it into lower case.
    
    Input:      "Marvellous Multi OS"

    Output:     marvellous multi os
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////
//
//  Function Name   :   strlwrx
//  Input           :   string
//  Output          :   Display string in lower case
//  Description     :   Accept string from user 
//                      and convert it into lower case.
//  Date            :   17/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

void strlwrx(char *str)
{
    int diffCapToLower = ('Z' - 'A') + ('a' - 'Z'); //32

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + diffCapToLower;
        }
        str++;
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

    printf("Enter string\n");
    scanf("%[^'\n']s", arr);

    strlwrx(arr);

    printf("Modified string is : %s ", arr);

    return EXIT_SUCCESS;
}