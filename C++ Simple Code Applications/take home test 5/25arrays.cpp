#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    int randomNumber;
    int spreadSheet[5][5];
    bool numberUsedagain[26]={false};
    int total = 0;


srand(time(0));


    for(int count=0;count<5;count++)
    {
        for(int count2=0;count2<5;count2++)
        {


        do
        {
            randomNumber=rand()%26;
            spreadSheet[count][count2]=randomNumber;
        }while(numberUsedagain[randomNumber]==true);
            numberUsedagain[randomNumber]=true;
            total+=randomNumber;
            cout<<spreadSheet[count][count2]<<"  ";


    if(spreadSheet[count][count2] == spreadSheet[0][4])
    {
    cout<<"\n\n";
    }
    if(spreadSheet[count][count2] == spreadSheet[1][4])
    {
    cout<<"\n\n";
    }
    if(spreadSheet[count][count2] == spreadSheet[2][4])
    {
    cout<<"\n\n";
    }
    if(spreadSheet[count][count2] == spreadSheet[3][4])
    {
    cout<<"\n\n";
    }
    if(spreadSheet[count][count2] == spreadSheet[4][4])
    {
    cout<<"\n\n";
    }
    }
        }






cout<<"the total is "<<total<<endl;
    return 0;
}
