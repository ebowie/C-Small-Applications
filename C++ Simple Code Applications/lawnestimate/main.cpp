/*
    Program:lawnestimate.cpp
    Author: Eric Bowers 800771141
    Date:9/12/2012
    Purpose: write a progrmae that computes how much he should
             charge to mow a lawn
*/
#include <iostream>

using namespace std;

int main()
{
 const int MOW_RATE = .25;

 const  int CHARGE_RATE=10;

 int lengthYard;
 int widthYard;
 int lengthHouse;
 int widthHouse;
 int areaHouse;
 int areaYard;
 int areaLawn;
 int totalHours;
 int totalCharge;

 //get input from user
 cout<<"what is the length of the yard:"<< endl;
 cin>> lengthYard;

 cout<< "what is the width of the yard:"<< endl;
 cin >> widthYard;

 cout<< "what is the length of the house:"<< endl;
 cin>>lengthHouse;

 cout<< "what is the width of the house:"<< endl;
 cin>> widthHouse;

 // the process of totalhours and totalcost
 areaYard= (lengthYard * widthYard);
 areaHouse= (lengthHouse* widthHouse);
 areaLawn= (areaYard-areaHouse);
 totalHours = (60)/(MOW_RATE/areaLawn);
 totalCharge = (totalHours* CHARGE_RATE);

 //display results
 cout<<"this is the amount of hours it will take:"<<totalHours<< endl;
 cout<< " this is how much it will cost:"<<totalCharge<< endl;
     return 0;
}
