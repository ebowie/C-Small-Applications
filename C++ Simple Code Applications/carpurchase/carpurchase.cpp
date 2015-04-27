/*
    Program: CarPurchase.cpp
    Author: Eric Bowers
    Lecture/Lab: ITCS 1212 002 / 1212 L11
    Date: 10 October 2012
    Purpose: to create a program to see if you are eligble to pay a new are or not
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //constant variables
    const float BASE_PRICE = 17950; // for base car price

    //variable
    char carPackages; // for the switch statement of picking one of the options
    float downPayment; // input by user
    float annualRate; // input by user
    float lengthYears; // input by user
    float monthlyPayment; // calculated
    float princpalRate; // calculated
    float monthlyInterestRate; // calculated
    float numberOfMonths; // calculated
    float annualIncome; // input by user
    float carCost; //calculated
    float monthlyIncome; // calculated
    float weeklyIncome; //calculated

    //input of the program for the choice of packages you would want with car
    cout<<"Select one of the car packages: "
        <<"\n\n Option B. includes: Base car no other features"
        <<"\n\n Option P. includes: auto transmission,power windows and locks, stereo sound system."
        <<"\n\n Option L. includes: all of the above plus MP3 player, secuity alarm, cruise control."
        <<"\n\n Option D. includes: all of the above plus deluxe detailing, pin stripes, leather seat, wind bar."
        <<"\n\n Option S. includes: all of the above plus seat heaters, Bose speakers, OnStar, Steering wheel control of music system, chrome rims."
        <<"\n\n\t Enter your option here: ";
        cin>> carPackages;
    //inputs put for the loan
    cout<<"\nEnter the down payment: ";// inputing down payment
    cin>> downPayment;

    cout<<"\nEnter the annual interest rate: %";// inputing the percent of the annual interest rate
    cin>> annualRate;

    cout<<"\nEnter length of loans in years: "; // inputing length of loan in years like 5. 2 or 3.8
    cin>> lengthYears;

    cout<<"\nEnter the annual income: $"; // inputing the annual income that you make
    cin>> annualIncome;

    //switch statement for your choice option to go through
    switch(carPackages)
    {
        case'b':
        case'B': cout<<"\nOption B:";carCost = BASE_PRICE; // option to pick if you want the base car
            break;
        case'p':
        case'P': cout<<"\nOption P:";carCost = BASE_PRICE + 1200; // this to pick option P
            break;
        case'l':
        case'L': cout<<"\nOption L:";carCost = BASE_PRICE + 1800; // this is to pick option L
            break;
        case'd':
        case'D': cout<<"\nOption D:";carCost = BASE_PRICE + 2500; // this is to pick option D
            break;
        case's':
        case'S': cout<<"\nOption S:";carCost = BASE_PRICE + 3100; // this is to pick option s
            break;
        default: cout<<"\nYou did pick any option try again"; // this is for if you did not pick any of the options
            break;
    }
     // the process of the program

     // the process for number of months
     numberOfMonths= lengthYears * 12;

     // the process for principal
     princpalRate = carCost - downPayment;

     // process for monthly interest rat
     monthlyInterestRate = (annualRate)/1200;

     // process for monthly income
     monthlyIncome = annualIncome/12;

     // the process of monthly payment
     monthlyPayment = princpalRate * (monthlyInterestRate)/(1-(pow((1 + monthlyInterestRate),(-numberOfMonths))));



     // the out put for all of the process to be display

     cout<<carCost;// display what option you picked and how much it is

     cout<<"\n\nPrincipal: "<<princpalRate<<endl; // display your principle

     cout<<"\nNumber of Months: "<<numberOfMonths<<endl; // display your number of months

     cout<<"\nMonthly Income: "<<monthlyIncome<<endl; // display your monthly income

     cout<<"\nMontly Payment: "<<monthlyPayment<<endl; // display your monthly payment

     //if statement to determine if the loan is eligble or not
      weeklyIncome = monthlyIncome/4;

      if(weeklyIncome> monthlyPayment)
      {
          cout<<"\nCongratulations, you are eligble for the loan!!"; // display if you are eligble
      }
      else
      {
        cout<<"\nwe are sorry but you are not eligble for this loan"; // display if you are not eligble
      }

    return 0;
}
