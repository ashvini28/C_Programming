/*
    Write a program which accept string from user 
    and convert it into upper case.
    
    Input:      "Marvellous Multi OS"

    Output:     MARVELLOUS MULTI OS
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////
//
//  Function Name   :   struprx
//  Input           :   string
//  Output          :   Display string in upper case
//  Description     :   Accept string from user                      
//                      and convert it into upper case.
//  Date            :   17/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

void struprx(char *str)
{
    int diffLowerToCap = ('z' - 'a') + ('a' - 'Z');   //32

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - diffLowerToCap;
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

    struprx(arr);

    printf("Modified string is : %s ", arr);

    return EXIT_SUCCESS;
}