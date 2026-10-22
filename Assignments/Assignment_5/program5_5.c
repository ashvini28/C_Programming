/*
    5. Identify Character Type

    Problem statement:
    Accept a single character and determine whether it is an
    uppercase alphabet, lowercase alphabet, digit, or special 
    character. Use character comparisons without using library
    character-classification functions. 

    Expected Output:
    1. Input: A -> Uppercase Alphabet
    2. Input: m -> Lowercase Alphabet
    3. Input: 7 -> Digit
    4. Input: @ -> Special Character
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
//
//  Function Name   :   CheckCharacterType 
//  Input           :   Character
//  Output          :   Display whether alphabet is 
//                      Uppercase, Lowercase, Digit or
//                      special character
//  Description     :   Identify Character Type
//  Date            :   22/10/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////////

void CheckCharacterType(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("Uppercase Alphabet\n");
    }
    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("Lowercase Alphabet\n");
    }
    else if((cValue >= '0') && (cValue <= '9'))
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special Character\n");
    }
}
///////////////////////////////////////////////////////////

//
//  Entry point of the application
//
///////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf(" %c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}