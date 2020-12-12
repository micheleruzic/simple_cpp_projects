#include <iostream>

using namespace std;

int main() {
    cout << "Enter the first number: ";
    int a = 0;
    cin >> a;
    cout << "Enter the second number: ";
    int b = 0;
    cin >> b;
    cout << "Enter the third number: ";
    int c = 0;
    cin >> c;
    if (a >= b && a >= c){
        cout << a << " is the biggest!";
    }
    else if (b >= a && b >= c){
        cout << b << " is the biggest!";
    }
    else if (c >= b && c >= a){
        cout << c << " is the biggest!";
    }
    return 0;
}
