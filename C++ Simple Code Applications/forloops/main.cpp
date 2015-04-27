#include <iostream>

using namespace std;

int main()
{
int num;
int MIN_NUMBER;
int MAX_NUMBER;

cout<<"I will display a table of number of squares"
    <<"\n Enter the starting number: ";
    cin>> MIN_NUMBER;

    cout<<"Enter the ending number";
    cin>> MAX_NUMBER;

    cout<<"Number Number Square"
        <<"\n---------------------\n";
    for(int num = MIN_NUMBER; num <= MAX_NUMBER; num++)
    cout<<num<<"\t\t"<<(num * num)<<endl;

    return 0;
}
