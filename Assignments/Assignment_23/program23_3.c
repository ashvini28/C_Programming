/*
    Write a program which accept string from user 
    and toggle the case.
    
    Input:      "Marvellous Multi OS"

    Output:     mARVELLOUS mULTI os
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////
//
//  Function Name   :   strtogglex
//  Input           :   string
//  Output          :   Display toggled string.
//  Description     :   Accept string from user                       
//                      and toggle the case.
//  Date            :   17/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

void strtogglex(char *str)
{
    int difference = ('Z' - 'A') + ('a' - 'Z'); //32

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + difference;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - difference;
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

    strtogglex(arr);

    printf("Modified string is : %s ", arr);

    return EXIT_SUCCESS;
}