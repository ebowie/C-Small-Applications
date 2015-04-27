/*
    Program: payment.cpp
    Author: Eric Bowers
    Date: 09/17/2012
    Purpose:Rate is the monthly interest rate, which is the
    annual interest rate divided by 12. (12% annual interest
    rate would be 1% monthly interest rate. ) The user enters
    the annual INTEREST RATE AS A PERCENT( ie: 12.2 ). N is the
    number of payments and L is the loan amount, Write a program
    that asks for these values and displays a report similar to:

    Loan Amount: 		          $10000.00
    Monthly Interest Rate: 	      1%
    Number of Payments:			  36
    Monthly Payment:             $332
    Amount Paid Back:            $11957.15
    Interest Paid:                $1957.15

*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
// variables for the payment
float loanAmt;  // input by user
float monthlyRate; // calculated
  int numberPay; // input by user
float monthlyPay; // calculated
float interestPaid; //calculated
float amountPaidBack; //calculated
float annualRate; //input by user

// get required input from user
cout<<"Enter the loan amount:";
cin>> loanAmt;

cout<<"Enter the annual interest rate:";
cin>> annualRate;

cout<<"Enter the number payment:";
cin>> numberPay;

// The Process of the payment
monthlyRate= (annualRate/100)/(12); //coversion
monthlyPay= (monthlyRate * pow((1+monthlyRate),numberPay))/(pow((1+ monthlyRate),numberPay)-1)*(loanAmt); //calculated
amountPaidBack = monthlyPay*numberPay; //calculated
interestPaid = amountPaidBack - loanAmt; //calculated

//display results
cout<<"Loan Amount:$"<<loanAmt<<endl;
cout<<"Monthly Interest Rate:"<<monthlyRate<<endl;
cout<<"Number of Payment:"<<numberPay<<endl;
cout<<"Monthly Payment:$"<<monthlyPay<<endl;
cout<<"Amount Paid Back:$"<<amountPaidBack<<endl;
cout<<"Interest Paid:$"<<interestPaid<<endl;
    return 0;
}
