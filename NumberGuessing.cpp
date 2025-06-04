#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int secret = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Please enter a valid number." << endl;
            continue;
        }

        attempts++;

        if (guess < secret) {
            cout << "Too low. Try again." << endl;
        } else if (guess > secret) {
            cout << "Too high. Try again." << endl;
        } else {
            cout << "Correct! You guessed it in " << attempts << " attempts." << endl;
            break;
        }
    }

    return 0;
}