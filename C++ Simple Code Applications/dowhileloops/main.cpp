#include <iostream>

using namespace std;

int main()
{
    int score1;
    int score2;
    int score3;
    double average;
    char again;

    do
    {
        cout<<"enter three test scores: ";
        cin>>score1>>score2>>score3;

        average = (score1 + score2 + score3)/ 3.0;

        cout<<"this is your average"<<average<<endl;

        cout<<"do you want to average another set, enter y or n: ";
        cin>>again;

    }while(again =='y'|| again == 'Y');


    return 0;

}
