/*
    Program: functions
    Author: Eric Bowers
    Date: 5 December 2012
    Lecture/Lab:ITCS 1212 002/1212 L11
    Purpose: the purpose of this programs is to creat 4 different function and
                each are different from each other.
*/
#include <iostream>


//the function for absolute value that take a number and makes a it postive
double absoluteValue( double number )
{
double answerToNumber;
if(number < 0 ){answerToNumber =  (number*number)/-number;}
else {answerToNumber =  number;}
return (answerToNumber);
}

// this function alouds you to put in 3 numbers to find the max out of the 3
int maxOfThree(double num1,double num2 ,double num3)
{
  double maxNumber;
  maxNumber= num1;
  if(num2 > maxNumber)
    {maxNumber=num2;}
    else
    {if(num3 >maxNumber)
      {maxNumber=num3;} }

     if(num3>num2)
      { maxNumber=num3;}
return(maxNumber);
}

// this function alouds you to put in a low case letter into upper case letter
 char giveMeUppercase(int someLetter)
 {
     char upperCase;
      if (someLetter>=97&&someLetter<=122)
      {upperCase = someLetter- 32;}
      else
      {upperCase=someLetter;}
        return (upperCase);
}

// this function alouds you to put in a character and display if it is a uppercase charcter or not
char isALetter(int someChar)
{
    bool result;
    if(someChar>=97&&someChar<=122)
    {result = true;}
    else
    {if(someChar>=65&&someChar<=122)
        {result=true;}}
    return (result);
}



using namespace std;
int main()
{
    // to test absolue value
  double someNumber;
  double answer;


  //to test maxOfThree

double num1;
double num2;
double num3;
double theMax;
char lowerCase;

//to test giveMeUppercase
  char someLetter;
char newVersionOfLetter;

// to test someChar
char someChar;
bool result;

cout<<"_________________________________\n";
cout<<"A\n";
// code to test absolue value
someNumber = 3.4;
answer = absoluteValue(someNumber);
cout << " The absolute value of "<< someNumber  << "is " << answer  << endl;

// code to test absolue value
someNumber = -4.5;
answer = absoluteValue(someNumber);
cout << " The absolute value of " << someNumber  << "is " << answer  << endl;

cout<<"_________________________________\n";
cout<<"B\n";

//code to test maxOfThree
num1 = 6;
num2 = 7;
num3 = 4;
theMax = maxOfThree(num1, num2, num3);
cout << " The max of  "  << num1 << "  "  << num2 << "  and  " << num3 << " is " << theMax
<< endl;

cout<<"_________________________________\n";
cout<<"C\n";

// code to test giveMeUppercae
someLetter = 'g';
newVersionOfLetter = giveMeUppercase(someLetter);
cout << " The uppercase version of "  << someLetter <<
" is "  << newVersionOfLetter << endl;



// code to test giveMeUppercae
someLetter = 'B';
newVersionOfLetter = giveMeUppercase(someLetter);
cout << " The uppercase version of "  << someLetter <<
" is "  << newVersionOfLetter << endl;



// code to test giveMeUppercae
someLetter = '?';
newVersionOfLetter = giveMeUppercase(someLetter);
cout << " The uppercase version of "  << someLetter <<
" is "  << newVersionOfLetter << endl;

cout<<"_________________________________\n";
cout<<"D\n";


// code to test someChar
someChar = 'j';
result = isALetter(someChar);
if(result)
{
  cout <<  someChar << "  is a letter. "  << endl;;
}else
{
   cout <<  someChar << " is not a letter. " << endl;
}


// code to test someChar

someChar = 'R';
result = isALetter(someChar);
if(result)
{
  cout <<  someChar << "  is a letter. "  << endl;;
}else
{
   cout <<  someChar << " is not a letter. " << endl;
}

// code to test someChar

someChar = '&';
result = isALetter(someChar);
if(result)
{
  cout   <<   someChar << "  is a letter. "  << endl;;
}else
{
   cout   <<  someChar << "  is not a letter. " << endl;
}
cout<<"_________________________________\n";

cout<<"\n\n Test complete \n";// display when everything is over


    return 0;
}

