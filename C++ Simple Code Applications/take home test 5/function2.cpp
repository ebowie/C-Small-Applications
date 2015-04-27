#include <iostream>

using namespace std;

int maxOfThree(double num1,double num2 ,double num3)
{
  double maxNumber;
  maxNumber= num1;
  if(num2 > maxNumber)
  {
      maxNumber=num2;
  }
  else
  {
      if(num3 >maxNumber)
      {
          maxNumber=num3;
      }

  }
  if(num3>num2)
  {
      maxNumber=num3;
  }
  return(maxNumber);
}

int main()
{

//to test maxOfThree
double num1;
double num2;
double num3;
double theMax;
char lowerCase;

//code to test maxOfThree
num1 = 6;
num2 = 7;
num3 = 4;
theMax = maxOfThree(num1, num2, num3);
cout << " The max of  "  << num1 << "  "  << num2 << "  and  " << num3 << " is " << theMax
<< endl;
lowerCase='A'+32;
cout<<lowerCase;
    return 0;
}
