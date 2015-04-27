/*
    Program:ifelseovertime
    Author:
    Date:
    Purpose:
*/


#include <iostream>

using namespace std;

int main()
{
  float hoursWorked;
  float payRate;
  float totalPay;

  cout<<"Enter the number of hours you worked:";
  cin>> hoursWorked;

  cout<<"Enter your hourly pay rate:";
  cin>> payRate;

  //if the relational expression is true
  //then the first block(lines 38-40 will excute
  //but if the relational expression is fale, the
  //second block (lines 42-44 will excute instead
   if(hoursWorked<=40)
    {
    totalPay=hoursWorked*payRate;
    }
    else
    {
        totalPay = (40 * payRate) + ((hoursWorked -40)*(payRate * 1.5));
    }
    //after the branching,excution of code comes back together
    //and continues in sequence
    cout<<"Your pay this week is:$"<<totalPay;
    return 0;
}
