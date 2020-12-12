#include <iostream>
using namespace std;

int main() {
    int current = 1, last = 0, length = 0, d = 0, fib = 0;
    cout << "How many numbers would you like to display in Fibonacci's Sequence?" << endl;
    cin >> length;
    cout << fib << endl;
    cout << fib + 1 << endl;
    while (d < (length - 2)){
        fib = current + last;
        current += last;
        last = current - last;
        ++d;
        cout << fib << endl;
    }

    return 0;
}
