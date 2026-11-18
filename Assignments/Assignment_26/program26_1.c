/*
    Write a program which displays ASCII table. Table 
    contains symbol, Decimal, Hexadecimal and Octal
    representation of every member from 0 to 255.
*/
#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////
//
//  Function Name   :   DisplayASCII
//  Input           :   -
//  Output          :   Display ASCII table
//  Description     :   Write a program which displays 
//                      ASCII table.(symbol, Decimal,
//                      Hexadecimal and Octal 
//                      representation of 0 to 255)    
//  Date            :   18/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

void DisplayASCII()
{
    int i = 0;

    printf("----------------------------------------------------------\n");
    printf(" Symbol\t\tDecimal\t\tHexadecimal\tOctal\n");
    printf("----------------------------------------------------------\n");

    for(i = 0; i <= 255; i++)
    {
        printf(" %c\t\t%d\t\t%X\t\t%o\n\n", i,i,i,i);
    }

    printf("----------------------------------------------------------\n");
}

///////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}
