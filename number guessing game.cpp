#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void playGame() {
    srand(time(0)); 
    int randomNumber = rand() % 100 + 1; 
    int userGuess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have chosen a number between 1 and 100." << endl;
    cout << "Can you guess it? Let's begin!" << endl;

    // Game loop
    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else if (userGuess > randomNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
        }
    } while (userGuess != randomNumber);
}

int main() {
    playGame();
    return 0;
}

