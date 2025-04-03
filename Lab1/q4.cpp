#include <iostream>

using namespace std;

#define SQUARE(x) \
    cout << "The square of " << x << " is " << x*x << endl;

int main() {
    int x;
    cout << "What shall we square? ";
    cin >> x;
    SQUARE(x);
    return 0;
}