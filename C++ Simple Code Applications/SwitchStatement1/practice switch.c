int main()
{
float number1;
float number2;
float answer;
char choice ;

cout<<"Enter the first number:";
cin >> number1
cout<<"Enter the second number:";
cin >> number2

cout<<"\n\t\tA to Add\n";
cout<< "\t\tS to Subtract\n";
cout<< "\t\tM to mulitply\n";
cout<<"\t\tD to Divide\n";
cout<<"\t\t\tEnter your choice";

// process
switch(choice)
{
    case'a'
    case'A'answers = number1+ number2;
        break;
   case's'
   case'S'answer= number1-number2;
        break;
   case'm'
   case'M'answer = number1*number2;
        break;
   case'd'
   case'D' if(number2 == 0)
            {
                cout<<"you cant divde by zero!";
            }
            else
            {
                answer=number1/number2;
            }
            break;
    default:
            cout<<"you have enter a invalid choice\n";
            answer= -9.99999;

}
cout<<"your answer is:"<<answer<<endl;
cout<<"thank you for using our calculator."<<endl;



}
