#include <iostream>
#include <string>

using namespace std;

namespace MathOperations
{
    int add(int first, int second)
    {
        return first + second;
    }
}

namespace TextOperations
{
    string concat(string eka, string toka)
    {
        return eka+toka;
    }
}

using namespace MathOperations;
using namespace TextOperations;

int main()
{
    cout<<add(1, 3);
    cout<<concat("\nHello ", "World");
}
