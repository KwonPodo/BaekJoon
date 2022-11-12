#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str; cin >> str;
    for (int i = 0; i < 3; i++)
        cout << ":fan:";
    cout << endl;
    
    cout << ":fan::" << str << "::fan:" << endl;

    for (int i = 0; i < 3; i++)
        cout << ":fan:";
}