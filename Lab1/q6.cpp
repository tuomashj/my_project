#include <iostream>

using namespace std;

int main() {
    int x; 
    cout << "Gimme numba: ";
    cin >> x;
    string numbers = to_string(x);
    string reverse = "";
    for (int i = numbers.length()-1; i >= 0; i--) {
        reverse+=numbers[i];

    }
    cout << reverse;
    return 0;
}