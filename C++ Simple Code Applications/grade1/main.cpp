/*
    Program:
    Author:
    Date:
    Purpose:
*/
#include <iostream>

using namespace std;

int main()
{
 // variables
 int score;


 char letterGrade;

 //
cout<<"Enter score on your test:";
cin>>score;

// the process
if(score >=90)
   {
    letterGrade='A';
   }
   else//if not >=80
   {
       if(score >=80)
        {
            letterGrade='B';
        }
         else //ifnot gradeB
        {
        letterGrade='C';
        }
    }
//output
cout<<"your grade is :"<<letterGrade<<endl;
    return 0;
}
