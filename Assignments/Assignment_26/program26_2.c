/*
    Accept character from user. If character is small 
    display its corresponding capital character, and if it 
    capital then display its corresponding small. In other 
    cases display as it is.
    
    Input:  Q
    Output: q  

    Input:  m
    Output: M

    Input:  4
    Output: 4

    Input:  %
    Output: %

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
//                      small. If it is small then 
//                      display capital. In other cases
//                      display as it is.
//  Date            :   18/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        printf(" %c", ch + ('Z'-'A')+('a'-'Z'));
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf(" %c", ch - ('Z'-'A')-('a'-'Z'));        
    }
    else
    {
        printf("%c", ch);
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
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}
