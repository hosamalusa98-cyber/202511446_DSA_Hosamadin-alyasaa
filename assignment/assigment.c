#include <iostream>
#include <vector>
using namespace std;

int main() {

    int chosenNumber = 7;
    int userGuess = 0;

    vector<int> guesses;

    while (userGuess != chosenNumber) {

        cout << "Enter a number: ";
        cin >> userGuess;

        // store guess in array/list
        guesses.push_back(userGuess);

        // compare the guess
        if (userGuess > chosenNumber) {
            cout << "Too high" << endl;
        }
        else if (userGuess < chosenNumber) {
            cout << "Too low" << endl;
        }
        else {
            cout << "Correct" << endl;
        }
    }

    // display all guesses
    cout << "\nAll guesses:" << endl;

    for (int i = 0; i < guesses.size(); i++) {
        cout << guesses[i] << endl;
    }

    return 0;
}
