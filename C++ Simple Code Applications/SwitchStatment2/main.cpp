/*****************************************************************
*   Date: 09/25/12                                               *
*   Author: D. Wilson, Ph.D.                                     *
*   Name: SwitchNoBreaks.cpp                                     *
*   Description: This program prompts the user to enter the      *
*   upgrade package to their house they desire. It determines    *
*   the total price of the house and the upgrade and displays    *
*   the total price to the screen.                               *
*   This program the optional nature of the break in the switch  *
*   statememt. There are two switch statements: one uses breaks, *
*   the other doesn't. Run as is, then comment out the 1st switch*
*   and uncomment the 2nd switch. Run again and test the output. *
*****************************************************************/

#include <iostream>

using namespace std;

int main()
{
    double price;
    int upgrade;
    price = 80000;     //this is the base price of the house with no upgrades


    //option 1 cost 15000 over base
	//option 2 includes all the features of option 1 and costs 18,000 over base
	//option 3 includes all the features of options 1 and 2 and costs 28,000 over base price
    cout << "Enter the upgrade package you want: "
            << "\n\t1. plush carpets and granite counter tops"
             << "\n\t2. hardwood floors and double vanity plus all of upgrade 1"
             <<  "\n\t3. fireplace and deck or patio plus all of above"
             << "\n\n\t\tEnter your choice or 0 for no upgrade: ";
    cin >> upgrade;

/*    switch(upgrade)
    {
        case 3: price = price +10000;
        case 2: price = price + 3000;
        case 1: price = price + 15000;
    }
*/
switch(upgrade)
 {
     case 1 : price = price + 15000;
                  break;
     case 2: price = price + 18000;
                  break;
     case 3: price = price + 28000;
 }


    cout << "Your total price tag is: $" << price << endl;

    return 0;
}
