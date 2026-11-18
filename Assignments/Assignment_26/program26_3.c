/*
    Accept character from user. If it is capital then
    dispaly all the characters from the input characters
    till Z. If input character is small then print all 
    the characters in reverse order till a. In other 
    cases return directly.
    
    Input:  Q
    Output: Q   R   S   T   U   V   W   X   Y   Z

    Input:  m
    Output: m   l   k   j   i   h   g   f   e   d   c   b   a

    Input:  8
    Output: 

*/
#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Input           :   character
//  Output          :   Display expected output
//  Description     :   Accept character from user.
//                      If it is capital then display
//                      that character to Z.
//                      If it is small the display 
//                      that character to a.
//                      In other cases return directly.
//  Date            :   18/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

void Display(char ch)
{
    char c;

    if(ch >= 'A' && ch <= 'Z')
    {
        for(c = ch; c <= 'Z'; c++)
        {
            printf(" %c\t",c);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(c = ch; c >= 'a'; c--)
        {
            printf(" %c\t",c);
        }
    }
    else{
        return;
    } 
}

///////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf(" %c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}
