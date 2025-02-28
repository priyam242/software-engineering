/*  Number Guessing Game Write a C++ program that asks the user to guess a number between 1 and 100. The
program should provide hints if the guess is too high or too low. Use loops to allow
the user multiple attempts.
*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{

    srand(static_cast<unsigned int>(time(0)));

    int rendom_number = rand() % 100 + 1;

    int number;
    cout<<"\nWelcome to the Number Guessing Game!";

    cout<<"\nRendom numbers = "<<rendom_number;
    while (true)
    {
        cout<<"\nEnter the number = ";
        cin>>number;

        if (number < rendom_number)
        {
            cout<<"\nThe number is low. try again!";
        }
        else if (number > rendom_number)
        {
            cout<<"\nThe number is high.try again!";
        }
        else
        {
            cout<<"\nCongratulations! You guessed the correct number!";
            break;
        }
    }

    return 0;
}
