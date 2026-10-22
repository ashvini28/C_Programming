/*
    1. Calculate Electricity Bill

    Problem statement:
    Accept the number of electricity units consumed and 
    calculate the total bill using the following
    slab-wise rates. Each slab rate applies only to units 
    within that slab.

    -------------------------------------------------
        Units Consumed          Rate
    -------------------------------------------------
        First 100 units         Rs. 5 per unit
    -------------------------------------------------
        Next 100 units          Rs. 7 per unit
    -------------------------------------------------
        Above 200 units         Rs. 10 per unit
    -------------------------------------------------

    Negative unit consumption is invalid.

    Expected Output:
    1. Input: 80  -> Bill = 400.00
    2. Input: 150 -> Bill = 850.00
    3. Input: 250 -> Bill = 1700.00
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
//
//  Function Name   :   CalculateElectricityBill 
//  Input           :   Integer
//  Output          :   Display Bill amount based on Rate
//                      consumed units
//  Description     :   Calculate Electricity Bill
//  Date            :   22/10/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////////

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    //Input filter
    if(iUnits < 0)
    {
        printf("Invalid Input");
        return;
    }

    if(iUnits >= 0 && iUnits <= 100)
    {
        fBill = iUnits*5;
        printf("%f", fBill);
    }
    else if(iUnits >= 101 && iUnits <= 200)
    {
        fBill = (100*5) + (iUnits-100)*7;
        printf("%f", fBill);
    }
    else if(iUnits >= 201)
    {
        fBill = (100*5) + (100*7)+ (iUnits-200)*10;
        printf("%f", fBill);
    }
}
///////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////

int main()
{
    int iUnits = 0;

    printf("Enter consumed units: ");
    scanf("%d",&iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}