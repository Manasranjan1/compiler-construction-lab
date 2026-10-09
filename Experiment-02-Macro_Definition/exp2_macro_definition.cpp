#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;

    cout << "Enter assembly instruction: ";
    getline(cin, s);

    if (s.find("MACRO") >= 0)
        cout << "It is a macro definition.";
    else
        cout << "It is not a macro definition.";

    return 0;
}