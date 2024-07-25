//number guessing game using do-while
#include<iostream>
using namespace std;
int main()
{
    /*declare variable for the secrect number and the users guess*/
	int num=18;
	int guess;
	do/*start a do-while loop that continues untill the guess is correct*/
	{
		cout<<"enter any number"<<endl;
		cin>>guess;/*read the users guess from input*/
		if(guess<num)/*check if the guess is less than the secret number*/
		{
			cout<<"the number you enter is less "<<endl;/*inform the user that guess is less*/
		}
		else if(guess>num)/*check if the guess is greater than the secret number*/
		{
			cout<<"the number you enter is greater"<<endl;/*inform the user that guess is greater*/
		}
		else if(guess=num)/*check if the guess is equal to the secret number*/
		{
			cout<<"CONGRATULATIONS!YOUR GUESS IS RIGHT"<<endl;
		}
	}
	while(guess!=num);/*continue the loop untill the guess is correct*/
}