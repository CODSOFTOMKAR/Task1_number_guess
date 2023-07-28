//TASK 1
//Create a program that generates a random number and asks the user to guess it.
//Provide feedback on whether the guess is too high or too low until the user guesses the correct number
#include <iostream>
using namespace std;
int main()
{
	int num=4;//we can give default number for guessing
	int guessnum;
	bool isguess=true;
	cout<<"\t\t*WELCOME TO NUMBER GUESSING GAME*\n";
	do
	{
		
		cout<<"Enter Guess the number between 1 to 10:";
		cin>>guessnum;
		
		if(num>guessnum)
		{
			cout<<"OOPS SORRY!!TRY A GREATER NUMBER THAN"<<"\t"<<guessnum<<endl;
			isguess = false;
			cout<<"\n";
		}
		else if(num < guessnum)
		{
			cout<<"OOPS SORRY!! TRY A SMALLER NUMBER THAN"<<"\t"<<guessnum<<endl;
			isguess = false;
			cout<<"\n";
		}
		else if(num == guessnum)
		{
			cout<<"CONGRATES!!YOU WON !!"<<endl;
			isguess = true;
		}
		else
		{
			cout<<"OOPS ERROR!!"<<endl;
		}
	}
	while(isguess ==false);
}
