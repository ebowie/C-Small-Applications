#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
int startingpoint = 60;
int endingpoint = 130;
int increment = 10;

const float COVERSION = 0.6214;

int kph;
double mph;

cout<<fixed<<showpoint<<setprecision(2);

cout<<"kph\t\tmph"
    <<"\n------------------\n";
for(int kph = startingpoint; kph <= endingpoint; kph+=increment)
{


    mph = kph * COVERSION;

    cout<<kph<<"\t\t"<<mph<<endl;
}
    return 0;
}
