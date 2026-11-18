/*
    Write a program which accept string from user and 
    display it in reverse order.

    Input:  "MarvellouS"
    Output: SuollevraM

*/
#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////
//
//  Function Name   :   Reverse
//  Input           :   string
//  Output          :   Display reversed string
//  Description     :   Accept string from user and 
//                      display reversed string
//  Date            :   19/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

void Reverse(char *str)
{

    char temp = '\0';
    char *start = str;
    char *end = str;

    while (*end != '\0')
    {
       end++;
    }
    end--;

    while (end > start)
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

    Reverse(arr);

    printf("Reversed string is : %s", arr);

    return EXIT_SUCCESS;
}