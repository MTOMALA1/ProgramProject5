/*Program File Name: Programproject2
Programmer: Marcos Tomala
Date: November 2025
Requirements:
Write a prgram that allows you to guess a random number with hints.

*/
#include <iostream>
#include <random>   // For random number generation
using namespace std;

int main() {
    const int Min = 1;
    const int Max = 100;
    random_device rand;                       
    uniform_int_distribution<int> dist(Min, Max);  

    int TheNumber = dist(rand);
    int guesses;
    int attempts = 0;

    cout << "Im thinking of a number between 1 and 100 can you guess my secret number?" << endl;

    
    do {
        cout << "\nEnter your guess: ";

        
        while (!(cin >> guesses) || guesses < 1 || guesses > 100) {
            cout << "Invalid input! Please enter a number between 1 and 100: ";
            
        }

        attempts++;

        if (guesses < TheNumber) {
            cout << "Too low...";
        }
        else if (guesses > TheNumber) {
            cout << "Too high!.";
        }
        else {
            cout << "\nCorrect. You guessed the number in "
                << attempts << " attempts." << endl;
        }

    } while (guesses != TheNumber);

    return 0;
}

