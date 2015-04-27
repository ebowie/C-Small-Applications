#include <iostream>

using namespace std;

int main()
{
    int days;
    int months;
    int years;
    bool leap;
    int julian;

    cout<<"please enter a date in MM DD YYYY format: ";
    cin>> months;
    cin>>days;
    cin>>years;


    leap = (years%4==0 && years%100 != 0) || years%4==0;

    switch(months)
    {
        case 1: if(days >= 1 && days <= 31)
                {
                  cout<<"Your date is valid."<<endl;
                  julian = days;
                  cout<<"Julian date is: "<<julian<<endl;
                }
                else
                {
                    cout<<"Your date is invalid.";
                }
                break;
        case 2: if(leap == 1 && days >= 1 && days <= 29)
                {

                  cout<<"Your date is valid."<<endl;
                  julian = days + 31;
                  cout<<"Julian date is: "<<julian<<endl;
                }
                else
                {
                    if(leap == 0 && days>=1&& days <=28)
                    {
                        cout<<"Your date is valid"<<endl;
                        julian = days + 31;
                        cout<<"Julian date is: "<<julian<<endl;
                    }
                    else
                    {
                        cout<<"Your date is invalid";
                    }
                }

break;
        case 3: if(days >= 1 && days <= 31 && leap == 1)
                {
                  cout<<"Your date is valid."<<endl;
                  julian = days + 60;
                  cout<<"Julian date is: "<<julian<<endl;
                }
                else
                {
                    if(days >= 1 && days <= 31 && leap == 0)
                    {
                        cout<<"Your date is valid."<<endl;
                        julian = days + 59;
                        cout<<"Julian date is: "<<julian<<endl;
                    }
                    else
                    {
                        cout<<"your date is invalid";
                    }
                }

                break;
        case 4: if(days >= 1 && days <= 30 &&leap == 1)
                {
                  cout<<"Your date is valid."<<endl;
                  julian = days + 91;
                    cout<<"Julian date is: "<<julian<<endl;
                }
                else
                {
                    if(days >= 1 && days <= 30 && leap == 0)
                    {
                        cout<<"Your date is valid."<<endl;
                        julian = days + 90;
                        cout<<"Julian date is: "<<julian<<endl;
                    }
                    else
                    {
                        cout<<"your date is invalid";
                    }
                }
                break;
        case 5: if(days >= 1 && days <= 31 &&leap == 1)
                {
                  cout<<"Your date is valid."<<endl;
                  julian = days + 121;
                        cout<<"Julian date is: "<<julian<<endl;
                }
                else
                {
                     if(days >= 1 && days <= 31 && leap == 0)
                    {
                        cout<<"Your date is valid."<<endl;
                        julian = days + 120;
                        cout<<"Julian date is: "<<julian<<endl;
                    }
                    else
                    {
                        cout<<"your date is invalid";
                    }
                }
                break;
        case 6: if(days >= 1 && days <= 30 &&leap == 1)
                {
                  cout<<"Your date is valid."<<endl;
                  julian = days + 152;
                    cout<<"Julian date is: "<<julian<<endl;
                }
                else
                {
                    if(days >= 1 && days <= 30 && leap == 0)
                    {
                        cout<<"Your date is valid."<<endl;
                        julian = days + 151;
                        cout<<"Julian date is: "<<julian<<endl;
                    }
                    else
                    {
                        cout<<"your date is invalid";
                    }

                }
                break;
        case 7: if(days >= 1 && days <= 31 &&leap == 1)
                {
                  cout<<"Your date is valid."<<endl;
                  julian = days + 182;
                    cout<<"Julian date is: "<<julian<<endl;
                }
                else
                {
                    if(days >= 1 && days <= 31 && leap == 0)
                    {
                        cout<<"Your date is valid."<<endl;
                        julian = days + 181;
                        cout<<"Julian date is: "<<julian<<endl;
                    }
                    else
                    {
                        cout<<"your date is invalid";
                    }
                }
                break;
        case 8: if(days >= 1 && days <= 31 &&leap == 1)
                {
                  cout<<"Your date is valid."<<endl;\
                  julian = days + 213;
                   cout<<"Julian date is: "<<julian<<endl;
                }
                else
                {
                    if(days >= 1 && days <= 31 && leap == 0)
                    {
                        cout<<"Your date is valid."<<endl;
                        julian = days + 212;
                        cout<<"Julian date is: "<<julian<<endl;
                    }
                    else
                    {
                        cout<<"your date is invalid";
                    }
                }
                break;
        case 9: if(days >= 1 && days <= 30 &&leap == 1)
                {
                  cout<<"Your date is valid."<<endl;
                  julian = days + 244;
                   cout<<"Julian date is: "<<julian<<endl;
                }
                else
                {
                    if(days >= 1 && days <= 30 && leap == 0)
                    {
                        cout<<"Your date is valid."<<endl;
                        julian = days + 243;
                        cout<<"Julian date is: "<<julian<<endl;
                    }
                    else
                    {
                        cout<<"your date is invalid";
                    }
                }
                break;
        case 10: if(days >= 1 && days <= 31 &&leap == 1)
                {
                  cout<<"Your date is valid."<<endl;
                  julian = days + 274;
                   cout<<"Julian date is: "<<julian<<endl;
                }
                else
                {
                    if(days >= 1 && days <= 31 && leap == 0)
                    {
                        cout<<"Your date is valid."<<endl;
                        julian = days + 273;
                        cout<<"Julian date is: "<<julian<<endl;
                    }
                    else
                    {
                        cout<<"your date is invalid";
                    }
                }
                break;
        case 11: if(days >= 1 && days <= 30 &&leap == 1)
                {
                  cout<<"Your date is valid."<<endl;
                  julian = days + 305;
                        cout<<"Julian date is: "<<julian<<endl;
                }
                else
                {
                    if(days >= 1 && days <= 30 && leap == 0)
                    {
                        cout<<"Your date is valid."<<endl;
                        julian = days + 304;
                        cout<<"Julian date is: "<<julian<<endl;
                    }
                    else
                    {
                        cout<<"your date is invalid";
                    }
                }
                break;
        case 12: if(days >= 1 && days <= 31 &&leap == 1)
                {
                  cout<<"Your date is valid."<<endl;
                   julian = days + 335;
                        cout<<"Julian date is: "<<julian<<endl;
                }
                else
                {
                    if(days >= 1 && days <= 30 && leap == 0)
                    {
                        cout<<"Your date is valid."<<endl;
                        julian = days + 334;
                        cout<<"Julian date is: "<<julian<<endl;
                    }
                    else
                    {
                        cout<<"your date is invalid";
                    }
                }
                break;
                default: cout<<"wrong dates";
    }
    return 0;
}
