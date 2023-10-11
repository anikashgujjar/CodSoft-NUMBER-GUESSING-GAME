#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num, guess, tries = 0,n;
     
	srand(time(0)); //seed random number generator
    cout<<"Enter the number for the random nuumber operator \n";
    cin>>n;
	num = rand() % n + 1; // random number between 1 and 100
    
	cout << "Guess My Number Game\n\n";



	do
	{
		cout << "Enter a guess between 1 and n : ";
		cin >> guess;
		tries++;

		if (guess > num)
			cout << "Too high!\n\n";
		else if (guess < num)
			cout << "Too low!\n\n";
		else
			cout << "\nCorrect! You got it in " << tries << " guesses!\n";
	} while (guess != num);

	return 0;
}

