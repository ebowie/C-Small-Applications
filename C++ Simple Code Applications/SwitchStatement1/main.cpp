/*****************************************************************
*   Date: 09/25/12                                               *
*   Author: D. Wilson, Ph.D.                                     *
*   Name: switchexample1.cpp                                     *
*   Description: This program simulates a calculator. It prompts *
*   the user to enter two numerical values and an arithmetic     *
*   operator. It performs the arithmetic operation on the two    *
*   input values and displays the result to the screen.          *
*   This program is an example of the switch statement.          *
*****************************************************************/

#include <iostream>

using namespace std;

int main()
{
   double number1;
   double number2;
   double answer;
   char choice;

   cout << "Enter your first operand: ";
   cin >> number1;
   cout << "Enter your second operand operand: ";
   cin >> number2;

   //This code presents the menu to the user
   cout << "\n\t\tA to Add\n";
   cout << "\t\tS to Subtract\n";
   cout << "\t\tM to Multiply\n";
   cout << "\t\tD to Divide\n";
   cout << "\t\t\tEnter your choice: ";
   cin >> choice;

  //The variable choice has been declared as a char. The only variable types
  //allowed in the switch heading are char or int types
     switch(choice)
   {
       case 'a': //notice no code here- the execution will fall through until a break statement is reached
       case 'A': answer = number1 + number2;
                 break;

       case 's':
       case 'S': answer = number1 - number2;
                 break;
       case 'm':
       case 'M': answer = number1 * number2;
                 break;
       case 'd':
       case 'D': if(number2 == 0) //notice you can embed if statements in a single case
                 {
                   cout << "You cannot divide by zero!";
                   answer = -99999;
                 }
                 else
                 {
                   answer = number1/number2;
                 }
                 break;
       default:
                 cout << "You entered an invalid choice\n";
                 answer = -99999;

   }
/*
   switch(choice)
   {
       case 'A': answer = number1 + number2;
                 break;

       case 'S': answer = number1 - number2;
                 break;

       case 'M': answer = number1 * number2;
                 break;

       case 'D': if(number2 == 0)
                 {
                   cout << "You cannot divide by zero!";
                   answer = -99999;
                 }
                 else
                 {
                   answer = number1/number2;
                 }
                 break;
       default:
                 cout << "You entered an invalid choice\n";
                 answer = -99999;

   }
*/


   cout << "Your answer is " << answer << endl << endl;
   cout << "Goodbye! Thank you for using our calculator. " << endl;

   return 0;
}
