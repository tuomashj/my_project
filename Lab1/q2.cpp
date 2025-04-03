#include <iostream>

using namespace std;

string toUpper(string sth) {
    for (int i = 0; i<sth.length(); i++) {
        sth[i] = toupper(sth[i]);
    }
    return sth;
}
int main()
{
    string x;
    cout<<"Gimme sumn: ";
    cin>>x;
    cout << toUpper(x);
    return 0;
}
