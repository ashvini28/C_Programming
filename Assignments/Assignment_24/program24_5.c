/*
    Write a program which accept string from user 
    and reverse that string in place.
    
    Input:      "abcd"

    Output:     "dcba"

    Input:      "abba"

    Output:     "abba"
*/
#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////
//
//  Function Name   :   StrRevX
//  Input           :   string
//  Output          :   Reversed string
//  Description     :   Reverse the string in place.   
//  Date            :   18/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

void StrRevX(char *str)
{
    char temp;
    char *start = str;
    char *end = str;

    while (*end != '\0')
    {
        end++;
    }

    end--;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
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

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    StrRevX(arr);

    printf("Modified string is : %s", arr);

    return EXIT_SUCCESS;
}
