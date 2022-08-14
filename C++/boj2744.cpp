#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str; cin >> str;
    for (char c : str)
    {
        if ('a' <= c && c <= 'z') 
            cout << char(c - 'a' + 'A');
        else 
            cout << char(c - 'A' + 'a');
    }
}