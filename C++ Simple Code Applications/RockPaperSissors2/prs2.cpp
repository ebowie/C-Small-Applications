/*
    Program: Rock, Paper, and Scissor game with loops!
    Author: Eric Bowers
    Date: 10 November 2012
    Lecture/Lab:ITCS 1212 002/1212 L11
    Purpose: To make a program to play rock paper scissor with
             the computer and add loops to it to determine the number of hands and score.
*/

#include <iostream>
#include <cstdlib>// to do the random numbers
#include <ctime> // to do timing of random numbers

using namespace std;

int main()
{
    // the variobles
    char choiceOfTheGame;// the varible for picking your game choice
    int computerChoice;// a variable for the computer to use it as a number
    int manyGames; // and display it as a word.
    int playAgain; //play a loop again
    char goAgain;
    int userPoint; // score for user
    int computerPoint; // score for computer
    int manyHands; // calculate how many time to the loop goes.

do
{
cout<<"\n Do want to play a game of Rock, Paper, or Scissor, enter 'y' : "; // if you want to play the game you push y
cin>>goAgain;
}while(goAgain != 'y'&& goAgain != 'Y'); //the loop make sure you push y

while(goAgain=='y'||goAgain=='Y') // plays the loop with y
{
 userPoint=0; // score reset
 computerPoint=0; // score reset
 manyHands= 0; // calculate how many time to the loop goes.

//using a do-while loop to determing if the number is odd or not
do
{
cout<<" \n Please enter a odd number for how many hands you want to play of Rock, Paper,or Scissor: ";
cin>> manyGames;
}while(manyGames%2==0);


//using a do-while loop to determine how many hands that need to be made or when
// or when a certain amount points are won from the user or computer
do
{
manyHands++;

// this do-while loop is determine if there are ties in the game, then they would play another one until whoever get
// the point.
do
{

//this do- while loop is for switch statement, if the user decides to pick another letter besides R,S,P.
do
{




    srand(time(0)); // random number function
    time-time(0); // the time of the function
    computerChoice = rand()%3+1;// making randoms number from 1 to 3



    // input the choice of rock, paper, and scissor.
    cout<<"\n\nPick Paper, Rock, or Scissor"
        <<"\n R. For Rock"
        <<"\n P. For Paper"
        <<"\n S. For Scissor"
        <<"\n\t Enter your choice: ";// displaying all your choices for the game
        cin>> choiceOfTheGame; // inputing your choice
 cout<<"----------------------------";

    // the switch statement for the choice
    switch(choiceOfTheGame) // creating a switch statement for the computer and user to pick  its choice

    {
        case'r':
        case'R':cout<<"\nUser: ROCK!!! ";// displaying if its rock
                if(computerChoice==3) // using nested if statment in 3 scenarios if it is rock and to determing the increments or decrements of the score
                {

                    cout<<"\n\t VS "<<"\nComputer: ROCK!!!: "<<"....You tie with the computer";
                    cout<<"\n\nScore: You:"<<userPoint<<" Computer:"<<computerPoint;
                    cout<<"\n\n------------------------------------";
                }
                else
                {
                    if(computerChoice==2)
                    {
                        cout<<"\n\t VS "<<"\nComputer: SCISSOR!!!: "<<"....You Won";
                        cout<<"\n\nScore: You:"<<++userPoint<<" Computer:"<<computerPoint;
                         cout<<"\n\n------------------------------------";

                    }
                    else
                    {
                        if(computerChoice==1)
                        {
                            cout<<"\n\t VS "<<"\n Computer: PAPER!!!: "<<"....You lose";
                            cout<<"\n\nScore: You:"<<userPoint<<" Computer:"<<++computerPoint;
                             cout<<"\n\n------------------------------------";

                        }
                    }
                }

            break;

        case'p':
        case'P':cout<<"\nUser: PAPER!!! "; // displaying if its paper
                if(computerChoice==1) // using nested if statment in 3 scenaros if it is paper and to determing the increments or decrements of the score
                {
                    cout<<"\n\t VS "<<"\nComputer: ROCK!!!: "<<"....You Won";
                    cout<<"\n\nScore: You:"<<++userPoint<<" Computer:"<<computerPoint;
                     cout<<"\n\n------------------------------------";

                }
                else
                {
                    if(computerChoice==2)
                    {
                        cout<<"\n\t VS "<<"\nComputer: SCISSOR!!!: "<<"....You Lose";
                         cout<<"\n\nScore: You:"<<userPoint<<" Computer:"<<++computerPoint;
                          cout<<"\n\n------------------------------------";

                    }
                    else
                    {
                        if(computerChoice==3)
                        {
                            cout<<"\n\t VS "<<"\nComputer: PAPER!!!: "<<"....You  tied with the computer";
                            cout<<"\n\nScore: You:"<<userPoint<<" Computer:"<<computerPoint;
                             cout<<"\n\n------------------------------------";




                        }
                    }
                }
            break;
        case's':
        case'S':cout<<"\nUser: SCISSOR!!! "; // display if its scissor
                if(computerChoice==2) // using a nested if statment in 3 scenaros ifit is scissor and to determing the increments or decrements of the score
                {
                    cout<<"\n\tVS "<<"\nComputer: ROCK!!!: "<<"....You Lose";
                     cout<<"\n\nScore: You:"<<userPoint<<" Computer:"<<++computerPoint;
                      cout<<"\n\n------------------------------------";

                }
                else
                {
                    if(computerChoice==3)
                    {
                        cout<<"\n\t VS "<<"\nComputer: SCISSOR!!!: "<<"....You tied with the computer";
                        cout<<"\n\nScore: You:"<<userPoint<<" Computer:"<<computerPoint;
                         cout<<"\n\n------------------------------------";


                    }
                    else
                    {
                        if(computerChoice==1)
                        {
                            cout<<"\n\t VS "<<"\nComputer: PAPER!!!: "<<"....You Won";
                            cout<<"\n \nScore: You:"<<++userPoint<<" Computer:"<<computerPoint;
                             cout<<"\n\n------------------------------------";

                        }
                    }
                }
            break;
            default: cout<<"you did not pick any of the options, please try again";
            break;
}
}while(choiceOfTheGame != 'r'&&choiceOfTheGame!='R'&& choiceOfTheGame != 'p'&& choiceOfTheGame != 'P'&&choiceOfTheGame != 's'&&choiceOfTheGame != 'S'); // to make sure they pick the right letter

}while(computerChoice==3 );// calculate the ties with the random number system of 3

}while(manyHands<manyGames&&userPoint<manyGames/2+1&& computerPoint<manyGames/2+1);

//to determine if the user lost or won the game.
if (userPoint>computerPoint)
{
    cout<<"\n\n GAME OVER: You WIN!! ";
}
else
{
    cout<<"\n\n GAME OVER: You LOSE!!";
}


cout<<"\n do you want to play another game: ";// to play the game again
cin>>goAgain;

}

return 0;
}
