/*
    Program:Lab4B
    Author: Eric and josh
    Date: 9/26/2012
    Purpose: is a lab
*/
#include <iostream>

using namespace std;

int main()
{
    float weightAmt;
    float costAmt;

    //input
    cout<<"Enter the packages weight: ";
    cin >> weightAmt;

    // if statement
    if(weightAmt>=15)
    {
        costAmt = 8.50 + (weightAmt - 15) *.10;
    }
    else
    {
        if(weightAmt< 5)
        {
            costAmt = 3;
        }
        else
        {
            if(weightAmt < 10)
            {
                costAmt = 3 + (weightAmt - 5) * .25;
            }
            else
            {
               costAmt= 5.50 +(weightAmt- 10)*.2;
                }
            }
        }

    cout << "Package weighs " << weightAmt << " pounds and costs $" << costAmt;
    return 0;
}
