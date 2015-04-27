#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
int days;
double total = 0.0;

cout<<"how many days to do you have sales figurs?: ";
cin>> days;

for(int count = 1; count <= days; count++ )
{
    double sales;
    cout<<"Enter the sales for day "<<count<<": ";
    cin>>sales;
    total += sales;
}

cout<<fixed<<showpoint<<setprecision(2);
cout<<"the totalsales are $"<<total<<endl;
    return 0;
}
