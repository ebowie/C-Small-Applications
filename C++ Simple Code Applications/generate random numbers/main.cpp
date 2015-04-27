#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    int totalNumbers2;
    int randomNumbers2;
    int randomNumbers;
    int totalNumbers;
    char mathsign;
    int multiplication;
    int addition;
    srand(time(0));
    time-time(0);
    randomNumbers = rand()%3+1;

    srand(time(0));
    time-time(0);
    randomNumbers2 = rand()%4+1;

    cout<<"enter id you want addition problem or multipication problem:";
    cin>>mathsign;
    switch(mathsign)
    {

    case+:
        break;
    case*:
        break;
    }

    if(totalNumbers==totalNumbers2)
    {
        cout<<"Correct";
    }
    else
    {
        cout<<"incorrect"<< "\n the correct answers is "<<totalNumbers2;
    }

    return 0;
}
