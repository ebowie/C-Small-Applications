#include <iostream>

using namespace std;

int main()
{
   int sales;
   int years;
   int bonus;

   //input
   cout<<"enter you sale:";
   cin>> sales;

   cout<<"enter how long you have worked there:";
   cin>> years;

    //process
    if(sales >10000)
    {
        if(years >= 5)
        {
        bonus=3000;
        }
         else
         {
          bonus=1000;
         }
    }
    else
    {
    bonus=300;
    }

    //output
    cout<<"here is your bonus"<<bonus<<endl;
    return 0;
}
