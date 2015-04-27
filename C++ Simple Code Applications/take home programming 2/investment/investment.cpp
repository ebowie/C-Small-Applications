/*
    Program:investment.cpp
    Author: Eric Bowers
    Date:09/17/2012
    Purpose: You just got great news! A distant uncle invested
            a sum of money for you when you were born ($1000)
            in an account with a fixed interest rate (7% annually)
            , compounded quarterly. Use this Future Value formula
            to calculate the value of the investment now.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
 // constant variable
 const float INTEREST_RATE = .07; // constant
 const int PRESENT_VALUE = 1000;  // constan

 // varaibles
 int numberYear; // input by user
 float quarterlyRate; //conversion
 float futureValue; // calculated

 //get the input from user
 cout<<"Enter the number of years:"; // input by user
 cin>> numberYear;

 // The Process for the investment
 quarterlyRate= INTEREST_RATE/4; // coversion
 futureValue= PRESENT_VALUE * pow((1+quarterlyRate),(numberYear*4)); // calculation

 //display the results
  cout<<"here is the future value:"<<futureValue<<endl;
  return 0;
}
