#include <iostream>
#include <ctime>

using namespace std;

int main() {
    unsigned int seed = static_cast<unsigned int>(time(nullptr));
    srand(seed);
    int secretNumber = (rand() % 100) + 1;

    int userGuess;
    int attempts = 0;

    cout << "Welcome to number guessing game " << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;

    while (true) {
        cout << "Take a guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (userGuess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the correct number, which is " << secretNumber << "." << endl;
            cout << "It took you " << attempts << " attempts." << endl;
            break;
        }
    }

    return 0;
}

