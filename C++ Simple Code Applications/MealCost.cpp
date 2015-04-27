/* Purpose: This program asks the user for the price of a meal and the
            percent of tip to be left. It then calculates the tip and displays
            the price of the meal, the amount of the tip and the total cost.
    Author: Josh Nielsen and Eric Bowers
    Date: 9/5/2012
*/

#include<iostream>
using namespace std;

int main()
{
    //this section declares all variable
    float mealPrice; //input by user
    float tipPercent; //input by user
    float tipAmount; //calculated
    float totalCost; //calculated

    //cin is used to read input from the user into a variable
    //prompt the user for values for the input variables
    cout<<"Enter the price of the meal you purchased: ";
    cin>> mealPrice;

    cout<<"Enter the percent of tip you wish to leave as a percent: ";
    cin>> tipPercent;

    //process-notice  the use of the assingment operator- it works from right to left
    tipPercent=tipPercent * .01; //movie the decimal two places to the left
    tipAmount=mealPrice * tipPercent;//calculate the amount of tip
    totalCost=mealPrice+tipAmount;//calculates the total cost

    //print output to screen using cout
    cout<<"The mealPrice you entered is "<<mealPrice<<endl;
    cout<<"The amount of tip is "<<tipAmount<<endl;
    cout<< "The total cost is "<< totalCost<<endl;
    return 0;
} 


