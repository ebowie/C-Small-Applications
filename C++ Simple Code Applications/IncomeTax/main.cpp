






#include <iostream>
#include<iomanip>

using namespace std;

int main()
{

    double income;
    float percent;
    float incomeTax;

    cout<<"What is your income?: $";
    cin>>income;

    if(income>500000)
    {
        percent = .06;
        incomeTax = income * percent;
    }
    else
    {
        if(income>250000)
        {
            percent = .05;
            incomeTax = income * percent;

        }
        else
        {
            if(income>100000)
            {
                percent = .04;
                incomeTax = income * percent;

            }
            else
            {
                if(income>75000)
                {
                    percent = .03;
                    incomeTax = income * percent;

                }
                else
                {
                    if(income>50000)
                    {
                        percent = .02;
                        incomeTax = income * percent;

                    }
                    else
                    {
                        percent = .01;
                        incomeTax = income * percent;
                    }
                }
            }
        }
    }

    cout<<setprecision(2)<<fixed<<"Your income tax is: $"<<incomeTax<<endl;




    return 0;
}
