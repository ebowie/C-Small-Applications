#include <iostream>

using namespace std;

int main()
{
 // the variable of coins
 int itemCost;
 int amountGave;
 int totalAmount;
 int numberOfDollars;
 int numberOfDollars2;
 int numberOfQuarters;
 int numberOfQuarters2;
 int numberOfDimes;
 int numberOfDimes2;
 int numberOfNickels;
 int numberOfNickels2;
 int numberOfPennies;
 int numberOfPennies2;

 //get the input from the users
 cout<< "Enter the amount of the Item"<< endl;
 cin>> itemCost;

 cout<< " Enter the amount you gave for the item"<<endl;
 cin >> amountGave;

 // the process of the coins
 totalAmount = (amountGave - itemCost);
 numberOfDollars = totalAmount/1.00;
 numberOfDollars2 =(totalAmount%1.00);
 numberOfQuarters= numberOfDollars2/.25;
 numberOfQuarters2 = numberOfDollars2%.25;
 numberOfDimes = numberOfQuarters2/.10;
 numberOfDimes2 = numberOfQuarters2%.10;
 numberOfNickels = numberOfDimes2/.5;
 numberOfNickels2 = numberOfDimes2%.5;
 numberOfPennies = numberOfNickels2/.1;
 numberOfPennies2 = numberOfNickels2%.1;

 //display the results
 cout<<"In dollars"<< numberOfDollars<< endl;
 cout<<"in quarters"<< numberOfQuarters<< endl;
 cout<< "in dimes"<<numberOfDimes<<endl;
 cout <<"in nickels"<< numberOfNickels<<endl;
 cout<<"in pennies"<< numberOfPennies<<endl;

    return 0;
}
