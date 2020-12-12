#include <iostream>

using namespace std;

int main() {
    cout << "Enter any letter to check if it's vowel or consonant: ";
    char letter;
    cin >> letter;
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u'){
        cout << letter << " is vowel!";
    }
    else {
        cout << letter << " is consonant!";
    }
    return 0;
}
