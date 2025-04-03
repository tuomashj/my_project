#include <iostream>

using namespace std;

#define MIN_LENGTH 8

int main() {
    string x; 
    cout << "Password: ";
    cin >> x;

    string weak = "Weak Password, missing";
    string strong = "Strong Password";

    int min = 0;
    int upper = 0;
    int lower = 0;
    int digit = 0;
    int special = 0;

    if (x.length() < MIN_LENGTH) {
        weak+="\nminimum length of 8 characters";
    } else {
        min = 1;
    }

    if (x.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ01234567890") != string::npos) {
        special++;
    }

    for (int i = 0; i < x.length(); i++) {
        char c = x[i];
        if (isupper(c)) {
            upper++;               
        }
        if (islower(c)) {
            lower++;
        }
        if (isdigit(c)) {
            digit++;
        }
          
    }
    
    if (upper < 1)  {
        weak+= "\nat least one uppercase letter";
    }
    if (lower < 1) {
        weak+= "\nat least one lowercase letter";
    }
    if (digit < 1) {
        weak += "\nat least one number";
    }
    if (special < 1) {
        weak += "\nat least one special character";
    }

    if (min > 0 && upper > 0 && lower > 0 && digit > 0 && special > 0) {
        cout << strong;
    } else {
        cout << weak;
    }
    return 0;
}