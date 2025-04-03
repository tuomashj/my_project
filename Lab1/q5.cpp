#include <iostream>

using namespace std;

int main() {
    int x; 
    cout << "Gimme numba: ";
    cin >> x;
    string numbers = to_string(x);
    int sum = 0;
    for (int i = 0; i < numbers.length(); i++) {
        int n = numbers[i]-48;
        sum+=n;

    }
    cout << sum;
    return 0;
}