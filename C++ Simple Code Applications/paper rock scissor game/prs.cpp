/*
    Program: Rock, Paper, and Scissor game!
    Author: Eric Bowers
    Date: 9 October 2012
    Lecture/Lab:ITCS 1212 002/1212 L11
    Purpose: To make a program to play rock paper scissor with
             the computer.
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
    int x=0;
    int y=0;
    int manyGames; // and display it as a word.
    int playAgain;
    int number;
    int z= 0;
do
{

cout<<"please enter a odd number for how many games you want to play of Rock, Paper, or Scissor: ";
cin>> manyGames;


}while(manyGames%2==0);





while(z<manyGames)
{


z++;
do
{









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
        <<"\n\t Enter your choice: "; // displaying all your choices for the game
        cin>> choiceOfTheGame; // inputing your choice

    // the switch statement for the choice



    switch(choiceOfTheGame) // creating a switch statement for the computer and user to pick  its choice

    {
        case'r':cout<<"\nUser: ROCK!!! ";// displaying if its rock
        case'R':if(computerChoice==3) // using nested if statment in 3 scenarios if it is rock
                {

                    cout<<"\n\t VS "<<"\nComputer: ROCK!!!: "<<"....You tie with the computer";
                    cout<<"\n\n Score: You:"<<x<<"computer:"<<y;
                    cout<<"\n\n------------------------------------";


                }
                else
                {
                    if(computerChoice==2)
                    {
                        cout<<"\n\t VS "<<"\nComputer: SCISSOR!!!: "<<"....You Won";
                        cout<<"\n\n Score: You:"<<++x<<"computer:"<<y;
                         cout<<"\n\n------------------------------------";

                    }
                    else
                    {
                        if(computerChoice==1)
                        {
                            cout<<"\n\t VS "<<"\n Computer: PAPER!!!: "<<"....You lose";
                            cout<<"\n \nScore: You:"<<x<<"  computer:"<<++y;
                             cout<<"\n\n------------------------------------";

                        }
                    }
                }

            break;
        case'p':cout<<"\nUser: PAPER!!! "; // displaying if its paper

        case'P':if(computerChoice==1) // using nested if statment in 3 scenaros if it is paper
                {
                    cout<<"\n\t VS "<<"\nComputer: ROCK!!!: "<<"....You Won";
                    cout<<"\n\n Score: You:"<<++x<<"computer:"<<y;
                     cout<<"\n\n------------------------------------";

                }
                else
                {
                    if(computerChoice==2)
                    {
                        cout<<"\n\t VS "<<"\nComputer: SCISSOR!!!: "<<"....You Lose";
                         cout<<"\n\n Score: You:"<<x<<"  computer:"<<++y;
                          cout<<"\n\n------------------------------------";

                    }
                    else
                    {
                        if(computerChoice==3)
                        {
                            cout<<"\n\t VS "<<"\nComputer: PAPER!!!: "<<"....You  tied with the computer";
                            cout<<"\n \nScore: You:"<<x<<"computer:"<<y;
                             cout<<"\n\n------------------------------------";




                        }
                    }
                }
            break;
        case's':cout<<"\nUser: SCISSOR!!! "; // display if its scissor
        case'S': if(computerChoice==2) // using a nested if statment in 3 scenaros ifit is scissor
                {
                    cout<<"\n\tVS "<<"\nComputer: ROCK!!!: "<<"....You Lose";
                     cout<<"\n\n Score: You:"<<x<<"  computer:"<<++y;
                      cout<<"\n\n------------------------------------";

                }
                else
                {
                    if(computerChoice==3)
                    {
                        cout<<"\n\t VS "<<"\nComputer: SCISSOR!!!: "<<"....You tied with the computer";
                        cout<<"\n \nScore: You:"<<x<<"computer:"<<y;
                         cout<<"\n\n------------------------------------";


                    }
                    else
                    {
                        if(computerChoice==1)
                        {
                            cout<<"\n\t VS "<<"\nComputer: PAPER!!!: "<<"....You Won";
                            cout<<"\n \nScore: You:"<<++x<<"computer:"<<y;
                             cout<<"\n\n------------------------------------";

                        }
                    }
                }
            break;
        default:cout<<"\n this was not a option";
            break;
    }
    }while(choiceOfTheGame != 'r'&& choiceOfTheGame != 'p'&&choiceOfTheGame != 's');
}while(computerChoice==3);



}

  if (x>y)
{
    cout<<"\n\n GAME OVER: You WIN!! ";
}
else
{
    cout<<"\n\n GAME OVER: You LOSE!!";
}

return 0;
}
