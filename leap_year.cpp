#include <iostream>
using namespace std;

int main() {
    cout << "Enter a year: ";
    int year = 0;
    cin >> year;
    if (year % 4 == 0){
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                cout << "Year is leap!" << endl;
            } else {
                cout << "Year is not leap!" << endl;
            }
        }
        else {
            cout << "Year is leap!" << endl;
        }
    }
    else {
        cout << "Year is not leap!" << endl;
    }
    return 0;
}
