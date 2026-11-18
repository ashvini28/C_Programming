/*
    Accept character from user and display it ASCII 
    value in decimal, octal and hexadecimal format.
    
    Input:  A
    Output: Decimal     65
            Octal       0101
            Hexadecimal 0X41

*/
#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
///////////////////////////////////////////////////////
//
//  Function Name   :   ChkSpecial
//  Input           :   character
//  Output          :   Display whether special character
//                      or not. 
//  Description     :   Accept character from user and 
//                      check whether it is special symbol
//                      or not(!,@,#,$,%,^,&,*)
//  Date            :   18/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

void Display(char ch)
{
    printf("Character : %c\n",ch);
    printf("Decimal : %d\n",ch);
    printf("Octal : %o\n",ch);
    printf("Hexadecimal : 0X%X\n",ch);
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

