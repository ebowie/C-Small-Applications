/*
    Program: Car rental.cpp
    Author: Eric Bowers
    Date: 9 October 2012
    Lecture/Lab: ITCS 1212 002/1212 L11
    Purpose: to make a program for a car rental service to estimate the miles
             on the car and see how much to charge them for.
*/
#include <iostream>


using namespace std;

int main()
{
 // constant variables
 const float PER_MILES = 0.10; //addition miles for the varible

 //varibles
 int numberMiles;// input by user
 char carDriven;// choice to make what car you have rented
 float totalPrice;//calculation

 //input by user choice
   cout<<"Enter how many miles you have gone: ";
   cin>> numberMiles;

 //input by user choice of option
    cout<<"What car did you rent?"
        <<"\n 1. Sub-Compact: $0.25 "
        <<"\n 2. Sedan: $0.50"
        <<"\n 3. SUV: S0.75"
        <<"\n 4. Van: $1.00"
        <<"\n\t Enter the number of the car you pick: ";
        cin>> carDriven;

 //switch statment for the input process of the choice
 switch(carDriven)
 {
     case '1':if(numberMiles< 100)//calculation for the choice of the sub-compact
                {
                 totalPrice = 0.25 * numberMiles;
                }
                else
                {
                  if(numberMiles > 100)
                    {
                        totalPrice =  (numberMiles * 0.25)+ ((numberMiles- 100)* PER_MILES);
                    }
                }

        break;
     case'2':if(numberMiles< 100)// calculation for the choice of the sedan
                {
                 totalPrice = 0.50 * numberMiles;
                }
                else
                {
                  if(numberMiles > 100)
                    {
                        totalPrice =  (numberMiles * 0.50)+ ((numberMiles- 100)* PER_MILES);
                    }
                }
        break;
     case '3':if(numberMiles< 100) //calculation for the choice of the SUV
                {
                 totalPrice = 0.75 * numberMiles;
                }
                else
                {
                 if(numberMiles > 100)
                    {
                        totalPrice =  (numberMiles * 0.75)+ ((numberMiles- 100)* PER_MILES);
                    }
                }
        break;
     case '4':if(numberMiles< 100) // calculation for the choice of the van
                {
                 totalPrice = 1.00 * numberMiles;
                }
                else
                {
                  if(numberMiles > 100)
                    {
                        totalPrice =  (numberMiles * 1.00)+ ((numberMiles- 100)* PER_MILES);
                    }
                }
        break;
    default:cout<<"\nthis was not one of the options";
        break;

 }

//displaying the out of the final calculation
cout<<"\n\nThe total you owe is: $"<<totalPrice<<endl; // displaying the final price you owe

    return 0;
}
