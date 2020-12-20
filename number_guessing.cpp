#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to number guessing game!" << endl;
    int number = 200;
    int guess = 0;
    cin >> guess;
    if (guess <= 1000) {
        while (guess != number && guess <= 1000) {
            if (guess < number) {
                cout << "Number " << guess << " is too small. Try again." << endl;
            }
            else if (guess > number) {
                cout << "Number " << guess << " is too high. Try again." << endl;
            }
            cin >> guess;
        }
        cout << "Correct answer. Number was " << guess << endl;
    }
    else {
        cout << "Number is in range between 0 and 1000";
    }
    return 0;
}
