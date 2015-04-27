#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
int numstudents;
int numtest;
double total;
double average;

cout<<fixed<<showpoint<<setprecision(1);

cout<<"this program averages test per student.\n";
cout<<"for how many students do you have scores? ";
cin>>numstudents;

cout<<"how many test scores does each student have: ";
cin>>numtest;

for(int student = 1; student <= numstudents; student++)
{
    total = 0;
    for(int test = 1; test<=numtest; test++)
    {
       double score;
        cout<<"enter score"<<test<<"for";
        cout<<"student"<<student<<": ";
        cin >> score;
        total += score;
    }
    average = total / numtest;
    cout<< "the averages score  for student "<<student;
    cout<< " is "<<average<<"\n\n";

}

    return 0;
}
