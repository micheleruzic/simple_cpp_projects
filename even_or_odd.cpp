#include <iostream>

using namespace std;

int main() {
    cout << "Enter a number which you would like to check if its even or odd: ";
    int num = 0;
    cin >> num;
    if (num % 2 == 0){
        cout << num << " is even!" << endl;
    }
    else {
        cout << num << " is not even!" << endl;
    }
    return 0;
}
