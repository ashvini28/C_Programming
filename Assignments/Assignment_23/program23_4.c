/*
    Write a program which accept string from user 
    and display only digits from that string.
    
    Input:      "marve89llous121"

    Output:     89121

    Input:      "Demo"

    Output:     
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////
//
//  Function Name   :   DisplayDigits
//  Input           :   string
//  Output          :   Display only digits
//  Description     :   Accept string from user and                       
//                      display only digits from that 
//                      string.
//  Date            :   17/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

void DisplayDigits(char *str)
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c",*str);
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

    DisplayDigits(arr);

    return EXIT_SUCCESS;
}