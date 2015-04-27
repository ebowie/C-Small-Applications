/*
    Program:partycost.cpp
    Author: Eric Bowers 800771141
    Date: 9/12/2012
    Purpose: The program should display the amount to
             charge a customer for a party
*/

#include <iostream>

using namespace std;

int main()
{
    // the variables
    int howManyPeople; //input by the user
    int howManyHours;  // input by the user
    int estimateCost;  // calculated

    // get input from user
    cout <<" how many people are there:"<< endl;
    cin>> howManyPeople;

    cout<< "how many hours will you be there:"<< endl;
    cin>> howManyHours;

    // the process of the cost of everything
    estimateCost = ((howManyHours* 2)*(howManyPeople)) + (howManyHours * 50);


    // display the results
    cout<<" here is how much it will cost:"<<estimateCost<< endl;
    return 0;
}
