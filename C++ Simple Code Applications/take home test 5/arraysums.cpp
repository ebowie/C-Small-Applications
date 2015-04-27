/*
    Program: Array sums
    Author: Eric Bowers
    Date: 5 December 2012
    Lecture/Lab:ITCS 1212 002/1212 L11
    Purpose: To take a 5X5 array and get a user to enter between
                1 -25 and display the numbers in a box and sum the row,
                columns and diaganol and to see if they equal from to each other.
*/



#include <iostream>

using namespace std;

int main()
{
// variable
int spreadSheet[5][5]; // array for the 5x5
int rowTotal; // calculate row
int colTotal; // calculate column
int diaTotal; // calculate diaganol
int usesAnotherNumber[26]={false}; // to make sure a number does not  print twice
int samenNumber; // to make sure the number doesnt run twice

cout<<"if you are looking at the diagram please start with the number in the upper left corner (which is number 11) and make your way"
    <<"across and then start again at the first left number on the second row";

//this nested forloop is used to be able to enter all the 25 numbers in
for(int count = 0; count<5;count++)// the rows
{

for(int count2 = 0; count2<5; count2++)// the columns
{

    do// number not used twice
    {
        do// numbers between 1 -25
        {

        cout<<"\n \nenter a between 1 - 25: ";
        cin>>spreadSheet[count][count2];
        samenNumber = spreadSheet[count][count2];
        }while(spreadSheet[count][count2]<1 || spreadSheet[count][count2]>25);
    }while(usesAnotherNumber[samenNumber]==true);
    usesAnotherNumber[samenNumber]=true;
}
}


// this nested forloop is for to make the rows and columns are put in a 5x5 square
for(int count3 = 0; count3<5; count3++)//rows
{
    for(int count4 = 0; count4<5; count4++)// columns
    {

         cout<<spreadSheet[count3][count4]<<"  ";

if(spreadSheet[count3][count4] == spreadSheet[0][4])// the first line drop
    {
    cout<<"\n\n";
    }
if(spreadSheet[count3][count4] == spreadSheet[1][4])// the second line drop
    {
    cout<<"\n\n";
    }
    if(spreadSheet[count3][count4] == spreadSheet[2][4])// the third  line drop
    {
    cout<<"\n\n";
    }
    if(spreadSheet[count3][count4] == spreadSheet[3][4]) // the fourth line drop
    {
    cout<<"\n\n";
    }
    if(spreadSheet[count3][count4] == spreadSheet[4][4]) // the fifth line drop
    {
    cout<<"\n\n";
    }
    }
}

// summing the rows together
for(int count=0;count<5;count++)// row
{
    rowTotal= 0;
    for(int count2= 0; count2 <5;count2++)//col
    {
        rowTotal += spreadSheet[count][count2];//adding rows

    }
}
cout<<"\n summing the row is "<<rowTotal/5;//average of rows


// summing the columns together
for(int count2=0;count2<5;count2++)//col
{
    colTotal= 0;
    for(int count= 0; count <5;count++)//row
    {
        colTotal += spreadSheet[count][count2];//adding col
    }

}
cout<<"\n summing the col is "<<colTotal/5;// average of col

//summing the diagonal together
for(int count=0;count<5;count++)
{
    diaTotal= 0;

    for(int count2= 0; count2 <5;count2++)//col
    {
        diaTotal += spreadSheet[5-count-1][count2]; //adding the diagonal

    }
}
cout<<"\n summing the diagonal is "<<diaTotal/5;// average of diagonal

//using a if statement to print if the colmuns, row and diagonal is equal or not equal
 if (rowTotal== colTotal && rowTotal== diaTotal&& colTotal==diaTotal)
 {
     cout<<"\n the sum of rows, columns and diagonals are equal to each other";
 }
 else
 {
     cout<<"\n the sum of rows, columns and diagonals are not equal to each other";
 }

return 0;
}


