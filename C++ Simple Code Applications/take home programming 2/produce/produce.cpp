/*
    Program:produce.cpp
    Author: Eric Bowers
    Date: 09/17/2012
    Purpose: Write a program that calculates and prints
             the your bill from a visit to the farmer’s
             market. Ask the user to enter how many pounds
             of each type of produce he/she purchased.
             Use symbolic constants for the unit prices and
             the membership discount percent.
*/
#include <iostream>

using namespace std;

int main()
{
    // constant varibles
    const float TOTAL_DISCOUNT =.95;//constant varible
    const float TAX_RATE = 1.025;//constant variable
    const float PER_GRAPES = 1.99; // constant variable
    const float PER_TOMATOES = 1.39; //constant variable
    const float PER_PEACHES = 1.45; // constant variable
    const float NUMBER_CANTALOUPES = 1.99; //constant variable

    // variables
    float manyGrapes;//input by user
    float manyTomatoes; // input by user
    float manyPeaches; // input by user
    float manyCantaloupes; // input by user
    float subTotal; // calculated
    float discountAmount; // calculated
    float discountTotal; //calculated
    float taxAmt; // calculated
    float totalAmount; //calculated

    //get input from user
    cout<<"Enter how many grapes you have:";
    cin>> manyGrapes;

    cout<<"Enter how many tomatoes you have:";
    cin>> manyTomatoes;

    cout<<"Enter how many peaches you have:";
    cin>>manyPeaches;

    cout<<"Enter how many cantaloupes you have:";
    cin>> manyCantaloupes;

    //The proces for the produce
    subTotal = ((manyGrapes * PER_GRAPES)+(manyTomatoes*PER_TOMATOES)+(manyPeaches*PER_PEACHES)+(manyCantaloupes*NUMBER_CANTALOUPES));
    discountAmount= (subTotal-(subTotal* TOTAL_DISCOUNT));
    discountTotal = TOTAL_DISCOUNT * subTotal;
    taxAmt = ((discountTotal*TAX_RATE)- discountTotal);
    totalAmount = ((subTotal- discountAmount)+ taxAmt);

    // display result
    cout<<"subtotal:"<<subTotal<<endl;
    cout<<"Discount:"<<discountAmount<<endl;
    cout<<"The total with the discount:"<<discountTotal<<endl;
    cout<<"tax amount:"<<taxAmt<<endl;
    cout<<"total Amount:"<<totalAmount<<endl;
    return 0;

}
