/*
    Program:LabTest2
    Author: Eric Bowers
    Date: 7 Nov 2012
    lab:1212 L11
    Purpose: write a program then generates a random interger in th range of 1 to 50. give the user, at most 5 chances to guess the number
*/

#include <iostream>
#include <cstdlib> // makes the random number system work
#include <ctime>


using namespace std;

int main()
{
    int randomNumber; // to make the random number.
    int guessNumber;  // input the guess number
    int manyTries=0; // to display the how many tries it took to guess the number

    srand(time(0));
    randomNumber = rand()%50 + 1; // random number between 1 and 50
cout<<randomNumber;

for(int numberOfTries=6;numberOfTries >1;numberOfTries--) // forloop to develop 5 tries of the same display message
{
    cout<<"\n Guess the lucky number between 1 and 50, you have "<< numberOfTries- 1<<" chances left:"; // input the lucky number
    cin>>guessNumber;

    manyTries++; // calculate how many time the loop has ran and display as the tries it took you to guess the number

    if(guessNumber==randomNumber) // if statement is use to display if the luck number is right
    {
        cout<<"\n You guess it in "<<manyTries<<" Tries Good Job!";

        numberOfTries=0; // this stops the loop if the guess number is right i five  tries
    }

}

    if(guessNumber!= randomNumber) // this if statement displays if  you did not guess the lucky number, then it would tell you what the lucky number is
    {
    cout<<" \n You used up your five chances, the lucky number is:"<<randomNumber;

    }

    return 0;
}
